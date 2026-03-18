/*
 * XREFs of ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350
 * Callers:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00114C4 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C00116D0 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x1C0018260 (VidSchTimeoutSyncObject.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002EA14 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C00322D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034EB8 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0037EB0 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall HwQueueStagingList::~HwQueueStagingList(HwQueueStagingList *this)
{
  HwQueueStagingList *v2; // rdx
  __int64 v3; // rax

  if ( !*((_BYTE *)this + 16) )
  {
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
}
