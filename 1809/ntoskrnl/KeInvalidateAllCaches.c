/*
 * XREFs of KeInvalidateAllCaches @ 0x140177150
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140082700 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x14011CBB0 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1402955C0 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x1402C404C (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x1402C406C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400ED1E0 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x140117CC0 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp, v0, v1) )
  {
    KiIpiSendRequestEx((__int64)CurrentPrcb, 1, 0LL, 0, 0LL, 6LL, (void (__fastcall *)(__int64))KeSweepLocalCaches, 0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v5 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v5);
  }
  __writecr8(CurrentIrql);
  return 1;
}
