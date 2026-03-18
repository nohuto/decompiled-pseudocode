/*
 * XREFs of ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C007A3A0
 * Callers:
 *     NtDuplicateCompositionInputSink @ 0x1C0002330 (NtDuplicateCompositionInputSink.c)
 *     ?OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00045C0 (-OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A1E0 (-OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A220 (-OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A260 (-OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A2A0 (-OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A2E0 (-OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A320 (-OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A360 (-OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSharedVisualHandle @ 0x1C01661F0 (NtDCompositionCreateSharedVisualHandle.c)
 *     NtDCompositionGetMaterialProperty @ 0x1C0167010 (NtDCompositionGetMaterialProperty.c)
 *     ?OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0181360 (-OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01815C0 (-OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0181850 (-OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0181FD0 (-OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0182460 (-OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0182AE0 (-OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0182CC0 (-OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::CreateHandle(
        CompositionObject *this,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer(this, 2 * a3 + 64, 0LL, a2, ExCompositionObjectType, AccessMode, Handle);
}
