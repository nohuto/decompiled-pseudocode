/*
 * XREFs of sub_18010A6F0 @ 0x18010A6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 */

ULONG sub_18010A6F0()
{
  ULONG result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    dword_18016273C |= 6u;
  return result;
}
