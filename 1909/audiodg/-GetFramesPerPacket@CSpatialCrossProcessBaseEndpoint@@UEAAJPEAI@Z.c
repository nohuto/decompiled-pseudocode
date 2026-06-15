/*
 * XREFs of ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14005BEA0
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005E0B0 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005E420 (-GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket", 516, v2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 112) + 52LL), 0, 0);
  if ( !v3 )
    v3 = *((_DWORD *)this + 25);
  *a2 = v3;
  return v2;
}
