/*
 * XREFs of MiIsAddressGlobal @ 0x14006D7F0
 * Callers:
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiMapArbitraryPage @ 0x140140480 (MiMapArbitraryPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140465BEC);
  if ( byte_140467440[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 > qword_140465EE0 || a1 < qword_1404675B0 )
      return (unsigned __int8)word_140465BEC;
    return HIBYTE(word_140465BEC);
  }
  return 0LL;
}
