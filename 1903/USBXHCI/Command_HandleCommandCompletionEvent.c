/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C0009AB8
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qii @ 0x1C00023F0 (WPP_RECORDER_SF_qii.c)
 *     McTemplateK0ppb16qu @ 0x1C0006C24 (McTemplateK0ppb16qu.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0009F60 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_InternalSendCommand @ 0x1C000A23C (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C000B6F4 (WPP_RECORDER_SF_qLLdd.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000C1D0 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C003E2C4 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 **result; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r15
  int v13; // ecx
  __int64 **v14; // rax
  __int64 ****v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 ***v19; // rdi
  __int64 v20; // r8
  __int64 *v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, __int64 *); // rax
  struct _MCGEN_TRACE_CONTEXT *v25; // rcx
  int v26; // edx
  unsigned int v27; // r14d
  int v28; // [rsp+20h] [rbp-40h]
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int64 v30; // [rsp+38h] [rbp-28h]
  __int64 *v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v32; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v32 = &v31;
  v31 = (__int64 *)&v31;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v8 = (__int64 *)(a1 + 80);
  v9 = *(__int64 **)(a1 + 80);
  if ( v9 == (__int64 *)(a1 + 80) )
    goto LABEL_35;
  v6 = *(_QWORD **)a2;
  while ( 1 )
  {
    v12 = XilCommand_GetCommandRingBufferLogicalAddress(a1, v6) + 16LL * *((unsigned int *)v9 + 5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v30 = v10;
        HIDWORD(v29) = HIDWORD(v12);
        WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), v10, v11, v7, v28);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
    }
    v6 = *(_QWORD **)a2;
    if ( *(_QWORD *)a2 == v12 )
      break;
    v9 = (__int64 *)*v9;
    if ( v9 == v8 )
      goto LABEL_35;
  }
  *((_DWORD *)v9 + 4) = 2;
  *((_BYTE *)v9 + 60) = *(_BYTE *)(a2 + 11);
  *((_DWORD *)v9 + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
    *((_BYTE *)v9 + 61) = *(_BYTE *)(a2 + 15);
  if ( (*((_BYTE *)v9 + 62) & 2) != 0 )
    *(_OWORD *)(v9 + 3) = *(_OWORD *)a2;
LABEL_35:
  while ( 1 )
  {
    v19 = (__int64 ***)*v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *((_DWORD *)v19 + 4) != 2 )
    {
      if ( v31 == (__int64 *)&v31 && !*(_BYTE *)(a1 + 120) )
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
    v13 = *(_DWORD *)(a1 + 44) + 1;
    *(_DWORD *)(a1 + 44) = v13;
    if ( v13 == *(_DWORD *)(a1 + 48) )
    {
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v6) = 5;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v6,
          7,
          46,
          (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
          v13,
          *(_DWORD *)(a1 + 40));
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLdd(
          *(_QWORD *)(a1 + 16),
          *(unsigned __int8 *)(a2 + 15),
          *(_DWORD *)(a2 + 12) & 1,
          v7,
          v28,
          (char)v19,
          (unsigned __int16)*((_DWORD *)v19 + 9) >> 10,
          *(_BYTE *)(a2 + 11),
          *(_BYTE *)(a2 + 12) & 1,
          *(_BYTE *)(a2 + 15));
    }
    v14 = *v19;
    if ( (*v19)[1] != (__int64 *)v19
      || (v15 = (__int64 ****)v19[1], *v15 != v19)
      || (*v15 = (__int64 ***)v14, v14[1] = (__int64 *)v15, v16 = v32, *v32 != (__int64 *)&v31) )
    {
LABEL_67:
      __fastfail(3u);
    }
    v19[1] = v32;
    *v19 = &v31;
    *v16 = v19;
    v17 = (_QWORD *)(a1 + 96);
    v6 = *(_QWORD **)(a1 + 96);
    v32 = (__int64 **)v19;
    if ( v6 != (_QWORD *)(a1 + 96) )
    {
      if ( (_QWORD *)v6[1] != v17 )
        goto LABEL_67;
      v18 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_67;
      *v17 = v18;
      *(_QWORD *)(v18 + 8) = v17;
      Command_InternalSendCommand(a1);
    }
  }
  if ( (__int64 *)*v8 == v8 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x31u, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
    v21 = v31;
    result = &v31;
    if ( v31 == (__int64 *)&v31 )
      return result;
    if ( (__int64 **)v31[1] != &v31 )
      goto LABEL_67;
    v22 = (__int64 *)*v31;
    if ( *(__int64 **)(*v31 + 8) != v31 )
      goto LABEL_67;
    v31 = (__int64 *)*v31;
    v22[1] = (__int64)&v31;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v23 )
    {
      v24 = *(void (__fastcall **)(__int64, __int64 *))(v23 + 24);
      if ( v24 )
        v24(v23, v21);
    }
    v25 = (struct _MCGEN_TRACE_CONTEXT *)*((unsigned __int8 *)v21 + 60);
    v26 = *((unsigned __int8 *)v21 + 60) - 1;
    if ( *((_BYTE *)v21 + 60) == 1 )
    {
      v27 = 0;
    }
    else if ( *((_BYTE *)v21 + 60) == 25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 4;
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(a1 + 16),
          v26,
          7,
          50,
          (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
          (char)v21,
          (unsigned __int8)HIBYTE(*((_WORD *)v21 + 18)) >> 2);
        LOBYTE(v25) = *((_BYTE *)v21 + 60);
      }
      v27 = 2;
    }
    else
    {
      v27 = 1;
    }
    if ( (_BYTE)v25 == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
      {
        LOBYTE(v30) = 1;
        LODWORD(v29) = v27;
        McTemplateK0ppb16qu(
          v25,
          &USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v20,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          v21,
          v21 + 3,
          v29,
          v30);
      }
    }
    else
    {
      Etw_CommandCompleteError(v25, a1, v21, v27);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21[5])(v21, v27, a2);
  }
}
