/*
 * XREFs of ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0181540
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000C53C (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::EmitCreationCommand(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           a2,
           *(_DWORD *)(*((_QWORD *)this + 13) + 24LL));
}
