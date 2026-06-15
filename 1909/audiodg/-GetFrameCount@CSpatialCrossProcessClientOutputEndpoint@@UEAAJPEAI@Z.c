/*
 * XREFs of ?GetFrameCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14005E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetFrameCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetFrameCount", 309, v2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 110) + 52LL), 0, 0);
  if ( !v3 )
    v3 = *((_DWORD *)this + 21);
  *a2 = v3;
  return v2;
}
