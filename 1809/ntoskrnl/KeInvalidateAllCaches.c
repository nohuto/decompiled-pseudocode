/*
 * XREFs of KeInvalidateAllCaches @ 0x140177030
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400823F0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140082710 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x14011CB20 (KeFlushIoBuffers.c)
 *     KeInvalidateRangeAllCaches @ 0x1402952D0 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheMdl @ 0x1402C3D5C (MiFlushCacheMdl.c)
 *     MiFlushCacheRange @ 0x1402C3D7C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400ED140 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x140117C30 (KxSetTimeStampBusy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
