/*
 * XREFs of Command_Initialize @ 0x1C000A1EC
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C000931C (Command_ControllerResetPostReset.c)
 *     Command_D0Entry @ 0x1C00095AC (Command_D0Entry.c)
 * Callees:
 *     XilCommand_InitializeSecureResources @ 0x1C000C234 (XilCommand_InitializeSecureResources.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     XilCoreCommand_Initialize @ 0x1C0047450 (XilCoreCommand_Initialize.c)
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
