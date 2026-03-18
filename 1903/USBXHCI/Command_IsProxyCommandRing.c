/*
 * XREFs of Command_IsProxyCommandRing @ 0x1C000A5FC
 * Callers:
 *     Command_Create @ 0x1C005E170 (Command_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Command_IsProxyCommandRing(__int64 a1)
{
  return *(_BYTE *)(a1 + 136);
}
