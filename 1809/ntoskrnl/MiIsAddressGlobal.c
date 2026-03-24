/*
 * XREFs of MiIsAddressGlobal @ 0x1400B22E0
 * Callers:
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MiCopyPage @ 0x1400B1C50 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x1400B2360 (MiRevertValidPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_14043A1AC);
  if ( byte_14043B950[((a1 >> 39) & 0x1FF) - 256] != 1 && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( a1 < qword_14043BAC0 || a1 > qword_14043A530 )
      return (unsigned __int8)word_14043A1AC;
    return HIBYTE(word_14043A1AC);
  }
  return 0LL;
}
