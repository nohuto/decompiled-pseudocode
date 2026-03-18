/*
 * XREFs of ViGetAdapterInformationInternal @ 0x14096C0D8
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409685D0 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140968680 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140968800 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409688F0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140968990 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140968E90 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x1409690C0 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x140969220 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409693D0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140969480 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140969530 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140969690 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1409697F0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140969F60 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x14096A0F0 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x14096A320 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14096A4E0 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x14096A9E0 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x14096C7A0 (ViHookDmaAdapter.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140967DA0 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  KIRQL v6; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v9; // rcx

  if ( !a1 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( ViVerifyDma )
      VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  if ( !ViVerifyDma && ViEnableAfterHibernate == 1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1409C7E08);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock(&qword_1409C7E08);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v6);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      break;
    Flink = Flink->Flink;
  }
  KxReleaseSpinLock(&qword_1409C7E08);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v9);
  }
  __writecr8(v6);
  if ( a2 && SHIDWORD(Flink[2].Flink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_14042B920,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_14042B920);
  }
  return Flink;
}
