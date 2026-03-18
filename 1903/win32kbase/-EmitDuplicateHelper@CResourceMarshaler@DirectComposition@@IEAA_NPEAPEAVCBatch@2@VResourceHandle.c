/*
 * XREFs of ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000A9CC
 * Callers:
 *     ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00044A0 (-EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004AF0 (-EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0005C30 (-EmitCreationCommand@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVC.c)
 *     ?EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008630 (-EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitCreationCommand@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008650 (-EmitCreationCommand@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBa.c)
 *     ?EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008670 (-EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch.c)
 *     ?EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009220 (-EmitCreationCommand@CSharedInteractionMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009280 (-EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009400 (-EmitCreationCommand@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009BB0 (-EmitCreationCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A9BB0 (-EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C5AA0 (-EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVC.c)
 *     ?EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C5E90 (-EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@.c)
 *     ?EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C6A20 (-EmitCreationCommand@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C6DA0 (-EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatc.c)
 *     ?EmitCreationCommand@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C6FA0 (-EmitCreationCommand@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEA.c)
 * Callees:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C000AF8C (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
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
  *((_DWORD *)v6 + 1) = 48;
  *((_DWORD *)v6 + 2) = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 28LL);
  *((_DWORD *)v6 + 3) = a3;
  *((_DWORD *)v6 + 4) = *(_DWORD *)(a1 + 24);
  return 1;
}
