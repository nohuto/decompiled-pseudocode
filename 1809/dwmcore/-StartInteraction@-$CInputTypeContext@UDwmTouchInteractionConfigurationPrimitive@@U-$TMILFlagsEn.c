/*
 * XREFs of ?StartInteraction@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801F2CA8
 * Callers:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801F2D38 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::StartInteraction(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        int a5)
{
  char v6; // si
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v6 = a2;
  *((_BYTE *)a1 + 148) = (2 * a3) | *((_BYTE *)a1 + 148) & 0xFD | 1;
  *((_DWORD *)a1 + 38) = a5;
  v7 = *a1;
  v8 = v7 == 0 ? 0x8007139F : 0;
  if ( v7 )
  {
    if ( a4 )
    {
      LOBYTE(a2) = a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 80LL))(v7, a2);
    }
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  }
  return v8;
}
