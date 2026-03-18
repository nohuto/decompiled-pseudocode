/*
 * XREFs of ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BB340
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B97DC (-EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B9850 (-EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA3BC (-EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BA428 (-EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition.c)
 *     ?EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BAB18 (-EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BB448 (-EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetBaseColorInputCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetBaseColorFactorCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicFactorCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicRoughnessInputCommand(this, a2) )
  {
    return DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetRoughnessFactorCommand(this, a2) != 0;
  }
  return v4;
}
