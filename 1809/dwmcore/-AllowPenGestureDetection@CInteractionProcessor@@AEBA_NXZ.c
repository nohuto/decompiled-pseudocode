/*
 * XREFs of ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801EEE0C
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180011830 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801EEEB8 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801EF390 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1801F00A8 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F15A8 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x1801F1714 (-HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801F1D4C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801F2D38 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800118B0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x1801F01E8 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimiti.c)
 */

bool __fastcall CInteractionProcessor::AllowPenGestureDetection(CInteractionProcessor *this)
{
  __int64 v1; // r11
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1272, &v4, &v3);
  return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                         v1 + 320,
                         0x10000000LL,
                         v4,
                         v3) == 0;
}
