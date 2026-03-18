/*
 * XREFs of KeInvalidateAllCaches @ 0x14013B4F0
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140098990 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x14011D370 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABA60 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x1402DDE7C (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x1402DDED8 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1409F1F7C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x140101CB0 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v3; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx((__int64)CurrentPrcb, 1, 0LL, 0, 6LL, (void (__fastcall *)(__int64))KeSweepLocalCaches, 0LL);
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
