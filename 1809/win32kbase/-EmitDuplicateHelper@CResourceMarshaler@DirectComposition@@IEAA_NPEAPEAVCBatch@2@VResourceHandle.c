/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000C53C
 * Callers:
 *     ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003C20 (-EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00041C0 (-EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004C30 (-EmitCreationCommand@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVC.c)
 *     ?EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0088B30 (-EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008B140 (-EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008C450 (-EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008D710 (-EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0095300 (-EmitCreationCommand@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBa.c)
 *     ?EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0095B70 (-EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0095B90 (-EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVC.c)
 *     ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0181540 (-EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0181830 (-EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@.c)
 *     ?EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0182420 (-EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0182A60 (-EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0182C40 (-EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C000CD1C (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int a3)
{
  char *v6; // rdx
  __int64 v7; // rax
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( (int)DirectComposition::CBatch::AddSystemResourceRef(*a2, a3) < 0
    || !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    return 0;
  }
  v6 = (char *)v9;
  v7 = *(_QWORD *)(*((_QWORD *)*a2 + 1) + 40LL);
  *(_DWORD *)v9 = 20;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *((_DWORD *)v6 + 1) = 52;
  *((_DWORD *)v6 + 2) = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 28LL);
  *((_DWORD *)v6 + 3) = a3;
  *((_DWORD *)v6 + 4) = *(_DWORD *)(a1 + 24);
  return 1;
}
