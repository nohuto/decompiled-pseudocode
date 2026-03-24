/*
 * XREFs of PiIsOrderlyRemoval @ 0x1406EF780
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIsOrderlyRemoval(int a1)
{
  return (a1 & 0xFFFFFFFB) == 0;
}
