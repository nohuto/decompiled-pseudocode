/*
 * XREFs of ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0175FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AFC0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a52bc12f6855e40b42cca3cd12fa5767___ @ 0x1C0175D4C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a52bc12f6855e40b42cca3cd12fa576.c)
 *     ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0175F60 (-EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  DirectComposition::CShapeVisualMarshaler *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = 1;
  v6 = this;
  if ( (*((_BYTE *)this + 376) & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a52bc12f6855e40b42cca3cd12fa5767___(
            (__int64)this,
            a2,
            (__int64)&v6) )
      return 0;
    *((_DWORD *)this + 94) &= ~1u;
  }
  if ( !DirectComposition::CShapeVisualMarshaler::EmitShapes(this, a2) )
    return 0;
  return v4;
}
