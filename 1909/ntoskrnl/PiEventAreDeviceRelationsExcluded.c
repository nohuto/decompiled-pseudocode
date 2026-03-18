/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x140730800
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14087B28C (PiProcessQueryAndCancelRemoval.c)
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
