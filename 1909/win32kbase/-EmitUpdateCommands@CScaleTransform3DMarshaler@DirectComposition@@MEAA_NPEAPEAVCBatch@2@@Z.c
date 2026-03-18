/*
 * XREFs of ?EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B91D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009FF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B79FC (-EmitSetCenterXCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B7BAC (-EmitSetCenterYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B7CF0 (-EmitSetCenterZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleXCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8BE4 (-EmitSetScaleXCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8C4C (-EmitSetScaleYCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8CB8 (-EmitSetScaleZCommand@CScaleTransform3DMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CScaleTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CScaleTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleXCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleYCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetScaleZCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterXCommand(this, a2)
    && DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterYCommand(this, a2) )
  {
    return DirectComposition::CScaleTransform3DMarshaler::EmitSetCenterZCommand(this, a2) != 0;
  }
  return v4;
}
