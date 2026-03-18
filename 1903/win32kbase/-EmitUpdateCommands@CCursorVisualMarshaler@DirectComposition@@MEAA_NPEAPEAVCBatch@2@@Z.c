/*
 * XREFs of ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA810
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCursorId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA644 (-EmitCursorId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEnableRendering@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA6B4 (-EmitEnableRendering@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputDeviceId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA724 (-EmitInputDeviceId@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitOrientation@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA794 (-EmitOrientation@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitVisualReference@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AA898 (-EmitVisualReference@CCursorVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands((__m128i *)this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitCursorId(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitInputDeviceId(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitEnableRendering(this, a2)
    && DirectComposition::CCursorVisualMarshaler::EmitOrientation(this, a2) )
  {
    return DirectComposition::CCursorVisualMarshaler::EmitVisualReference(this, a2);
  }
  return v4;
}
