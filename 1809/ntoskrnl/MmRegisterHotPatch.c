/*
 * XREFs of MmRegisterHotPatch @ 0x1409F81D0
 * Callers:
 *     IopLoadBootHotPatches @ 0x1409E0290 (IopLoadBootHotPatches.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     VslDetermineHotPatchType @ 0x140819700 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x14085525C (MiAllocateHotPatchRecord.c)
 *     MiApplyHotPatchToDriver @ 0x140855584 (MiApplyHotPatchToDriver.c)
 *     MiInsertHotPatchRecord @ 0x140856AF0 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 */

NTSTATUS __fastcall MmRegisterHotPatch(const void **a1, int a2, unsigned int a3)
{
  NTSTATUS result; // eax
  struct _KTHREAD *Lock; // rbp
  _QWORD *HotPatchRecord; // rax
  int v9; // ebx
  int v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  if ( (MiFlags & 0x8000) == 0 )
    goto LABEL_5;
  result = VslDetermineHotPatchType(a2, a3, &v12);
  if ( result < 0 )
    return result;
  if ( (v12 & 2) != 0 )
    return MiLoadHotPatch(a1, 1, &v10, &v11);
LABEL_5:
  Lock = MmAcquireLoadLock();
  HotPatchRecord = MiAllocateHotPatchRecord(a2, a3, a1);
  if ( HotPatchRecord )
  {
    MiInsertHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, HotPatchRecord, 0);
    if ( (MiFlags & 0x8000) == 0
      || (int)MiApplyHotPatchToDriver(a2, a3, (__int64)a1) < 0
      || (v9 = MiLoadHotPatch(a1, 0, &v10, &v11), v9 >= 0) )
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  MmReleaseLoadLock((__int64)Lock);
  return v9;
}
