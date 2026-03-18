/*
 * XREFs of XpressDecodeCreate @ 0x14034E2C8
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409162CC (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x14091561C (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
