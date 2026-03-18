/*
 * XREFs of XpressDecodeClose @ 0x14034DCFC
 * Callers:
 *     CMFReadCompressedSegment @ 0x140915D2C (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14073D160 (CMFFreeFn.c)
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
