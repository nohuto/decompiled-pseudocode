/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C0007C24
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qii @ 0x1C000221C (WPP_RECORDER_SF_qii.c)
 *     McTemplateK0ppb16qu @ 0x1C0005878 (McTemplateK0ppb16qu.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0008088 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C0008334 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C000966C (WPP_RECORDER_SF_qLLdd.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000A0CC (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0038F74 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 **result; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r15
  int v13; // ecx
  int v14; // ecx
  __int64 **v15; // rcx
  __int64 ****v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 ***v20; // rdi
  __int64 v21; // r8
  __int64 *v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rcx
  void (__fastcall *v25)(__int64, __int64 *); // rax
  struct _MCGEN_TRACE_CONTEXT *v26; // rcx
  int v27; // edx
  unsigned int v28; // esi
  int v29; // [rsp+20h] [rbp-40h]
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int64 v31; // [rsp+38h] [rbp-28h]
  __int64 *v32; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v33; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v33 = &v32;
  v32 = (__int64 *)&v32;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v8 = (__int64 *)(a1 + 80);
  v9 = *(__int64 **)(a1 + 80);
  if ( v9 == (__int64 *)(a1 + 80) )
    goto LABEL_30;
  v6 = *(_QWORD **)a2;
  while ( 1 )
  {
    v12 = XilCommand_GetCommandRingBufferLogicalAddress(a1, v6) + 16LL * *((unsigned int *)v9 + 5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v31 = v10;
      HIDWORD(v30) = HIDWORD(v12);
      WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), v10, v11, v7, v29);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 16),
        v10,
        7,
        45,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        *(_DWORD *)(a1 + 44),
        *(_DWORD *)(a1 + 40));
    }
    v6 = *(_QWORD **)a2;
    if ( *(_QWORD *)a2 == v12 )
      break;
    v9 = (__int64 *)*v9;
    if ( v9 == v8 )
      goto LABEL_30;
  }
  *((_DWORD *)v9 + 4) = 2;
  *((_BYTE *)v9 + 60) = *(_BYTE *)(a2 + 11);
  *((_DWORD *)v9 + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v13 = *(_DWORD *)(a2 + 12);
  if ( (v13 & 0xFC00) == 0x8400 )
    *((_BYTE *)v9 + 61) = HIBYTE(v13);
  if ( (*((_BYTE *)v9 + 62) & 2) != 0 )
    *(_OWORD *)(v9 + 3) = *(_OWORD *)a2;
LABEL_30:
  while ( 1 )
  {
    v20 = (__int64 ***)*v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *((_DWORD *)v20 + 4) != 2 )
    {
      if ( v32 == (__int64 *)&v32 && !*(_BYTE *)(a1 + 120) )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(a1 + 8),
          0,
          0,
          0x10000,
          (__int64)"Controller completed a command out of order",
          *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
          a2);
        Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL);
        *(_BYTE *)(a1 + 120) = 1;
      }
      break;
    }
    v14 = *(_DWORD *)(a1 + 44) + 1;
    *(_DWORD *)(a1 + 44) = v14;
    if ( v14 == *(_DWORD *)(a1 + 48) )
    {
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v14) = 0;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 16),
        (_DWORD)v6,
        7,
        46,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        v14,
        *(_DWORD *)(a1 + 40));
    }
    WPP_RECORDER_SF_qLLdd(
      *(_QWORD *)(a1 + 16),
      *(unsigned __int8 *)(a2 + 15),
      *(_DWORD *)(a2 + 12) & 1,
      v7,
      v29,
      (char)v20,
      (unsigned __int16)*((_DWORD *)v20 + 9) >> 10,
      *(_BYTE *)(a2 + 11),
      *(_BYTE *)(a2 + 12) & 1,
      *(_BYTE *)(a2 + 15));
    v15 = *v20;
    if ( (*v20)[1] != (__int64 *)v20
      || (v16 = (__int64 ****)v20[1], *v16 != v20)
      || (*v16 = (__int64 ***)v15, v15[1] = (__int64 *)v16, v17 = v33, *v33 != (__int64 *)&v32) )
    {
LABEL_58:
      __fastfail(3u);
    }
    v20[1] = v33;
    *v20 = &v32;
    *v17 = v20;
    v18 = (_QWORD *)(a1 + 96);
    v6 = *(_QWORD **)(a1 + 96);
    v33 = (__int64 **)v20;
    if ( v6 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v6[1] != v18 )
        goto LABEL_58;
      v19 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_58;
      *v18 = v19;
      *(_QWORD *)(v19 + 8) = v18;
      Command_InternalSendCommand(a1);
    }
  }
  if ( (__int64 *)*v8 == v8 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x31u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 5u, 7u, 0x30u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112));
  while ( 1 )
  {
    v22 = v32;
    result = &v32;
    if ( v32 == (__int64 *)&v32 )
      return result;
    if ( (__int64 **)v32[1] != &v32 )
      goto LABEL_58;
    v23 = (__int64 *)*v32;
    if ( *(__int64 **)(*v32 + 8) != v32 )
      goto LABEL_58;
    v32 = (__int64 *)*v32;
    v23[1] = (__int64)&v32;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v24 )
    {
      v25 = *(void (__fastcall **)(__int64, __int64 *))(v24 + 24);
      if ( v25 )
        v25(v24, v22);
    }
    v26 = (struct _MCGEN_TRACE_CONTEXT *)*((unsigned __int8 *)v22 + 60);
    v27 = *((unsigned __int8 *)v22 + 60) - 1;
    if ( *((_BYTE *)v22 + 60) == 1 )
    {
      v28 = 0;
    }
    else if ( *((_BYTE *)v22 + 60) == 25 )
    {
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a1 + 16),
        v27,
        7,
        50,
        (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
        (char)v22,
        (unsigned __int8)HIBYTE(*((_WORD *)v22 + 18)) >> 2);
      LOBYTE(v26) = *((_BYTE *)v22 + 60);
      v28 = 2;
    }
    else
    {
      v28 = 1;
    }
    if ( (_BYTE)v26 == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
      {
        LOBYTE(v31) = 1;
        LODWORD(v30) = v28;
        McTemplateK0ppb16qu(
          v26,
          &USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v21,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          v22,
          v22 + 3,
          v30,
          v31);
      }
    }
    else
    {
      Etw_CommandCompleteError(v26, a1, v22, v28);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22[5])(v22, v28, a2);
  }
}
