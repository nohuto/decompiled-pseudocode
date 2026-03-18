/*
 * XREFs of Controller_InternalReset @ 0x1C000EF9C
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C000EBE8 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C000EC78 (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C0011EF0 (Controller_UcxEvtReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C0003210 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C000931C (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C00094E0 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C0009948 (Command_FailAllCommands.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000CCC8 (CommonBuffer_FlushWorkItems.c)
 *     Controller_DisableController @ 0x1C000E1E4 (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Controller_Start @ 0x1C00103F0 (Controller_Start.c)
 *     McTemplateK0p @ 0x1C0014008 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00141C8 (McTemplateK0pq.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C00159F0 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C0015A8C (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C001DFB8 (Interrupter_ControllerResetPostReset.c)
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C00203FC (Register_ControllerStop.c)
 *     RootHub_D0Entry @ 0x1C0020EF4 (RootHub_D0Entry.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_InternalReset(__m128i *a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rcx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, a1->m128i_i64[1]);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xAEu, (__int64)&Context.Logger + 4);
  if ( _InterlockedIncrement(a1[26].m128i_i32) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedIncrement(&a1[25].m128i_i32[1]);
  if ( !_InterlockedCompareExchange(&a1[52].m128i_i32[3], 0, 1)
    && !_InterlockedCompareExchange(&a1[52].m128i_i32[2], 0, 0) )
  {
    ++a1[29].m128i_i32[3];
    a1[29].m128i_i8[8] = 1;
    _InterlockedIncrement(&a1[25].m128i_i32[2]);
  }
  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a1[22].m128i_i64[1],
    a3);
  v5 = a1[9].m128i_i64[0];
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112));
  v6 = *(_QWORD *)(v5 + 112);
  *(_DWORD *)(v5 + 36) = 3;
  *(_BYTE *)(v5 + 121) = 0;
  DynamicLock_Release(v6);
  DeviceSlot_ControllerResetPreReset(a1[8].m128i_i64[1]);
  Interrupter_FlushPendingDpcOrWorkItemPreReset(a1[8].m128i_i64[0]);
  v7 = Register_ControllerStop(a1[5].m128i_i64[1]);
  Interrupter_FlushPendingDpcOrWorkItemPreReset(a1[8].m128i_i64[0]);
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = 1;
    v9 = Register_ControllerReset(a1[5].m128i_i64[1], v8);
    v4 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = v9;
      WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB0u, (__int64)&Context.Logger + 4, v19);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = v7;
      WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xAFu, (__int64)&Context.Logger + 4, v18);
    }
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(a1[9].m128i_i64[0]);
  v10 = (_QWORD *)a1[7].m128i_i64[1];
  if ( v10 )
    CommonBuffer_FlushWorkItems(v10);
  DeviceSlot_ControllerResetPostReset(a1[8].m128i_i64[1]);
  RootHub_D0Entry(a1[9].m128i_i64[1]);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v7;
      WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB1u, (__int64)&Context.Logger + 4, v17);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0LL,
      0LL,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v11 = 4107;
LABEL_24:
    Controller_ReportFatalError((_DWORD)a1, 4, v11, 0, 0LL, 0LL);
    goto LABEL_34;
  }
  Interrupter_ControllerResetPostReset(a1[8].m128i_i64[0]);
  if ( v4 >= 0 )
  {
    v12 = Controller_Start(a1);
    v7 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v12;
        WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB3u, (__int64)&Context.Logger + 4, v17);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0LL,
        0LL,
        32LL,
        "During controller reset recovery, controller start timed out",
        0LL,
        0LL);
      v11 = 4104;
      goto LABEL_24;
    }
    v7 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v4;
      WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB2u, (__int64)&Context.Logger + 4, v17);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0LL,
      0LL,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError((_DWORD)a1, 4, 4103, 0, 0LL, 0LL);
    v7 = v4;
  }
LABEL_34:
  v13 = a1[9].m128i_i64[0];
  if ( v7 < 0 )
  {
    Command_FailAllCommands(v13);
    result = ((__int64 (__fastcall *)(__int64, __int64))qword_1C0057680)(UcxDriverGlobals, a1->m128i_i64[1]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v7;
      result = WPP_RECORDER_SF_d(a1[4].m128i_i64[1], 2u, 4u, 0xB5u, (__int64)&Context.Logger + 4, v17);
    }
  }
  else
  {
    result = Command_ControllerResetPostResetSuccess(v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = WPP_RECORDER_SF_(a1[4].m128i_i64[1], 4u, 4u, 0xB4u, (__int64)&Context.Logger + 4);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    result = McTemplateK0pq(v15, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE, v16, a1->m128i_i64[1], v7);
  _InterlockedDecrement(a1[26].m128i_i32);
  return result;
}
