/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x1C001E4C4
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C001F550 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C001F690 (Interrupter_WdfEvtInterruptWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x1C000333C (WPP_RECORDER_SF_ddddidLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0009AB8 (Command_HandleCommandCompletionEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014F90 (WPP_RECORDER_SF_qdd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015494 (WPP_RECORDER_SF_qq.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C001E454 (Interrupter_DeferToDpcOrWorkItem.c)
 *     Interrupter_UpdateERDP @ 0x1C001F324 (Interrupter_UpdateERDP.c)
 *     McTemplateK0q @ 0x1C001F6E8 (McTemplateK0q.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0021F30 (RootHub_HandlePortStatusChangeEvent.c)
 *     TR_TransferEventHandler @ 0x1C00298BC (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C0039B78 (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_TransferEventHandler @ 0x1C003C24C (UsbDevice_TransferEventHandler.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  ULONG v8; // r12d
  KIRQL v9; // al
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rdi
  ULONG v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int16 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  KIRQL v32; // di
  struct _IO_WORKITEM *v33; // rcx
  KIRQL v34; // al
  __int64 v35; // rcx
  KIRQL v36; // al
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+20h] [rbp-79h]
  __int64 v41; // [rsp+28h] [rbp-71h]
  __int64 v42; // [rsp+30h] [rbp-69h]
  __int128 v44; // [rsp+78h] [rbp-21h] BYREF
  __int64 v45; // [rsp+88h] [rbp-11h]
  __int64 v46; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v44 = 0uLL;
  v46 = a1;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056310);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 136);
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v6 + 72),
      5u,
      9u,
      0x28u,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      a1,
      a2);
  ++*(_DWORD *)(v5 + 44);
  if ( *(_DWORD *)(v5 + 32) )
    v45 = 0LL;
  else
    v45 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1,
            off_1C0056180);
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
  v14 = *(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124);
  v15 = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v14 + 12) & 1) != *(_DWORD *)(v5 + 120) )
    {
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
      *(_DWORD *)(v5 + 96) &= ~8u;
      v32 = v36;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0q(v38, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v39, *(unsigned int *)(v5 + 32));
      LOBYTE(v37) = 1;
      Interrupter_UpdateERDP(v5, v37);
      goto LABEL_120;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v42) = *(_DWORD *)(v5 + 124);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        5u,
        9u,
        0x29u,
        (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
        v14,
        v42);
    }
    if ( (v13 & 0x3F) == 0 )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( KeGetCurrentIrql() >= 2u && KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0 )
      {
        if ( !v8 )
        {
          v16 = 95 * WatchdogInformation.DpcTimeLimit;
          v8 = (unsigned int)v16 / 0x64;
        }
        if ( !v15 )
        {
          v16 = 25 * WatchdogInformation.DpcWatchdogLimit;
          v15 = (unsigned int)v16 / 0x64;
        }
        if ( WatchdogInformation.DpcTimeCount < v8 )
        {
          ++*(_DWORD *)(v5 + 80);
          goto LABEL_105;
        }
        if ( WatchdogInformation.DpcWatchdogCount < v15 )
          break;
      }
    }
    v44 = *(_OWORD *)v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(
        *(_QWORD *)(v5 + 16),
        (HIDWORD(v44) >> 2) & 1,
        DWORD2(v44) & 0xFFFFFF,
        WORD6(v44) >> 10,
        v40);
    ++*(_DWORD *)(v5 + 124);
    ++*(_DWORD *)(v5 + 48);
    if ( *(_DWORD *)(v5 + 124) == *(_DWORD *)(v5 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          5u,
          9u,
          0x2Cu,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
      v18 = ++*(_DWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 124) = 0;
      if ( v18 == *(_DWORD *)(v5 + 108) )
      {
        *(_DWORD *)(v5 + 120) = *(_DWORD *)(v5 + 120) != 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            5u,
            9u,
            0x2Du,
            (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
        v19 = *(_QWORD *)(v5 + 160);
        *(_DWORD *)(v5 + 128) = 0;
      }
      else
      {
        v19 = **(_QWORD **)(v5 + 144);
      }
      *(_QWORD *)(v5 + 144) = v19;
      *(_QWORD *)(v5 + 136) = *(_QWORD *)(v19 + 16);
    }
    v20 = DWORD2(v44);
    if ( HIBYTE(DWORD2(v44)) == 199 )
    {
      v21 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v21 + 336) & 0x2000LL) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          HIDWORD(v41) = HIDWORD(v14);
          WPP_RECORDER_SF_qdd(
            *(_QWORD *)(v21 + 72),
            3u,
            9u,
            0x2Eu,
            (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
        }
        goto LABEL_98;
      }
    }
    v22 = HIDWORD(v44);
    v23 = WORD6(v44) >> 10;
    if ( v23 == 32 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          5u,
          9u,
          0x2Fu,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
        v22 = HIDWORD(v44);
        v20 = DWORD2(v44);
      }
      if ( (v22 & 4) != 0
        && (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL) & 0x20000000000000LL) != 0
        && HIBYTE(v20) - 14 <= 1u )
      {
        v22 &= ~4u;
        HIDWORD(v44) = v22;
      }
      if ( (v22 & 4) == 0
        || (v44 & 3) == 1
        || (v24 = 0x2000000000LL, (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL) & 0x2000000000LL) != 0) )
      {
        if ( *(_BYTE *)(v7 + 80) )
          v25 = *(_QWORD *)(v7 + 24);
        else
          v25 = *(_QWORD *)(v7 + 72);
        v26 = *(_QWORD *)(v25 + 8 * ((unsigned __int64)v22 >> 24));
        if ( v26 )
        {
          LOBYTE(v25) = a3;
          UsbDevice_TransferEventHandler(v26, &v44, v25);
        }
        else if ( (v44 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          HIDWORD(v41) = HIDWORD(v14);
          WPP_RECORDER_SF_qdd(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            3u,
            9u,
            0x30u,
            (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
        }
      }
      else
      {
        LOBYTE(v24) = a3;
        TR_TransferEventHandler(&v44, 0LL, v24);
      }
      goto LABEL_98;
    }
    if ( v23 == 37 && HIBYTE(DWORD2(v44)) == 21 )
    {
      ++*(_DWORD *)(v5 + 76);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          3u,
          9u,
          0x31u,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
      v27 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v27 + 336) & 0x10000000LL) != 0 )
        Controller_ReportFatalError(v27, 2, 4113, 0LL, 0LL, 0LL);
      goto LABEL_98;
    }
    if ( a3 )
    {
      KeLowerIrql(0);
      v22 = HIDWORD(v44);
    }
    if ( *(_DWORD *)(v5 + 32) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      v28 = *(_QWORD *)(v5 + 8);
      v29 = 50;
      LODWORD(v41) = (unsigned __int16)v22 >> 10;
      goto LABEL_75;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        5u,
        9u,
        0x33u,
        (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
      v22 = HIDWORD(v44);
    }
    switch ( (unsigned __int16)v22 >> 10 )
    {
      case '!':
LABEL_95:
        Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL), (__int64)&v44);
        goto LABEL_96;
      case '"':
        RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL), &v44);
        goto LABEL_96;
      case '%':
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v45 + 8) + 72LL),
            3u,
            9u,
            0x34u,
            (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
        goto LABEL_96;
      case '&':
        if ( *(_BYTE *)(v7 + 80) )
          v30 = *(_QWORD *)(v7 + 24);
        else
          v30 = *(_QWORD *)(v7 + 72);
        v31 = *(_QWORD *)(v30 + 8 * ((unsigned __int64)v22 >> 24));
        if ( v31 )
          UsbDevice_DeviceNotificationEventHandler(v31, &v44);
        goto LABEL_96;
    }
    if ( (unsigned __int16)v22 >> 10 != 39 )
    {
      if ( (unsigned __int16)v22 >> 10 == 48 )
        goto LABEL_95;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = 53;
        LODWORD(v41) = (unsigned __int16)v22 >> 10;
        v28 = *(_QWORD *)(v45 + 8);
LABEL_75:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v28 + 72),
          3u,
          9u,
          v29,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
          v41);
      }
    }
