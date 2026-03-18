/*
 * XREFs of ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C014976C
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C002F2E0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DispatcherHandleNameToString(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 <= 7 )
  {
    if ( a1 == 7 )
      return "RemoteOpenEvent";
    if ( !a1 )
      return "RimPnpEvent";
    v1 = a1 - 1;
    if ( !v1 )
      return "RimReadCompletionEvent";
    v2 = v1 - 1;
    if ( !v2 )
      return "RimTimer";
    v3 = v2 - 1;
    if ( !v3 )
      return "RimAutoRepeatTimer";
    v4 = v3 - 1;
    if ( !v4 )
      return "PTPTimer";
    v5 = v4 - 1;
    if ( !v5 )
      return "DelayZonePalmRejectionTimer";
    if ( v5 == 1 )
      return "FlushDelayZonePalmRejectInputTimer";
    return "UNKNOWN";
  }
  v7 = a1 - 8;
  if ( !v7 )
    return "RemoteCloseEvent";
  v8 = v7 - 1;
  if ( !v8 )
    return "DirectStartStopReadEvent";
  v9 = v8 - 1;
  if ( !v9 )
    return "TSLocalDeviceAttachedEvent";
  v10 = v9 - 1;
  if ( !v10 )
    return "CoreMsgKSendEvent";
  v11 = v10 - 1;
  if ( !v11 )
    return "PTPMarshalEvent";
  if ( v11 != 1 )
    return "UNKNOWN";
  return "MouseCursorUpdateEvent";
}
