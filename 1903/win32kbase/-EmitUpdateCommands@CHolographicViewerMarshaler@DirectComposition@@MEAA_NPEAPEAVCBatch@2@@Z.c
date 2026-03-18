/*
 * XREFs of ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BFC10
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BFAE8 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BFC68 (-EmitUpdateFlags@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateTargetFrameRate@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BFCC8 (-EmitUpdateTargetFrameRate@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 */

bool __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CHolographicViewerMarshaler::EmitInitialize(this, a2)
    && DirectComposition::CHolographicViewerMarshaler::EmitUpdateTargetFrameRate(this, a2) )
  {
    return DirectComposition::CHolographicViewerMarshaler::EmitUpdateFlags(this, a2);
  }
  return v4;
}
