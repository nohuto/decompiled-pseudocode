/*
 * XREFs of ?SetReferenceProperty@CGlyphRunVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B8730
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C007B820 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 */

__int64 __fastcall DirectComposition::CGlyphRunVisualMarshaler::SetReferenceProperty(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 10 )
    return 3221225485LL;
  else
    return DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
