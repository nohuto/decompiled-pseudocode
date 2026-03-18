/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x1400980EC
 * Callers:
 *     RtlpScanRetpolineIndexForEndStraddle @ 0x140097E9C (RtlpScanRetpolineIndexForEndStraddle.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x140097F48 (RtlpConstructIndirectRelocationFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineIndirectFixup(_WORD *a1)
{
  if ( (*a1 & 0x4000) != 0 )
    return ((unsigned __int16)*a1 | 0xC000u) >> 13;
  else
    return 5LL;
}
