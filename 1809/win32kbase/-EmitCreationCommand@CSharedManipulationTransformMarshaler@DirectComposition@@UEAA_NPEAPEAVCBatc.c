/*
 * XREFs of ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008C450
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000C53C (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CSharedManipulationTransformMarshaler::EmitCreationCommand(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           a2,
           *(_DWORD *)(*((_QWORD *)this + 14) + 24LL));
}
