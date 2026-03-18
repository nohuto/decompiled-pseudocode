/*
 * XREFs of ReferenceDwmProcess @ 0x1C0066A40
 * Callers:
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C0011B2C (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1C0011FF8 (OpenDwmHandle.c)
 *     UserReferenceDwmProcess @ 0x1C0066A20 (UserReferenceDwmProcess.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0143430 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014C7A0 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C015A7C0 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

PVOID ReferenceDwmProcess()
{
  PVOID v0; // rbx

  v0 = g_pepDwm;
  if ( g_pepDwm )
    ObReferenceObjectByPointer(g_pepDwm, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  return v0;
}
