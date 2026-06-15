/*
 * XREFs of ?ProcessComplete@CSpatialCrossProcessServerInputEndpoint@@UEAAJXZ @ 0x14005FCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::ProcessComplete(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v1 = -2005139437;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ProcessComplete", 142, -2005139437);
  }
  return v1;
}
