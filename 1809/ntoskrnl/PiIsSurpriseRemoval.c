/*
 * XREFs of PiIsSurpriseRemoval @ 0x1406F1204
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIsSurpriseRemoval(int a1)
{
  return ((a1 - 3) & 0xFFFFFFFD) == 0;
}
