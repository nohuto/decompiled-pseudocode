/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x14008E4CC
 * Callers:
 *     RtlpScanRetpolineIndexForEndStraddle @ 0x14008E27C (RtlpScanRetpolineIndexForEndStraddle.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x14008E328 (RtlpConstructIndirectRelocationFixup.c)
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
