/*
 * XREFs of XilCommand_GetMaxTrbIndex @ 0x1C000A110
 * Callers:
 *     Command_PrepareHardware @ 0x1C0057408 (Command_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCommand_GetMaxTrbIndex(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    return *(unsigned int *)(a1 + 192);
  else
    return *(unsigned int *)(a1 + 200);
}
