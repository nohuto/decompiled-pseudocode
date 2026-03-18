/*
 * XREFs of XpressDecodeClose @ 0x14032C8F0
 * Callers:
 *     CMFReadCompressedSegment @ 0x1408D901C (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x1407027D0 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( Buffer )
  {
    if ( Buffer[26] == 903790814 )
    {
      Buffer[26] = 0;
      CMFFreeFn(0LL, Buffer);
    }
  }
}
