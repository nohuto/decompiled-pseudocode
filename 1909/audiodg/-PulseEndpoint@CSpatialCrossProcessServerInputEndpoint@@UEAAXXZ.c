/*
 * XREFs of ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14005FCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::PulseEndpoint(HANDLE *this)
{
  if ( *((_BYTE *)this - 968) )
    SetEvent(*(this - 16));
  else
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::PulseEndpoint", 416, -2005139437);
}
