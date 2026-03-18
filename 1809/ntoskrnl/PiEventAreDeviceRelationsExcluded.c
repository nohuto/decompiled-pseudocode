/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x1406F0324
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140840158 (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     <none>
 */

char __fastcall PiEventAreDeviceRelationsExcluded(int a1)
{
  char result; // al

  if ( a1 == 4 )
    return 0;
  result = 1;
  if ( a1 <= 1 || a1 >= 7 )
    return 0;
  return result;
}
