/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x180233248
 * Callers:
 *     ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z @ 0x1801D8050 (-StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18023215C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z @ 0x18023ECD0 (-StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18022F208 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x180233150 (-StartInteraction@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlag.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(_QWORD *a1, __int64 a2, char a3, __int64 a4, int a5)
{
  unsigned int started; // ebx
  int v7; // ecx
  char v10; // r14
  int v11; // eax
  char v12; // si
  int v13; // r12d
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rcx
  char v23; // al

  started = 0;
  v7 = *((_DWORD *)a1 + 196);
  v10 = a2;
  if ( (_BYTE)a2 || (unsigned int)(v7 - 2) <= 2 )
  {
    if ( (unsigned int)(v7 - 2) > 2 )
    {
      v11 = 3;
      *((_DWORD *)a1 + 196) = 3;
    }
    else
    {
      v11 = v7;
    }
    v10 = 1;
  }
  else
  {
    *((_DWORD *)a1 + 196) = 1;
    v11 = 1;
  }
  *((_DWORD *)a1 + 317) = 0;
  v12 = (a1[158] & 8) != 0 && !v7 && v11;
  v13 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a4 + 24LL))(a4) )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 40LL))(a4);
  switch ( a5 )
  {
    case 1:
      v14 = *((_BYTE *)a1 + 148) & 0xFD;
      *((_DWORD *)a1 + 38) = v13;
      v15 = *a1;
      *((_BYTE *)a1 + 148) = (2 * a3) | v14 | 1;
      if ( !v15 )
        return (unsigned int)-2147019873;
      if ( v12 )
      {
        LOBYTE(a2) = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 104LL))(v15, a2);
      }
      if ( v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
      LOBYTE(a2) = v10;
      started = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
                  a1 + 20,
                  a2,
                  a3,
                  v12,
                  v13);
      if ( (started & 0x80000000) != 0 || !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
        return started;
      v17 = (2 * a3) | *((_BYTE *)a1 + 468) & 0xFD;
      started = 0;
      goto LABEL_26;
    case 2:
      v22 = *a1;
      v23 = (2 * a3) | *((_BYTE *)a1 + 148) & 0xFD;
      *((_DWORD *)a1 + 38) = v13;
      *((_BYTE *)a1 + 148) = v23 | 1;
      if ( !v22 )
        return (unsigned int)-2147019873;
      if ( v12 )
      {
        LOBYTE(a2) = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 104LL))(v22, a2);
      }
      if ( v10 )
      {
        v19 = *a1;
        goto LABEL_48;
      }
      return started;
    case 3:
      LOBYTE(a2) = v10;
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
                             a1 + 20,
                             a2,
                             a3,
                             v12,
                             v13);
    case 4:
      if ( !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
        return started;
      v17 = (2 * a3) | *((_BYTE *)a1 + 468) & 0xFD;
LABEL_26:
      v18 = a1[40];
      *((_DWORD *)a1 + 118) = v13;
      *((_BYTE *)a1 + 468) = v17 | 1;
      if ( !v18 )
        return (unsigned int)-2147019873;
      if ( v12 )
      {
        LOBYTE(v16) = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 104LL))(v18, v16);
      }
      if ( v10 )
      {
        v19 = a1[40];
LABEL_48:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 88LL))(v19);
        return started;
      }
      return started;
  }
  if ( a5 != 6 )
    return started;
  v20 = a1[60];
  v21 = (2 * a3) | *((_BYTE *)a1 + 628) & 0xFD;
  *((_DWORD *)a1 + 158) = v13;
  *((_BYTE *)a1 + 628) = v21 | 1;
  if ( !v20 )
    return (unsigned int)-2147019873;
  if ( v12 )
  {
    LOBYTE(a2) = v12;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 104LL))(v20, a2);
  }
  if ( v10 )
  {
    v19 = a1[60];
    goto LABEL_48;
  }
  return started;
}
