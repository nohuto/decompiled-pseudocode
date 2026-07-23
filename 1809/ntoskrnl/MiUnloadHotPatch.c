/*
 * XREFs of MiUnloadHotPatch @ 0x140859458
 * Callers:
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 * Callees:
 *     VslRevertHotPatch @ 0x14027C0FC (VslRevertHotPatch.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiApplyHotPatchToDriver @ 0x140855584 (MiApplyHotPatchToDriver.c)
 *     MiDeleteHotPatchRecord @ 0x140855E2C (MiDeleteHotPatchRecord.c)
 *     MiHotPatchAllProcesses @ 0x1408564E8 (MiHotPatchAllProcesses.c)
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
