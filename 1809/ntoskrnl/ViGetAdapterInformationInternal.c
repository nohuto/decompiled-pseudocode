/*
 * XREFs of ViGetAdapterInformationInternal @ 0x14092D868
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140929F50 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x14092A000 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x14092A0E0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x14092A1D0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14092A270 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x14092A430 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14092A770 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x14092A9A0 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x14092AB00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x14092ACB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x14092AD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092AE10 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x14092AF70 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x14092B040 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14092B360 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14092B6F0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x14092B880 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x14092BAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092BC70 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x14092C170 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x14092DB34 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x14092DF30 (ViHookDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140929720 (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&Lock);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock(&Lock);
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
  KxReleaseSpinLock(&Lock);
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
      byte_1404054F0,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_1404054F0);
  }
  return Flink;
}
