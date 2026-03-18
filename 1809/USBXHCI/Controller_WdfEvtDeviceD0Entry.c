/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0010120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_Initialize @ 0x1C00082E4 (Command_Initialize.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_D0EntryRestoreState @ 0x1C000B688 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C000C740 (Controller_InUseByDebugger.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 *     McTemplateK0pqqh @ 0x1C001183C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00118D0 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0012590 (WPP_RECORDER_SF_qdd.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C001310C (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C00131A0 (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_Initialize @ 0x1C0013228 (DeviceSlot_Initialize.c)
 *     Interrupter_D0Entry @ 0x1C001AC60 (Interrupter_D0Entry.c)
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C001CBD4 (Register_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001CFF8 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C001D0D4 (Register_SetClearSSICPortUnused.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     RootHub_D0Entry @ 0x1C001D548 (RootHub_D0Entry.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0059440 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00595FC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C005BB94 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // r14
  __int64 v5; // rdi
  char v6; // r12
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r15d
  __int64 v11; // rdx
  signed int v12; // ebx
  __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // ebp
  bool v23; // zf
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  struct _MCGEN_TRACE_CONTEXT *v30; // rcx
  const GUID *v31; // r8
  unsigned int Arg2[2]; // [rsp+28h] [rbp-60h]
  unsigned int Arg3[2]; // [rsp+30h] [rbp-58h]
  unsigned int Arg3a[2]; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  if ( *(_BYTE *)(v5 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      1844LL);
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3104))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v10 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v5 + 404),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v9,
      *(_QWORD *)(v5 + 8),
      a2,
      v7,
      *(_BYTE *)(v5 + 404));
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_qdd(*(_QWORD *)(v5 + 72), v8, 4, 58, (__int64)&Context.Logger + 4, a1, a2, *(_DWORD *)(v5 + 352));
  if ( (unsigned int)XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), *(_QWORD *)(*(_QWORD *)(v5 + 88) + 24LL)) == -1 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 2u, 4u, 0x3Bu, (__int64)&Context.Logger + 4);
    v6 = 1;
    v12 = -1073741823;
LABEL_8:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v5 + 136));
    v13 = v5;
    if ( v6 )
    {
      v14 = 1;
    }
    else
    {
      Controller_ReportFatalError(v5, 0, 4124, 0LL, 0LL, 0LL);
      v14 = 0;
      v13 = v5;
    }
    Controller_SetControllerGone(v13, v14);
    goto LABEL_64;
  }
  if ( *(_DWORD *)(v5 + 352) == 2 )
  {
    v15 = *(_QWORD *)(v5 + 360);
    if ( v15 && *(_DWORD *)(v15 + 584) == 4 )
    {
      v16 = Register_ControllerStop(*(_QWORD *)(v5 + 88));
      if ( v16 < 0 )
      {
        Arg2[0] = v16;
        WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2u, 4u, 0x3Cu, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
      }
    }
    else
    {
      v17 = Register_BiosHandoff(*(_QWORD *)(v5 + 88));
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 61;
        goto LABEL_57;
      }
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
    v17 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0LL);
    v12 = v17;
    if ( v17 < 0 )
    {
      v18 = 62;
LABEL_57:
      Arg2[0] = v17;
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2u, 4u, v18, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
      goto LABEL_58;
    }
    v4 = 1;
  }
  if ( !*(_BYTE *)(v5 + 376) )
  {
    *(_DWORD *)(v5 + 380) = KeQueryTimeIncrement();
    v19 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 88) + 40LL) + 1) >> 3) & 0x7FF;
    v11 = _InterlockedExchange64(
            (volatile __int64 *)(v5 + 368),
            (v19 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 380) / 10000LL - v19) << 21));
    *(_BYTE *)(v5 + 376) = 1;
  }
  LOBYTE(v11) = 1;
  Controller_ExecuteHSICDisconnectInU3Workaround(v5, v11);
  if ( (_mm_srli_si128(*(__m128i *)(v5 + 272), 8).m128i_u8[0] & 1) != 0 )
  {
    LOBYTE(v20) = 1;
    Controller_ExecuteKBLPowerTransitionWorkaround(v5, v20);
  }
  v22 = 1;
  v23 = 0;
  do
  {
    if ( v23
      || (*(_QWORD *)(v5 + 272) & 2) != 0
      || *(_BYTE *)(v5 + 332)
      || a2 == 5
      || *(_DWORD *)(v5 + 352) == 2
      || (_mm_srli_si128(*(__m128i *)(v5 + 272), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v5) )
    {
      LOBYTE(v21) = 0;
    }
    else
    {
      v24 = *(_QWORD *)(v5 + 88);
      Register_SetClearSSICPortUnused(v24, 0LL);
      Register_SaveRestoreCHTNonArchitecturalRegisters(v24, 0LL);
      LOBYTE(v21) = 1;
    }
    v17 = Interrupter_D0Entry(*(_QWORD *)(v5 + 128), a2, v21);
    v12 = v17;
    if ( v17 < 0 )
    {
      v18 = 63;
      goto LABEL_57;
    }
    v25 = *(_QWORD *)(v5 + 136);
    Arg3[0] = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(v25 + 8) + 72LL),
      4u,
      0xAu,
      0xDu,
      (__int64)&WPP_8286b434249d3c674ece5f25eb47b41f_Traceguids,
      v25,
      *(_QWORD *)Arg3);
    v17 = DeviceSlot_Initialize(v25);
    v12 = v17;
    if ( v17 < 0 )
    {
      v18 = 64;
      goto LABEL_57;
    }
    v26 = *(_QWORD *)(v5 + 144);
    Arg3a[0] = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(v26 + 16),
      4u,
      7u,
      0x10u,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      v26,
      *(_QWORD *)Arg3a);
    Command_Initialize(v26);
    if ( v22 == 2 || a2 == 5 || *(_DWORD *)(v5 + 352) == 2 )
      break;
    if ( (*(_QWORD *)(v5 + 272) & 2) != 0
      || *(_BYTE *)(v5 + 332)
      || (_mm_srli_si128(*(__m128i *)(v5 + 272), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v5) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 4u, 4u, 0x43u, (__int64)&Context.Logger + 4);
    }
    else
    {
      v27 = Controller_D0EntryRestoreState(v5);
      if ( v27 >= 0 )
        break;
      Arg2[0] = v27;
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 4u, 4u, 0x42u, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)v5,
        0LL,
        0LL,
        0x400000LL,
        "Controller restore state operation failed",
        0LL,
        0LL);
    }
    DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
    v28 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0LL);
    v12 = v28;
    if ( v28 < 0 )
    {
      Arg2[0] = v28;
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2u, 4u, 0x44u, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
      goto LABEL_58;
    }
    ++v22;
    v4 = 1;
    v23 = v22 == 2;
  }
  while ( v22 <= 2 );
  v17 = Register_D0Entry(*(_QWORD *)(v5 + 88));
  v12 = v17;
  if ( v17 < 0 )
  {
    v18 = 69;
    goto LABEL_57;
  }
  v17 = RootHub_D0Entry(*(_QWORD *)(v5 + 152));
  v12 = v17;
  if ( v17 < 0 )
  {
    v18 = 70;
    goto LABEL_57;
  }
  *(_DWORD *)(v5 + 328) = 1;
  if ( v4 == 1 )
  {
    v29 = *(_QWORD *)(v5 + 8);
    v37 = 0;
    v36 = 12LL;
    ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1C0050638)(UcxDriverGlobals, v29, &v36);
  }
LABEL_58:
  if ( v12 < 0 )
    goto LABEL_8;
  if ( *(_DWORD *)(v5 + 352) <= 2u )
    *(_DWORD *)(v5 + 352) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
LABEL_64:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v30, &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE, v31, *(const void **)(v5 + 8), a2, v10, v12);
  return (unsigned int)v12;
}
