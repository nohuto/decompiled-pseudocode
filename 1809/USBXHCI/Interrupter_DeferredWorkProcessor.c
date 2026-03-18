/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x1C001B0B0
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001BFF0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C001C130 (Interrupter_WdfEvtInterruptWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x1C0002E7C (WPP_RECORDER_SF_ddddidLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0007C24 (Command_HandleCommandCompletionEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0012590 (WPP_RECORDER_SF_qdd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0012A94 (WPP_RECORDER_SF_qq.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C001B040 (Interrupter_DeferToDpcOrWorkItem.c)
 *     Interrupter_UpdateERDP @ 0x1C001BDE4 (Interrupter_UpdateERDP.c)
 *     McTemplateK0q @ 0x1C001C188 (McTemplateK0q.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E48C (RootHub_HandlePortStatusChangeEvent.c)
 *     TR_TransferEventHandler @ 0x1C002516C (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C0034AC8 (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_TransferEventHandler @ 0x1C0036FF0 (UsbDevice_TransferEventHandler.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  ULONG v8; // r13d
  KIRQL v9; // al
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r14d
  ULONG v14; // r12d
  __m128i *v15; // rdi
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  int v20; // r8d
  __int64 v21; // rax
  unsigned __int32 v22; // r8d
  __int64 v23; // rcx
  unsigned __int32 v24; // edx
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int16 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  KIRQL v34; // di
  struct _IO_WORKITEM *v35; // rcx
  KIRQL v36; // al
  __int64 v37; // rcx
  KIRQL v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+20h] [rbp-79h]
  __int64 v43; // [rsp+28h] [rbp-71h]
  __int64 v44; // [rsp+30h] [rbp-69h]
  __m128i v46; // [rsp+78h] [rbp-21h] BYREF
  __int64 v47; // [rsp+88h] [rbp-11h]
  __int64 v48; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v48 = a1;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F2E8);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 136);
  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v6 + 72),
      5u,
      9u,
      0x28u,
      (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
      a1,
      a2);
  ++*(_DWORD *)(v5 + 44);
  if ( *(_DWORD *)(v5 + 32) )
    v47 = 0LL;
  else
    v47 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1,
            off_1C004F158);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
  v10 = *(_DWORD *)(v5 + 96);
  if ( (v10 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v9);
    ++*(_DWORD *)(v5 + 68);
    return;
  }
  if ( (v10 & 0x10) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v9);
    ++*(_DWORD *)(v5 + 72);
    return;
  }
  *(_DWORD *)(v5 + 96) = v10 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v9);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q(v11, &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V1, v12, *(unsigned int *)(v5 + 32));
  v13 = 0;
  v14 = 0;
  v15 = (__m128i *)(*(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124));
  while ( 1 )
  {
    if ( (v15->m128i_i32[3] & 1) != *(_DWORD *)(v5 + 120) )
    {
      v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
      *(_DWORD *)(v5 + 96) &= ~8u;
      v34 = v38;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0q(v40, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v41, *(unsigned int *)(v5 + 32));
      LOBYTE(v39) = 1;
      Interrupter_UpdateERDP(v5, v39);
      goto LABEL_104;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v44) = *(_DWORD *)(v5 + 124);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        5u,
        9u,
        0x29u,
        (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
        v15,
        v44);
    }
    if ( (v13 & 0x3F) != 0 )
      goto LABEL_25;
    if ( KeGetCurrentIrql() < 2u )
      goto LABEL_25;
    v16 = KeQueryDpcWatchdogInformation(&WatchdogInformation);
    v18 = 0LL;
    if ( v16 < 0 )
      goto LABEL_25;
    if ( !v14 )
    {
      v17 = 95 * WatchdogInformation.DpcTimeLimit;
      v14 = (unsigned int)v17 / 0x64;
    }
    if ( !v8 )
    {
      v17 = 25 * WatchdogInformation.DpcWatchdogLimit;
      v8 = (unsigned int)v17 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v14 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v8 )
    {
      ++*(_DWORD *)(v5 + 84);
      goto LABEL_90;
    }
LABEL_25:
    v46 = *v15;
    v19 = HIDWORD(_mm_srli_si128(v46, 8).m128i_u64[0]);
    WPP_RECORDER_SF_ddddidLL(
      *(_QWORD *)(v5 + 16),
      ((unsigned int)v19 >> 2) & 1,
      _mm_cvtsi128_si32(_mm_srli_si128(v46, 8)) & 0xFFFFFF,
      (unsigned __int16)v19 >> 10,
      v42);
    ++*(_DWORD *)(v5 + 124);
    ++*(_DWORD *)(v5 + 48);
    if ( *(_DWORD *)(v5 + 124) == *(_DWORD *)(v5 + 116) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          5u,
          9u,
          0x2Cu,
          (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
      v20 = ++*(_DWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 124) = 0;
      if ( v20 == *(_DWORD *)(v5 + 108) )
      {
        *(_DWORD *)(v5 + 120) = *(_DWORD *)(v5 + 120) != 1;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            5u,
            9u,
            0x2Du,
            (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
        v21 = *(_QWORD *)(v5 + 160);
        *(_DWORD *)(v5 + 128) = 0;
      }
      else
      {
        v21 = **(_QWORD **)(v5 + 144);
      }
      *(_QWORD *)(v5 + 144) = v21;
      *(_QWORD *)(v5 + 136) = *(_QWORD *)(v21 + 16);
    }
    v22 = v46.m128i_u32[2];
    if ( HIBYTE(v46.m128i_i32[2]) == 199 )
    {
      v23 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v23 + 272) & 0x2000LL) != 0 )
      {
        HIDWORD(v43) = HIDWORD(v15);
        WPP_RECORDER_SF_qdd(
          *(_QWORD *)(v23 + 72),
          3u,
          9u,
          0x2Eu,
          (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
        goto LABEL_83;
      }
    }
    v24 = v46.m128i_u32[3];
    v25 = (unsigned __int16)v46.m128i_i16[6] >> 10;
    if ( v25 == 32 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          5u,
          9u,
          0x2Fu,
          (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
        v24 = v46.m128i_u32[3];
        v22 = v46.m128i_u32[2];
      }
      if ( (v24 & 4) != 0
        && (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 272LL) & 0x20000000000000LL) != 0
        && HIBYTE(v22) - 14 <= 1u )
      {
        v24 &= ~4u;
        v46.m128i_i32[3] = v24;
      }
      if ( (v24 & 4) == 0
        || (v46.m128i_i8[0] & 3) == 1
        || (v26 = 0x2000000000LL, (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 272LL) & 0x2000000000LL) != 0) )
      {
        if ( *(_BYTE *)(v7 + 80) )
          v27 = *(_QWORD *)(v7 + 24);
        else
          v27 = *(_QWORD *)(v7 + 72);
        v28 = *(_QWORD *)(v27 + 8 * ((unsigned __int64)v24 >> 24));
        if ( v28 )
        {
          LOBYTE(v27) = a3;
          UsbDevice_TransferEventHandler(v28, &v46, v27);
        }
        else if ( (v46.m128i_i8[0] & 3) != 1 )
        {
          HIDWORD(v43) = HIDWORD(v15);
          WPP_RECORDER_SF_qdd(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            3u,
            9u,
            0x30u,
            (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
        }
      }
      else
      {
        LOBYTE(v26) = a3;
        TR_TransferEventHandler(&v46, 0LL, v26);
      }
      goto LABEL_83;
    }
    if ( v25 == 37 && HIBYTE(v46.m128i_i32[2]) == 21 )
    {
      ++*(_DWORD *)(v5 + 76);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        3u,
        9u,
        0x31u,
        (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
      v29 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v29 + 272) & 0x10000000LL) != 0 )
        Controller_ReportFatalError(v29, 2, 4113, 0LL, 0LL, 0LL);
      goto LABEL_83;
    }
    if ( a3 )
    {
      KeLowerIrql(0);
      v24 = v46.m128i_u32[3];
    }
    if ( *(_DWORD *)(v5 + 32) )
    {
      v30 = *(_QWORD *)(v5 + 8);
      v31 = 50;
      LODWORD(v43) = (unsigned __int16)v24 >> 10;
LABEL_63:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v30 + 72),
        3u,
        9u,
        v31,
        (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
        v43);
      goto LABEL_81;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        5u,
        9u,
        0x33u,
        (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
      v24 = v46.m128i_u32[3];
    }
    switch ( (unsigned __int16)v24 >> 10 )
    {
      case '!':
        goto LABEL_80;
      case '"':
        RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL), &v46);
        goto LABEL_81;
      case '%':
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v47 + 8) + 72LL),
          3u,
          9u,
          0x34u,
          (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
        goto LABEL_81;
      case '&':
        if ( *(_BYTE *)(v7 + 80) )
          v32 = *(_QWORD *)(v7 + 24);
        else
          v32 = *(_QWORD *)(v7 + 72);
        v33 = *(_QWORD *)(v32 + 8 * ((unsigned __int64)v24 >> 24));
        if ( v33 )
          UsbDevice_DeviceNotificationEventHandler(v33, &v46);
        goto LABEL_81;
    }
    if ( (unsigned __int16)v24 >> 10 != 39 )
    {
      if ( (unsigned __int16)v24 >> 10 != 48 )
      {
        v31 = 53;
        LODWORD(v43) = (unsigned __int16)v24 >> 10;
        v30 = *(_QWORD *)(v47 + 8);
        goto LABEL_63;
      }
LABEL_80:
      Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL), (__int64)&v46);
    }
