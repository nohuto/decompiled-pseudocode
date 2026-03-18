/*
 * XREFs of Command_Initialize @ 0x1C00082E4
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C0007538 (Command_ControllerResetPostReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilCommand_InitializeSecureResources @ 0x1C000A130 (XilCommand_InitializeSecureResources.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     XilCoreCommand_Initialize @ 0x1C0041BD8 (XilCoreCommand_Initialize.c)
 */

__int64 __fastcall Command_Initialize(__int64 a1)
{
  __int64 result; // rax

  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources();
    else
      result = XilCoreCommand_Initialize(a1 + 168);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
