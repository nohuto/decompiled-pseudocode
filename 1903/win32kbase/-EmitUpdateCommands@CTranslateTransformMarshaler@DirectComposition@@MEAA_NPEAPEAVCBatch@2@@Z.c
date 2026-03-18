/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BB690
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CF38 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOffsetXCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA7A8 (-EmitSetOffsetXCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetOffsetYCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA87C (-EmitSetOffsetYCommand@CTranslateTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTranslateTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CTranslateTransformMarshaler::EmitSetOffsetXCommand(this, a2) )
  {
    return DirectComposition::CTranslateTransformMarshaler::EmitSetOffsetYCommand(this, a2) != 0;
  }
  return v4;
}
