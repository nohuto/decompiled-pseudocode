/*
 * XREFs of Command_InternalSendCommand @ 0x1C0008334
 * Callers:
 *     Command_ControllerResetPostResetSuccess @ 0x1C00076E8 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppb16 @ 0x1C00057F0 (McTemplateK0ppb16.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C000989C (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C0009994 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C0009AAC (WPP_RECORDER_SF_qdqddd.c)
 *     XilCommand_AddCommandCRBToRing @ 0x1C0009C04 (XilCommand_AddCommandCRBToRing.c)
 *     Etw_CommandWaitlisted @ 0x1C0038FC0 (Etw_CommandWaitlisted.c)
 */

PDEVICE_OBJECT __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3)
{
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  __int64 v6; // r9
  PDEVICE_OBJECT result; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r10d
  _QWORD *v14; // rbp
  unsigned int v15; // ecx
  int v16; // edx
  BOOL v17; // ecx
  signed __int32 v18[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+20h] [rbp-58h]

  v5 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(a1 + 36);
  if ( (unsigned int)((_DWORD)v5 - 2) <= 1 )
  {
    v6 = 4LL;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      a3,
      51,
      v19,
      a2,
      (unsigned __int16)*(_DWORD *)(a2 + 36) >> 10,
      *(_QWORD *)(a2 + 48));
    v6 = 3LL;
    goto LABEL_4;
  }
  if ( (_DWORD)v5 == 4 )
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, 3LL, 0LL);
  v9 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v9 != v9 && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x80000000LL) != 0 )
  {
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      52,
      v19,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
      *(_QWORD *)(a2 + 48));
    v6 = 2LL;
    goto LABEL_4;
  }
  WPP_RECORDER_SF_qLq(
    *(_QWORD *)(a1 + 16),
    a2,
    a3,
    53,
    v19,
    a2,
    (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
    *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v11 = 0LL;
  v12 = *(unsigned int *)(a1 + 40);
  v13 = *(_DWORD *)(a1 + 44);
  if ( (_DWORD)v12 + 1 != *(_DWORD *)(a1 + 48) )
    v11 = (unsigned int)(v12 + 1);
  if ( (_DWORD)v11 == v13 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v11, v12, v10, v19, a2, v12, v13, v11);
    *(_DWORD *)(a2 + 16) = 0;
    v6 = 1LL;
LABEL_4:
    Etw_CommandWaitlisted(v5, a1, a2, v6);
    result = *(PDEVICE_OBJECT *)(a1 + 104);
    v8 = a1 + 96;
    if ( *(_QWORD *)&result->Type == v8 )
    {
      *(_QWORD *)a2 = v8;
      *(_QWORD *)(a2 + 8) = result;
      *(_QWORD *)&result->Type = a2;
      *(_QWORD *)(v8 + 8) = a2;
      return result;
    }
LABEL_32:
    __fastfail(3u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v11,
      v12,
      v10,
      v19,
      a2,
      v12,
      *(_BYTE *)(a1 + 72) + 16 * v12,
      v13,
      *(_DWORD *)(a1 + 64),
      v11);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb16(v5, v11, v12, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  XilCommand_AddCommandCRBToRing(a1, a2);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v18, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 40);
  result = *(PDEVICE_OBJECT *)(a1 + 88);
  v14 = (_QWORD *)*v9;
  if ( *(_QWORD **)&result->Type != v9 )
    goto LABEL_32;
  *(_QWORD *)a2 = v9;
  *(_QWORD *)(a2 + 8) = result;
  *(_QWORD *)&result->Type = a2;
  *(_QWORD *)(a1 + 88) = a2;
  ++*(_DWORD *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 40) == v15 )
  {
    v16 = 2 * v15;
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * v15 + 12) ^= 1u;
    _InterlockedOr(v18, 0);
    v17 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v17;
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v16) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_ddL(
                                 *(_QWORD *)(a1 + 16),
                                 v16,
                                 7,
                                 56,
                                 (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
                                 *(_DWORD *)(a1 + 40),
                                 *(_DWORD *)(a1 + 48),
                                 v17);
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v14 == v9 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x39u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                             WPP_MAIN_CB.Dpc.ProcessorHistory,
                             *(_QWORD *)(a1 + 24),
                             -10000000LL);
  }
  return result;
}
