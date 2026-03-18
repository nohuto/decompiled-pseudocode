/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801F2D38
 * Callers:
 *     ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z @ 0x18019D190 (-StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801F1D4C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z @ 0x1801F93B0 (-StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801EEE0C (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801F2CA8 (-StartInteraction@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  int started; // edi
  int v7; // ecx
  char v10; // r14
  char v11; // si
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rdx

  started = 0;
  v7 = *(_DWORD *)(a1 + 784);
  v10 = a2;
  if ( (_BYTE)a2 || (unsigned int)(v7 - 2) <= 2 )
  {
    if ( (unsigned int)(v7 - 2) > 2 )
      *(_DWORD *)(a1 + 784) = 3;
    v10 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 784) = 1;
  }
  *(_DWORD *)(a1 + 1268) = 0;
  v11 = (*(_BYTE *)(a1 + 1264) & 8) != 0 && !v7 && *(_DWORD *)(a1 + 784);
  v12 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a4 + 24LL))(a4) )
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4);
  switch ( a5 )
  {
    case 1:
      LOBYTE(a2) = v10;
      started = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                  (_QWORD *)a1,
                  a2,
                  a3,
                  v11,
                  v12);
      if ( started < 0 )
        return (unsigned int)started;
      LOBYTE(v13) = v10;
      started = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                  (_QWORD *)(a1 + 160),
                  v13,
                  a3,
                  v11,
                  v12);
      if ( started < 0 )
        return (unsigned int)started;
      goto LABEL_18;
    case 2:
      LOBYTE(a2) = v10;
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                             (_QWORD *)a1,
                             a2,
                             a3,
                             v11,
                             v12);
    case 3:
      LOBYTE(a2) = v10;
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                             (_QWORD *)(a1 + 160),
                             a2,
                             a3,
                             v11,
                             v12);
    case 4:
LABEL_18:
      if ( CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
      {
        LOBYTE(v14) = v10;
        return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                               (_QWORD *)(a1 + 320),
                               v14,
                               a3,
                               v11,
                               v12);
      }
      return (unsigned int)started;
    case 6:
      LOBYTE(a2) = v10;
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
                             (_QWORD *)(a1 + 480),
                             a2,
                             a3,
                             v11,
                             v12);
  }
  return (unsigned int)started;
}
