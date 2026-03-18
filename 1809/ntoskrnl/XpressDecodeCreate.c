/*
 * XREFs of XpressDecodeCreate @ 0x14032C91C
 * Callers:
 *     CMFReadCompressedSegment @ 0x1408D901C (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1408D83E0 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
