/*
 * XREFs of ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BB448
 * Callers:
 *     ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BB340 (-EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBa.c)
 * Callees:
 *     ?EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B9424 (-EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B948C (-EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA184 (-EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA1FC (-EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA350 (-EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA514 (-EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA5F4 (-EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA660 (-EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA6D4 (-EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 */

bool __fastcall DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaCutoffCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetAlphaModeCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetEmissiveFactorCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetIsDoubleSidedCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalInputCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetNormalScaleCommand(this, a2)
    && DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionInputCommand(this, a2) )
  {
    return DirectComposition::CScenePbrMaterialMarshaler::EmitSetOcclusionStrengthCommand(this, a2) != 0;
  }
  return v4;
}
