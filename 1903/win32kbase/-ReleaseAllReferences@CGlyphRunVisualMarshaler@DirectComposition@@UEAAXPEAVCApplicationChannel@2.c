/*
 * XREFs of ?ReleaseAllReferences@CGlyphRunVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B85D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007F830 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ClearGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B84AC (-ClearGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CGlyphRunVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CGlyphRunVisualMarshaler::ClearGlyphRuns(this, a2);
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
