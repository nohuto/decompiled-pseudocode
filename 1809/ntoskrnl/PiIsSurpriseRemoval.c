/*
 * XREFs of PiIsSurpriseRemoval @ 0x1406EFF84
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIsSurpriseRemoval(int a1)
{
  return ((a1 - 3) & 0xFFFFFFFD) == 0;
}
