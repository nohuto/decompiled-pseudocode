/*
 * XREFs of ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x14005CB00
 * Callers:
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C3F8 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v5; // r8d

  if ( a4 >= 0 )
  {
    *a1 = 0;
    a1[1] = 1;
    return;
  }
  v5 = -2005139358;
  if ( a4 != -2005139358 )
  {
    v5 = a4;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 686, v5);
    return;
  }
  if ( ++*a1 == a1[1] )
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 686, -2005139358);
    a1[1] *= 2;
    return;
  }
  if ( !(unsigned __int8)*a1 )
    goto LABEL_9;
}
