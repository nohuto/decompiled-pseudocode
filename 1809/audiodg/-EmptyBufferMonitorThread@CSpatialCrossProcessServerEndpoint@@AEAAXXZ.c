/*
 * XREFs of ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x140060EC4
 * Callers:
 *     ?EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z @ 0x140060FC0 (-EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x1400445AC (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x1400445FC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 *     ?LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005C2C4 (-LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005CDF8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ @ 0x140060FD8 (-GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x1400615BC (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread(HANDLE *this)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // di
  DWORD v4; // esi
  const GUID *v5; // r9
  DWORD v6; // esi
  HANDLE Handles[3]; // [rsp+20h] [rbp-38h] BYREF

  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread", 335);
  Handles[0] = this[118];
  Handles[1] = this[116];
  Handles[2] = this[117];
  SetEngineThreadPriority(v2, this + 120);
  SetEvent(this[119]);
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = WaitForMultipleObjects(3u, Handles, 0, 0xFFFFFFFF);
      CSpatialCrossProcessEndpointTraceLogger::LogPulseEndpoint(
        (CSpatialCrossProcessEndpointTraceLogger *)(this + 48),
        v4,
        v3,
        v5);
      v6 = v4 - 1;
      if ( v6 )
        break;
      v3 = 0;
LABEL_7:
      if ( CSpatialCrossProcessBaseEndpoint::GetEmptyBufferCount((CSpatialCrossProcessBaseEndpoint *)this) )
        v3 = CSpatialCrossProcessServerEndpoint::SignalCompletionEvent((CSpatialCrossProcessServerEndpoint *)this);
    }
    if ( v6 != 1 )
      break;
    if ( !v3 )
      goto LABEL_7;
  }
  ResetEngineThreadPriority(this + 120);
}
