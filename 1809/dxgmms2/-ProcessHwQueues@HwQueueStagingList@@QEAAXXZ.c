/*
 * XREFs of ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001161C (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011874 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0014210 (VidSchiSubmitSignalCommand.c)
 *     VidSchConfirmToken @ 0x1C0016C10 (VidSchConfirmToken.c)
 *     VidSchExitIndependentFlip @ 0x1C0016D20 (VidSchExitIndependentFlip.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001843C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002EE60 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0030B0C (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0030E3C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031430 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031554 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSetNodePowerState @ 0x1C0032A60 (VidSchSetNodePowerState.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueues(HwQueueStagingList *this)
{
  HwQueueStagingList *v2; // rdx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *(HwQueueStagingList **)this;
    if ( *(HwQueueStagingList **)(*(_QWORD *)this + 8LL) != this
      || (v3 = *(_QWORD *)v2, *(HwQueueStagingList **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v3;
    *(_QWORD *)(v3 + 8) = this;
    if ( v2 == this )
      break;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    HwQueueStagingList::ProcessHwQueue(this, (HwQueueStagingList *)((char *)v2 - 152));
  }
  *((_BYTE *)this + 16) = 1;
}