LABEL_81:
    if ( a3 )
      KfRaiseIrql(2u);
LABEL_83:
    v15 = (__m128i *)(*(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124));
    if ( v13 && (v13 & 0x7F) == 0 && (v15->m128i_i32[3] & 1) == *(_DWORD *)(v5 + 120) )
      Interrupter_UpdateERDP(v5, 0LL);
    ++v13;
  }
  ++*(_DWORD *)(v5 + 80);
LABEL_90:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v43) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
      5u,
      9u,
      0x2Au,
      (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
      v43);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q(v17, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v18, *(unsigned int *)(v5 + 32));
  Interrupter_UpdateERDP(v5, 0LL);
  ++*(_DWORD *)(v5 + 56);
  v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
  if ( (*(_DWORD *)(v5 + 96) & 0x12) != 0 )
  {
LABEL_104:
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v34);
    return;
  }
  KeClearEvent((PRKEVENT)(v5 + 176));
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v34);
  v35 = *(struct _IO_WORKITEM **)(v5 + 200);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 320LL) )
  {
    if ( !v35
      || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
            v35,
            Interrupter_IoWorkItemRequeueDpc,
            0LL,
            v5) )
    {
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
      *(_DWORD *)(v5 + 96) &= ~8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v36);
      KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
      v37 = v48;
      ++*(_DWORD *)(v5 + 64);
      Interrupter_DeferToDpcOrWorkItem(v37);
      return;
    }
  }
  else
  {
    IoQueueWorkItemEx(v35, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v5);
  }
  ++*(_DWORD *)(v5 + 60);
}
