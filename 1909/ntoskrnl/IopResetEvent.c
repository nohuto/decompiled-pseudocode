/*
 * XREFs of IopResetEvent @ 0x140037910
 * Callers:
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     IopGetSetSecurityObject @ 0x140623F40 (IopGetSetSecurityObject.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     BuildQueryDirectoryIrp @ 0x14067EAF0 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140857820 (NtSetEaFile.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
