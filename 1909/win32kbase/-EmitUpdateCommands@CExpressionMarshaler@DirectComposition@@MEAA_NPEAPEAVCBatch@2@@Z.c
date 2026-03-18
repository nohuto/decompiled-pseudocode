/*
 * XREFs of ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008360
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00083C8 (-EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00084CC (-EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008614 (-EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008750 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CExpressionMarshaler::EmitSetSources(this, a2)
    && DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(this, a2) )
  {
    return DirectComposition::CExpressionMarshaler::EmitSetNodesInfo(this, a2);
  }
  return v4;
}
