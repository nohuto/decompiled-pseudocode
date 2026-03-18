/*
 * XREFs of Command_InternalSendCommand @ 0x1C000A23C
 * Callers:
 *     Command_ControllerResetPostResetSuccess @ 0x1C00094E0 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0009AB8 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0009F60 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     McTemplateK0ppb16 @ 0x1C0006B9C (McTemplateK0ppb16.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C000B924 (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C000BA1C (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C000BB34 (WPP_RECORDER_SF_qdqddd.c)
 *     XilCommand_AddCommandCRBToRing @ 0x1C000BC8C (XilCommand_AddCommandCRBToRing.c)
 *     Etw_CommandWaitlisted @ 0x1C003E310 (Etw_CommandWaitlisted.c)
 */

char __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r10d
  _QWORD *v14; // rbp
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  BOOL v19; // ecx
  signed __int32 v21[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h]

  v6 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v6 - 2) <= 1 )
  {
    v7 = 4LL;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        51,
        v22,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v7 = 3LL;
    goto LABEL_6;
  }
  if ( (_DWORD)v6 == 4 )
  {
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, 3LL, 0LL);
    return (char)v8;
  }
  v10 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v10 != v10 )
  {
    v6 = 0x80000000LL;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x80000000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLq(
          *(_QWORD *)(a1 + 16),
          a2,
          a3,
          52,
          v22,
          a2,
          (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
          *(_QWORD *)(a2 + 48));
      v7 = 2LL;
      goto LABEL_6;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      53,
      v22,
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v11, v12, a4, v22, a2, v12, v13, v11);
    *(_DWORD *)(a2 + 16) = 0;
    v7 = 1LL;
LABEL_6:
    Etw_CommandWaitlisted(v6, a1, a2, v7);
    v8 = *(__int64 **)(a1 + 104);
    v9 = a1 + 96;
    if ( *v8 == v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(v9 + 8) = a2;
      return (char)v8;
    }
LABEL_42:
    __fastfail(3u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v11,
      v12,
      a4,
      v22,
      a2,
      v12,
      *(_BYTE *)(a1 + 72) + 16 * v12,
      v13,
      *(_DWORD *)(a1 + 64),
      v11);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb16((struct _MCGEN_TRACE_CONTEXT *)v6, v11, v12, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  XilCommand_AddCommandCRBToRing(a1, a2);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v21, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 40);
  v8 = *(__int64 **)(a1 + 88);
  v14 = (_QWORD *)*v10;
  if ( (_QWORD *)*v8 != v10 )
    goto LABEL_42;
  *(_QWORD *)a2 = v10;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 88) = a2;
  ++*(_DWORD *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 40) == v15 )
  {
    v16 = v15;
    v17 = *(_QWORD *)(a1 + 72);
    v18 = 2 * v16;
    LOBYTE(v8) = *(_BYTE *)(v17 + 8 * v18 + 12) ^ 1;
    *(_BYTE *)(v17 + 8 * v18 + 12) = (_BYTE)v8;
    _InterlockedOr(v21, 0);
    v19 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v19;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v18) = 5;
        LOBYTE(v8) = WPP_RECORDER_SF_ddL(
                       *(_QWORD *)(a1 + 16),
                       v18,
                       7,
                       56,
                       (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
                       *(_DWORD *)(a1 + 40),
                       *(_DWORD *)(a1 + 48),
                       v19);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v14 == v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x39u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    LOBYTE(v8) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(a1 + 24),
                   -10000000LL);
  }
  return (char)v8;
}
