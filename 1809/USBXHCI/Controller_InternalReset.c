/*
 * XREFs of Controller_InternalReset @ 0x1C000CB80
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C000C808 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C000C898 (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C000F570 (Controller_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C0002D68 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C0007538 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C00076E8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C0007AC8 (Command_FailAllCommands.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000AAB4 (CommonBuffer_FlushWorkItems.c)
 *     Controller_DisableController @ 0x1C000BE88 (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Controller_Start @ 0x1C000DCE8 (Controller_Start.c)
 *     McTemplateK0p @ 0x1C0011608 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00117C8 (McTemplateK0pq.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0012FE0 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C001307C (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001ABF8 (Interrupter_ControllerResetPostReset.c)
 *     Register_ControllerReset @ 0x1C001C7FC (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C001D548 (RootHub_D0Entry.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_InternalReset(__m128i *a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rcx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, a1->m128i_i64[1]);
  WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xACu, (__int64)&Context.Logger + 4);
  if ( _InterlockedIncrement(&a1[21].m128i_i32[3]) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  ++a1[21].m128i_i32[1];
  LOBYTE(v5) = 1;
  ++a1[25].m128i_i32[2];
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a1[18].m128i_i64[1],
    v5);
  v6 = a1[9].m128i_i64[0];
  DynamicLock_Acquire(*(_QWORD *)(v6 + 112));
  v7 = *(_QWORD *)(v6 + 112);
  *(_DWORD *)(v6 + 36) = 3;
  *(_BYTE *)(v6 + 121) = 0;
  DynamicLock_Release(v7);
  DeviceSlot_ControllerResetPreReset(a1[8].m128i_i64[1]);
  Interrupter_FlushPendingDpcOrWorkItemPreReset(a1[8].m128i_i64[0]);
  v8 = Register_ControllerStop(a1[5].m128i_i64[1]);
  Interrupter_FlushPendingDpcOrWorkItemPreReset(a1[8].m128i_i64[0]);
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = 1;
    v10 = Register_ControllerReset(a1[5].m128i_i64[1], v9);
    v4 = v10;
    if ( v10 < 0 )
    {
      v20 = v10;
      WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xAEu, (__int64)&Context.Logger + 4, v20);
    }
  }
  else
  {
    v19 = v8;
    WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xADu, (__int64)&Context.Logger + 4, v19);
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(a1[9].m128i_i64[0]);
  v11 = (_QWORD *)a1[7].m128i_i64[1];
  if ( v11 )
    CommonBuffer_FlushWorkItems(v11);
  DeviceSlot_ControllerResetPostReset(a1[8].m128i_i64[1]);
  RootHub_D0Entry(a1[9].m128i_i64[1]);
  if ( v8 < 0 )
  {
    LODWORD(v18) = v8;
    WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xAFu, (__int64)&Context.Logger + 4, v18);
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0LL,
      0LL,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v12 = 4107;
LABEL_14:
    Controller_ReportFatalError((_DWORD)a1, 4, v12, 0, 0LL, 0LL);
    goto LABEL_20;
  }
  Interrupter_ControllerResetPostReset(a1[8].m128i_i64[0]);
  if ( v4 >= 0 )
  {
    v13 = Controller_Start(a1);
    v8 = v13;
    if ( v13 < 0 )
    {
      LODWORD(v18) = v13;
      WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB1u, (__int64)&Context.Logger + 4, v18);
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0LL,
        0LL,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v12 = 4104;
      goto LABEL_14;
    }
    v8 = 0;
  }
  else
  {
    LODWORD(v18) = v4;
    WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB0u, (__int64)&Context.Logger + 4, v18);
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0LL,
      0LL,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError((_DWORD)a1, 4, 4103, 0, 0LL, 0LL);
    v8 = v4;
  }
LABEL_20:
  v14 = a1[9].m128i_i64[0];
  if ( v8 < 0 )
  {
    Command_FailAllCommands(v14);
    ((void (__fastcall *)(__int64, __int64))qword_1C0050640)(UcxDriverGlobals, a1->m128i_i64[1]);
    LODWORD(v18) = v8;
    result = WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB3u, (__int64)&Context.Logger + 4, v18);
  }
  else
  {
    Command_ControllerResetPostResetSuccess(v14);
    result = WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xB2u, (__int64)&Context.Logger + 4);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    result = McTemplateK0pq(v16, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v17, a1->m128i_i64[1], v8);
  _InterlockedDecrement(&a1[21].m128i_i32[3]);
  return result;
}
