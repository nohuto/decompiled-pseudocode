/*
 * XREFs of PiIsOrderlyRemoval @ 0x1406EF7A0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIsOrderlyRemoval(int a1)
{
  return (a1 & 0xFFFFFFFB) == 0;
}
