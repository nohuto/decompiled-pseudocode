/*
 * XREFs of IopResetEvent @ 0x140037510
 * Callers:
 *     NtLockFile @ 0x1405D4830 (NtLockFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1406C1390 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CC660 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x14072B860 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IopResetEvent(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v4 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( (*(_DWORD *)(a1 + 152) & 0x80u) != 0 );
    }
    *(_DWORD *)(a1 + 156) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 152), 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
}
