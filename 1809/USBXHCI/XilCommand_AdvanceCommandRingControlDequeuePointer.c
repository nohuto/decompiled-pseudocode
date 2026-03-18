/*
 * XREFs of XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C0009C54
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000A55C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 */

__int64 __fastcall XilCommand_AdvanceCommandRingControlDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 + 136;
  if ( *(_BYTE *)v2 )
    return XilCommand_SendAdvanceDequeuePointerRequest();
  *(_DWORD *)(v2 + 72) = a2;
  return result;
}
