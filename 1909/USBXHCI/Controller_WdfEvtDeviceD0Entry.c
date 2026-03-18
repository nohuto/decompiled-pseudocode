/*
 * XREFs of Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_D0Entry @ 0x1C00095AC (Command_D0Entry.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_D0EntryRestoreState @ 0x1C000D8D8 (Controller_D0EntryRestoreState.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C000EB20 (Controller_InUseByDebugger.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 *     McTemplateK0pqqh @ 0x1C001423C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00142D0 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014F90 (WPP_RECORDER_SF_qdd.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     DeviceSlot_D0Entry @ 0x1C0015B1C (DeviceSlot_D0Entry.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C0015B78 (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0015C18 (DeviceSlot_DisableAllDeviceSlots.c)
 *     Interrupter_D0Entry @ 0x1C001E020 (Interrupter_D0Entry.c)
 *     Register_BiosHandoff @ 0x1C001FE14 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C002054C (Register_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0020980 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0020A5C (Register_SetClearSSICPortUnused.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     RootHub_D0Entry @ 0x1C0020EF4 (RootHub_D0Entry.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00606EC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00608DC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C00631E8 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Entry(__int64 a1, unsigned int a2)
{
  char v4; // r14
  __int64 v5; // rdi
  char v6; // r15
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r12d
  __int64 v11; // rdx
  signed int Arg3; // ebx
  _QWORD *v13; // rcx
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
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  struct _MCGEN_TRACE_CONTEXT *v29; // rcx
  const GUID *v30; // r8
  unsigned int Arg2[2]; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-48h] BYREF
  int v34; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  if ( *(_BYTE *)(v5 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      1901LL);
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3104))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v10 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v5 + 468),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_START,
      v9,
      *(_QWORD *)(v5 + 8),
      a2,
      v7,
      *(_BYTE *)(v5 + 468));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qdd(*(_QWORD *)(v5 + 72), v8, 4, 60, (__int64)&Context.Logger + 4, a1, a2, *(_DWORD *)(v5 + 420));
  }
  if ( (unsigned int)XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), *(_QWORD *)(*(_QWORD *)(v5 + 88) + 24LL)) == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 2u, 4u, 0x3Du, (__int64)&Context.Logger + 4);
    v6 = 1;
    Arg3 = -1073741823;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v5 + 464) && *(_QWORD *)(v5 + 832) )
    SleepstudyHelper_ComponentActive();
  if ( *(_DWORD *)(v5 + 420) != 2 )
    goto LABEL_30;
  v15 = *(_QWORD *)(v5 + 424);
  if ( v15 && *(_DWORD *)(v15 + 584) == 4 )
  {
    v16 = Register_ControllerStop(*(_QWORD *)(v5 + 88));
    if ( v16 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Arg2[0] = v16;
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2u, 4u, 0x3Eu, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
    }
  }
  else
  {
    v17 = Register_BiosHandoff(*(_QWORD *)(v5 + 88));
    Arg3 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_79;
      v18 = 63;
      goto LABEL_78;
    }
  }
  DeviceSlot_D0EntryCleanupState(*(_QWORD *)(v5 + 136), a2);
  v17 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0LL);
  Arg3 = v17;
  if ( v17 >= 0 )
  {
    v4 = 1;
LABEL_30:
    if ( !*(_BYTE *)(v5 + 440) )
    {
      *(_DWORD *)(v5 + 444) = KeQueryTimeIncrement();
      v19 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v5 + 88) + 40LL) + 1) >> 3) & 0x7FF;
      v11 = _InterlockedExchange64(
              (volatile __int64 *)(v5 + 432),
              (v19 >> 11) | ((MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v5 + 444) / 10000LL - v19) << 21));
      *(_BYTE *)(v5 + 440) = 1;
    }
    LOBYTE(v11) = 1;
    Controller_ExecuteHSICDisconnectInU3Workaround(v5, v11);
    if ( (_mm_srli_si128(*(__m128i *)(v5 + 336), 8).m128i_u8[0] & 1) != 0 )
    {
      LOBYTE(v20) = 1;
      Controller_ExecuteKBLPowerTransitionWorkaround(v5, v20);
    }
    v22 = 1;
    v23 = 0;
    do
    {
      if ( v23
        || (*(_QWORD *)(v5 + 336) & 2) != 0
        || *(_BYTE *)(v5 + 396)
        || a2 == 5
        || *(_DWORD *)(v5 + 420) == 2
        || (_mm_srli_si128(*(__m128i *)(v5 + 336), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v5) )
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
      Arg3 = v17;
      if ( v17 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_79;
        v18 = 65;
        goto LABEL_78;
      }
      v17 = DeviceSlot_D0Entry(*(_QWORD *)(v5 + 136), a2);
      Arg3 = v17;
      if ( v17 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_79;
        v18 = 66;
        goto LABEL_78;
      }
      v17 = Command_D0Entry(*(_QWORD *)(v5 + 144), a2);
      Arg3 = v17;
      if ( v17 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_79;
        v18 = 67;
        goto LABEL_78;
      }
      if ( v22 == 2 || a2 == 5 || *(_DWORD *)(v5 + 420) == 2 )
        break;
      if ( (*(_QWORD *)(v5 + 336) & 2) != 0
        || *(_BYTE *)(v5 + 396)
        || (_mm_srli_si128(*(__m128i *)(v5 + 336), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v5) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 4u, 4u, 0x45u, (__int64)&Context.Logger + 4);
      }
      else
      {
        v27 = Controller_D0EntryRestoreState(v5, v25, v26);
        if ( v27 >= 0 )
          break;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Arg2[0] = v27;
          WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 4u, 4u, 0x44u, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
        }
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
      v17 = Register_ControllerReset(*(_QWORD *)(v5 + 88), 0LL);
      Arg3 = v17;
      if ( v17 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_79;
        v18 = 70;
        goto LABEL_78;
      }
      ++v22;
      v4 = 1;
      v23 = v22 == 2;
    }
    while ( v22 <= 2 );
    v17 = Register_D0Entry(*(_QWORD *)(v5 + 88));
    Arg3 = v17;
    if ( v17 >= 0 )
    {
      v17 = RootHub_D0Entry(*(_QWORD *)(v5 + 152));
      Arg3 = v17;
      if ( v17 >= 0 )
      {
        *(_DWORD *)(v5 + 392) = 1;
        if ( v4 == 1 )
        {
          v28 = *(_QWORD *)(v5 + 8);
          v34 = 0;
          v33 = 12LL;
          ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1C0057678)(UcxDriverGlobals, v28, &v33);
        }
        goto LABEL_79;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_79;
      v18 = 72;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_79;
      v18 = 71;
    }
    goto LABEL_78;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_79;
  v18 = 64;
LABEL_78:
  Arg2[0] = v17;
  WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2u, 4u, v18, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
LABEL_79:
  if ( Arg3 < 0 )
  {
LABEL_12:
    DeviceSlot_DisableAllDeviceSlots(*(_QWORD *)(v5 + 136));
    v13 = (_QWORD *)v5;
    if ( v6 )
    {
      v14 = 1;
    }
    else
    {
      Controller_ReportFatalError(v5, 0, 4124, 0LL, 0LL, 0LL);
      v14 = 0;
      v13 = (_QWORD *)v5;
    }
    Controller_SetControllerGone(v13, v14);
    goto LABEL_85;
  }
  if ( *(_DWORD *)(v5 + 420) <= 2u )
    *(_DWORD *)(v5 + 420) = 7;
  Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(v5);
LABEL_85:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v29, &USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_COMPLETE, v30, *(const void **)(v5 + 8), a2, v10, Arg3);
  return (unsigned int)Arg3;
}
