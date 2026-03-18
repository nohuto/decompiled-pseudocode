/*
 * XREFs of ?EmitUpdateCommands@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8580
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8520 (-EmitGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CGlyphRunVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands((__m128i *)this, a2) )
    return DirectComposition::CGlyphRunVisualMarshaler::EmitGlyphRuns(this, a2) != 0;
  return v4;
}
