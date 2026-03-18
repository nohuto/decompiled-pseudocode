/*
 * XREFs of KeInvalidateAllCaches @ 0x1400B7B70
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400B87B0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400B8B20 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x14011CE50 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABD00 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x1402DE11C (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x1402DE178 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400B8BE8 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1400FF2B0 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int CurrentPrcb; // edi
  struct _KPRCB *v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(CurrentPrcb, 1, 0, 0, 6LL, (__int64)KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v3 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v3->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v3);
  }
  __writecr8(CurrentIrql);
  return 1;
}
