/*
 * XREFs of MiUnloadHotPatch @ 0x140858218
 * Callers:
 *     NtManageHotPatch @ 0x140858470 (NtManageHotPatch.c)
 * Callees:
 *     VslRevertHotPatch @ 0x14027BE0C (VslRevertHotPatch.c)
 *     MmReleaseLoadLock @ 0x140651A40 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140651A80 (MmAcquireLoadLock.c)
 *     MiApplyHotPatchToDriver @ 0x140854344 (MiApplyHotPatchToDriver.c)
 *     MiDeleteHotPatchRecord @ 0x140854BEC (MiDeleteHotPatchRecord.c)
 *     MiHotPatchAllProcesses @ 0x1408552A8 (MiHotPatchAllProcesses.c)
 */

__int64 __fastcall MiUnloadHotPatch(unsigned int a1, unsigned int a2)
{
  struct _KTHREAD *Lock; // rbp
  int v5; // ebx
  NTSTATUS v6; // eax
  int v7; // eax

  Lock = MmAcquireLoadLock();
  v5 = 0;
  MiDeleteHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, 0LL, a1, a2);
  v6 = VslRevertHotPatch(0LL, a1, a2);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741515 )
    v5 = v6;
  v7 = MiApplyHotPatchToDriver(a1, a2, 0LL);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741515 && v5 >= 0 )
    v5 = v7;
  MmReleaseLoadLock((__int64)Lock);
  MiHotPatchAllProcesses(a1, a2);
  return (unsigned int)v5;
}
