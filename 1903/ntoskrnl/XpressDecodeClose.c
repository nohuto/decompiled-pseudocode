/*
 * XREFs of XpressDecodeClose @ 0x14034E29C
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409162CC (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14073B260 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[26] == 903790814 )
    {
      a1[26] = 0;
      CMFFreeFn(0LL, a1);
    }
  }
}
