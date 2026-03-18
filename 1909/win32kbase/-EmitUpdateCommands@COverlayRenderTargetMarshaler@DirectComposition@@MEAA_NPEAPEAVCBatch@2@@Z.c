/*
 * XREFs of ?EmitUpdateCommands@COverlayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BBE30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreate@COverlayRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BBD2C (-EmitCreate@COverlayRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@COverlayRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BBDBC (-EmitRoot@COverlayRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::COverlayRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::COverlayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::COverlayRenderTargetMarshaler::EmitCreate(this, a2) )
    return DirectComposition::COverlayRenderTargetMarshaler::EmitRoot(this, a2) != 0;
  return v4;
}
