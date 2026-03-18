/*
 * XREFs of ?EmitUpdateCommands@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A86E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreate@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A84B0 (-EmitCreate@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A8594 (-EmitDestroyWindow@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDisplayRect@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A85F4 (-EmitDisplayRect@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A8664 (-EmitRoot@CRemotingRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CRemotingRenderTargetMarshaler::EmitCreate(this, a2)
    && DirectComposition::CRemotingRenderTargetMarshaler::EmitRoot(this, a2)
    && DirectComposition::CRemotingRenderTargetMarshaler::EmitDisplayRect(this, a2) )
  {
    return DirectComposition::CRemotingRenderTargetMarshaler::EmitDestroyWindow(this, a2) != 0;
  }
  return v4;
}
