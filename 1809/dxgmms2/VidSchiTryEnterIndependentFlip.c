/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C0017520
 * Callers:
 *     VidSchiUpdatePresentParameters @ 0x1C0002640 (VidSchiUpdatePresentParameters.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchConfirmToken @ 0x1C0016C10 (VidSchConfirmToken.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0017578 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00175F4 (VidSchiFlushPendingTokenList.c)
 */

char __fastcall VidSchiTryEnterIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4)
{
  char result; // al

  result = VidSchiCheckPlaneIndependentFlipCondition(a2, a3, a4);
  if ( result )
    return VidSchiFlushPendingTokenList(a1);
  return result;
}
