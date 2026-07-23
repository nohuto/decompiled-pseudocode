/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x1402F7620
 * Callers:
 *     RtlpConstructIndirectRelocationFixup @ 0x1402F7C90 (RtlpConstructIndirectRelocationFixup.c)
 *     RtlpScanRetpolineIndexForEndStraddle @ 0x1402F7FB8 (RtlpScanRetpolineIndexForEndStraddle.c)
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
