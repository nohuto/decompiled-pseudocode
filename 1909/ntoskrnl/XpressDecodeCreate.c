/*
 * XREFs of XpressDecodeCreate @ 0x14034DD28
 * Callers:
 *     CMFReadCompressedSegment @ 0x140915D2C (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x14091507C (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
