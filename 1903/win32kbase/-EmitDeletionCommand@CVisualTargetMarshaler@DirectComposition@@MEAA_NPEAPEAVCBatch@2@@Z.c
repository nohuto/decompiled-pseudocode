/*
 * XREFs of ?EmitDeletionCommand@CVisualTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009240
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009E60 (-EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CB80 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CVisualTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool result; // al

  result = DirectComposition::CVisualTargetMarshaler::EmitRoot(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  return result;
}
