/*
 * XREFs of ?EmitUpdateCommands@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B65E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009D30 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B6580 (-EmitGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CGlyphRunVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CGlyphRunVisualMarshaler::EmitGlyphRuns(this, a2) != 0;
  return v4;
}
