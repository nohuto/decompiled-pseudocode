/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AB050
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AAEF4 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AAFDC (-EmitSwapChain@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AB0A8 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CHolographicExclusiveViewMarshaler::EmitCreate(this, a2)
    && DirectComposition::CHolographicExclusiveViewMarshaler::EmitSwapChain(this, a2) )
  {
    return DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(this, a2);
  }
  return v4;
}
