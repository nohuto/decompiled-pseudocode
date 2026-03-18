/*
 * XREFs of ReferenceDwmProcess @ 0x1C003E6E0
 * Callers:
 *     OpenDwmHandle @ 0x1C003E5C4 (OpenDwmHandle.c)
 *     UserReferenceDwmProcess @ 0x1C003E6C0 (UserReferenceDwmProcess.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C0095A78 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01A2790 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AB0A8 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BFAE8 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
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
