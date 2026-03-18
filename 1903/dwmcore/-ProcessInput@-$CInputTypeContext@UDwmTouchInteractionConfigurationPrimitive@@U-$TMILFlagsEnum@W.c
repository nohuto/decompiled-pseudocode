/*
 * XREFs of ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18023208C
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18023215C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18023063C (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimi.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4)
{
  signed int v7; // edi
  __int64 v8; // rcx
  int v9; // ecx
  _BYTE v11[64]; // [rsp+30h] [rbp-78h] BYREF

  v7 = *a1 == 0LL ? 0x8007139F : 0;
  if ( *a1 )
  {
    if ( (*(_BYTE *)(a3 + 12) & 4) != 0 || (*(_DWORD *)(a3 + 12) & 0x180000) != 0 )
      v7 = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
             a1,
             a2,
             a4);
    if ( v7 >= 0 )
    {
      v8 = *a1;
      *((_DWORD *)a1 + 36) = a2[2];
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v8 + 24LL))(v8, a3, a2 + 82);
      if ( v7 >= 0 )
      {
        v9 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v11) + 20);
        if ( v9 )
          *((_DWORD *)a1 + 38) = v9;
        *((_BYTE *)a1 + 148) |= 0x20u;
      }
    }
  }
  return (unsigned int)v7;
}
