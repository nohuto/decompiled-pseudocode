/*
 * XREFs of ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D7A0
 * Callers:
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D7F0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D950 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005DA50 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14005ED90 (-GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F65C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 *     ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14005F830 (-GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14005F8C0 (-GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F960 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 *     ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14005FCF0 (-GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 * Callees:
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005D358 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 */

char __fastcall CSpatialCrossProcessBaseEndpoint::IsRunning(CSpatialCrossProcessBaseEndpoint *this)
{
  bool Flags; // al
  char v2; // cl
  int v4; // [rsp+38h] [rbp+10h] BYREF

  Flags = CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
            this,
            (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v4);
  v2 = 0;
  if ( Flags )
    return (v4 & 2) != 0;
  return v2;
}
