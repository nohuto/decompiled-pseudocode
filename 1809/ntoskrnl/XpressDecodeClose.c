/*
 * XREFs of XpressDecodeClose @ 0x14032CBE0
 * Callers:
 *     CMFReadCompressedSegment @ 0x1408DA2BC (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140703A50 (CMFFreeFn.c)
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
