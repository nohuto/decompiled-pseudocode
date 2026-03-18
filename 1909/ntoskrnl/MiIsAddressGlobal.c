/*
 * XREFs of MiIsAddressGlobal @ 0x14006DA60
 * Callers:
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiMapArbitraryPage @ 0x140140B10 (MiMapArbitraryPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_1404658EC);
  if ( byte_140467140[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 > qword_140465BE0 || a1 < qword_1404672B0 )
      return (unsigned __int8)word_1404658EC;
    return HIBYTE(word_1404658EC);
  }
  return 0LL;
}
