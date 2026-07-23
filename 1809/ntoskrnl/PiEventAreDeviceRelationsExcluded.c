/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x1406F15A4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140841398 (PiProcessQueryAndCancelRemoval.c)
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