LABEL_96:
    if ( a3 )
      KfRaiseIrql(2u);
LABEL_98:
    v14 = *(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124);
    if ( v13 && (v13 & 0x7F) == 0 && (*(_DWORD *)(v14 + 12) & 1) == *(_DWORD *)(v5 + 120) )
      Interrupter_UpdateERDP(v5, 0LL);
    ++v13;
  }
  ++*(_DWORD *)(v5 + 84);
LABEL_105:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v41) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
      5u,
      9u,
      0x2Au,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      v41);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q(v16, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v17, *(unsigned int *)(v5 + 32));
  Interrupter_UpdateERDP(v5, 0LL);
  ++*(_DWORD *)(v5 + 56);
  v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
  if ( (*(_DWORD *)(v5 + 96) & 0x12) != 0 )
  {
LABEL_120:
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v32);
    return;
  }
  KeClearEvent((PRKEVENT)(v5 + 176));
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v32);
  v33 = *(struct _IO_WORKITEM **)(v5 + 200);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 384LL) )
  {
    if ( !v33
      || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
            v33,
            Interrupter_IoWorkItemRequeueDpc,
            0LL,
            v5) )
    {
      v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
      *(_DWORD *)(v5 + 96) &= ~8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v34);
      KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
      v35 = v46;
      ++*(_DWORD *)(v5 + 64);
      Interrupter_DeferToDpcOrWorkItem(v35);
      return;
    }
  }
  else
  {
    IoQueueWorkItemEx(v33, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v5);
  }
  ++*(_DWORD *)(v5 + 60);
}
