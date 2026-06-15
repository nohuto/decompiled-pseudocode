/*
 * XREFs of ?EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z @ 0x140060FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x140060EC4 (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThreadThunk(HANDLE *Parameter)
{
  CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread(Parameter);
  return 0LL;
}
