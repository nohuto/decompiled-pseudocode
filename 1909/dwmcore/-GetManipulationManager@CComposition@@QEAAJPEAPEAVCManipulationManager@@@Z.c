/*
 * XREFs of ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000BF44 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800790C4 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180085890 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800A80D0 (-PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A822C (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPD.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800A8C20 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800B9728 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801D5CF4 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INT.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x1801D5DA4 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREP.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801D6050 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801D6780 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801E26B0 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801E27C8 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801E2924 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x180234730 (-SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetManipulationManager(CComposition *this, struct CManipulationManager **a2)
{
  struct CManipulationManager *v3; // rax
  __int64 v4; // rcx

  v3 = 0LL;
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = (struct CManipulationManager *)*((_QWORD *)this + 11);
  }
  *a2 = v3;
  return *((_QWORD *)this + 11) == 0LL ? 0x80004005 : 0;
}
