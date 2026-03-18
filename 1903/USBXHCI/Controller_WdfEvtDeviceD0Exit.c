/*
 * XREFs of Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000CCC8 (CommonBuffer_FlushWorkItems.c)
 *     Controller_D0Exit @ 0x1C000DBE0 (Controller_D0Exit.c)
 *     Controller_D0ExitSaveState @ 0x1C000DCC0 (Controller_D0ExitSaveState.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000E590 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_InUseByDebugger @ 0x1C000EB20 (Controller_InUseByDebugger.c)
 *     McTemplateK0pqqh @ 0x1C001423C (McTemplateK0pqqh.c)
 *     McTemplateK0pqqq @ 0x1C00142D0 (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014F90 (WPP_RECORDER_SF_qdd.c)
 *     Interrupter_D0ExitStopped @ 0x1C001E1C0 (Interrupter_D0ExitStopped.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0020980 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0020A5C (Register_SetClearSSICPortUnused.c)
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00606EC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00608DC (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0Exit(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ebp
  bool v9; // zf
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  const GUID *v20; // r8
  unsigned int Arg2[2]; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 3104))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  v8 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqh(
      *(unsigned __int8 *)(v4 + 468),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START,
      v7,
      *(_QWORD *)(v4 + 8),
      a2,
      v5,
      *(_BYTE *)(v4 + 468));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qdd(*(_QWORD *)(v4 + 72), v6, 4, 83, (__int64)&Context.Logger + 4, a1, a2, *(_DWORD *)(v4 + 420));
  }
  v9 = *(_QWORD *)(v4 + 424) == 0LL;
  *(_DWORD *)(v4 + 392) = a2;
  if ( v9 || a2 != 6 )
  {
    v11 = *(_QWORD **)(v4 + 120);
    if ( v11 )
      CommonBuffer_FlushWorkItems(v11);
    RootHub_D0Exit(*(_QWORD *)(v4 + 152), a2, *(unsigned int *)(v4 + 420));
    Controller_D0Exit((__int64 *)v4, a2, v12);
    Interrupter_D0ExitStopped(*(_QWORD *)(v4 + 128), a2);
    if ( (*(_QWORD *)(v4 + 336) & 2) != 0
      || *(_BYTE *)(v4 + 396)
      || a2 == 5
      || *(_DWORD *)(v4 + 420) == 5
      || (_mm_srli_si128(*(__m128i *)(v4 + 336), 8).m128i_u8[0] & 8) != 0 && Controller_InUseByDebugger((_QWORD *)v4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), 4u, 4u, 0x54u, (__int64)&Context.Logger + 4);
    }
    else
    {
      v14 = Controller_D0ExitSaveState(v4, v10, v13);
      if ( v14 < 0 )
      {
        *(_BYTE *)(v4 + 396) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Arg2[0] = v14;
          WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), 4u, 4u, 0x55u, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
        }
        Controller_HwVerifierBreakIfEnabled(
          (_QWORD *)v4,
          0LL,
          0LL,
          0x400000LL,
          "Controller save state operation failed",
          0LL,
          0LL);
      }
      v16 = *(_QWORD *)(v4 + 88);
      LOBYTE(v15) = 1;
      Register_SetClearSSICPortUnused(v16, v15);
      LOBYTE(v17) = 1;
      Register_SaveRestoreCHTNonArchitecturalRegisters(v16, v17);
      Controller_ExecuteHSICDisconnectInU3Workaround(v4, 0LL);
      Controller_ExecuteDSMToSendPORTSCValues(v4);
      if ( (_mm_srli_si128(*(__m128i *)(v4 + 336), 8).m128i_u8[0] & 1) != 0 )
        Controller_ExecuteKBLPowerTransitionWorkaround(v4, 0LL);
    }
  }
  else
  {
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v4 + 360),
      v7);
  }
  if ( (*(_QWORD *)(v4 + 336) & 0x80000000000LL) != 0 && v8 == 5 )
  {
    LOBYTE(v10) = 1;
    v18 = Register_ControllerReset(*(_QWORD *)(v4 + 88), v10);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Arg2[0] = v18;
      WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), 4u, 4u, 0x56u, (__int64)&Context.Logger + 4, *(_QWORD *)Arg2);
    }
  }
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v4 + 368));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v4 + 816));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v4 + 504));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v4 + 696));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqq(v19, &USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_COMPLETE, v20, *(const void **)(v4 + 8), a2, v8, 0);
  return 0LL;
}
