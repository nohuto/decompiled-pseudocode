/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x14072E5A0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14087BB8C (PiProcessQueryAndCancelRemoval.c)
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
