/*
 * XREFs of ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005EF0C
 * Callers:
 *     ?EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z @ 0x14005EFE0 (-EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z.c)
 * Callees:
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x140041F5C (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x140041FAC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 *     ?LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x140059D64 (-LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC68 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C6CC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F59C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread(HANDLE *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  const GUID *v5; // r9
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF

  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread", 298);
  Handles[0] = this[118];
  Handles[1] = this[117];
  SetEngineThreadPriority(v2, this + 120);
  SetEvent(this[119]);
  while ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) == 1 )
  {
    v3 = `PingPongState::GetEmptyBufferCount'::`2'::emptyBufferCount_[(unsigned int)PingPongState::GetState((__int64)(this + 24))];
    CSpatialCrossProcessEndpointTraceLogger::LogEmptyBufferCount(
      (CSpatialCrossProcessEndpointTraceLogger *)(this + 50),
      v3,
      v4,
      v5);
    if ( v3 )
      *((_BYTE *)this + 976) = CSpatialCrossProcessServerEndpoint::SignalCompletionEvent((CSpatialCrossProcessServerEndpoint *)this);
  }
  ResetEngineThreadPriority(this + 120);
}
