/*
 * XREFs of XilCommand_AddCommandCRBToRing @ 0x1C0009C04
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0008334 (Command_InternalSendCommand.c)
 * Callees:
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000A344 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_WriteDoorbell @ 0x1C000A85C (XilCommand_WriteDoorbell.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x1C0041A14 (XilCoreCommand_AddCommandTRBToRing.c)
 */

__int64 __fastcall XilCommand_AddCommandCRBToRing(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a1 + 136;
  if ( *(_BYTE *)(a1 + 136) )
    result = XilCommand_SendAddCommandCRBToRingRequest(a1 + 136);
  else
    result = XilCoreCommand_AddCommandTRBToRing(a1 + 168, a2 + 24);
  if ( *(_QWORD *)(v2 + 16) )
    return XilCommand_WriteDoorbell(a1);
  return result;
}
