/*
 * XREFs of ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034C20
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BB0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E44 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0036E9C (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 * Callees:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00355DC (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueueWaitPacket(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  VidSchiFreeCompletedHwQueuePacket(a1);
}
