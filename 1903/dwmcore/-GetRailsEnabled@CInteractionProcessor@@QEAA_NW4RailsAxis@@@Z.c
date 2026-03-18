/*
 * XREFs of ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x180231ADC
 * Callers:
 *     ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D7040 (-GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x180231CF0 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x18023247C (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180232800 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::GetRailsEnabled(__int64 a1, int a2)
{
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (*(_BYTE *)(a1 + 148) & 0x40) != 0;
  if ( a2 != 1 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return *(_BYTE *)(a1 + 148) >> 7;
}
