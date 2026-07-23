/*
 * XREFs of PiIsOrderlyRemoval @ 0x1406F0A20
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIsOrderlyRemoval(int a1)
{
  return (a1 & 0xFFFFFFFB) == 0;
}
