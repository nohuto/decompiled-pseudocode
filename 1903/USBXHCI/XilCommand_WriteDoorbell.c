/*
 * XREFs of XilCommand_WriteDoorbell @ 0x1C000CA70
 * Callers:
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0009F60 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AddCommandCRBToRing @ 0x1C000BC8C (XilCommand_AddCommandCRBToRing.c)
 * Callees:
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000C978 (XilCommand_SendRequestToRingDoorbell.c)
 */

_DWORD *__fastcall XilCommand_WriteDoorbell(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1 + 136;
  result = *(_DWORD **)(v1 + 16);
  if ( !result )
    return (_DWORD *)XilCommand_SendRequestToRingDoorbell(v1);
  *result = 0;
  _InterlockedOr(v3, 0);
  return result;
}
