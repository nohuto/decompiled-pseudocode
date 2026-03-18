/*
 * XREFs of ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B2640
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CC70 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776d___ @ 0x1C01B23DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776.c)
 *     ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B25EC (-EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitUpdateCommands(
        __m128i *this,
        struct DirectComposition::CBatch **a2)
{
  __int32 v4; // eax
  char v5; // di
  __m128i *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = this[23].m128i_i32[0];
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776d___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return 0;
    this[23].m128i_i32[0] &= ~1u;
  }
  if ( !DirectComposition::CShapeVisualMarshaler::EmitShapes((DirectComposition::CShapeVisualMarshaler *)this, a2) )
    return 0;
  return v5;
}
