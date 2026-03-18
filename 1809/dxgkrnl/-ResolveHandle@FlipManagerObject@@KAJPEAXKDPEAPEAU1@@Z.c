/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00595CC
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C0057A80 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C0057BC0 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C0057D40 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C0057E90 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C0057F90 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerEndProcessPresent @ 0x1C00580C0 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C0058160 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C0058240 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x1C00584D0 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectOpen @ 0x1C0058570 (NtFlipObjectOpen.c)
 *     NtFlipObjectPresentCancel @ 0x1C00586C0 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C00587A0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1C00588F0 (NtFlipObjectQueryEndpointConnected.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C00589E0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C0058AD0 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectRemoveContent @ 0x1C0058BC0 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x1C0058CB0 (NtFlipObjectRemovePoolBuffer.c)
 *     NtFlipObjectSetContent @ 0x1C0058DA0 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C00591A4 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0059234 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D71C (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct FlipManagerObject **a4)
{
  __int64 result; // rax
  struct FlipManagerObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = DxgkCompositionObject::ResolveHandle(a1, a2, 1, 4, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
