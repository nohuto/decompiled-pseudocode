/*
 * XREFs of PoBroadcastSystemState @ 0x140597FCC
 * Callers:
 *     PopSetDevicesSystemState @ 0x140596D38 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x1405AA000 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1405AAB40 (PnprWakeDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x1408A43B4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408A4498 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopFxActivateDevicesForSx @ 0x14015E790 (PopFxActivateDevicesForSx.c)
 *     PopFxIdleDevicesFromSx @ 0x14015E864 (PopFxIdleDevicesFromSx.c)
 *     PopWakeDeviceList @ 0x14015EEC4 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14015F0B0 (PopSleepDeviceList.c)
 *     PopMapInternalActionToIrpAction @ 0x14015F2E4 (PopMapInternalActionToIrpAction.c)
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140596190 (PopVerifierFlushMemoryBeforeSleep.c)
 *     PopBootLoaderSiData @ 0x1405961D8 (PopBootLoaderSiData.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PopDiagTraceDevicesLevel @ 0x1405984EC (PopDiagTraceDevicesLevel.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     PopSetupSleepNotifies @ 0x14059AD40 (PopSetupSleepNotifies.c)
 *     MmShutdownSystem @ 0x1405ABEB0 (MmShutdownSystem.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1407270F4 (WmiAcquireSmbiosLockExclusive.c)
 *     PopUpdateSmbiosData @ 0x140727124 (PopUpdateSmbiosData.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x140727174 (WmiReleaseSmbiosLockExclusive.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1407271A0 (PopDiagTraceDevicesWakeEnd.c)
 *     EmPowerPagingEnabled @ 0x140728378 (EmPowerPagingEnabled.c)
 *     PopDiagTraceDevicesSuspend @ 0x14072840C (PopDiagTraceDevicesSuspend.c)
 *     IoNotifyPowerOperationVetoed @ 0x14085F7C8 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x14089CFBC (ObShutdownSystem.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408A3F98 (PopDirectedDripsNotifyTransitionFailed.c)
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // r15d
  int v11; // r15d
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // r12
  _DWORD *v20; // r15
  __int64 v21; // r8
  __int64 v23; // rcx
  int v24; // esi
  _DWORD *v25; // r14
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  int v38; // [rsp+30h] [rbp-50h]
  __int64 v39; // [rsp+38h] [rbp-48h] BYREF
  int v40; // [rsp+40h] [rbp-40h] BYREF
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-20h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_140442F70;
  *(_BYTE *)qword_140442F70 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v6 + 112) = 0;
  *((_QWORD *)v6 + 57) = 0LL;
  *(_WORD *)(v6 + 465) = 0;
  v6[467] = 0;
  v6[464] = v4;
  HIDWORD(PopCurrentBroadcast) = 0;
  v7 = (*(_DWORD *)a1 & 0xF) << 16;
  HIDWORD(PopCurrentBroadcast) = v7;
  if ( v4 )
  {
    v29 = v7 | 0x1100;
  }
  else
  {
    HIDWORD(PopCurrentBroadcast) = v7 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v8 = HIDWORD(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    HIDWORD(PopCurrentBroadcast) = v8;
    if ( *(_DWORD *)(a1 + 16) != 5 )
      goto LABEL_3;
    v29 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v8;
  }
  HIDWORD(PopCurrentBroadcast) = v29;
LABEL_3:
  v9 = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  LODWORD(qword_140442F68) = v9;
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v39 = *((unsigned int *)v6 + 1);
    BYTE6(v39) = *(_BYTE *)(a1 + 26);
    BYTE5(v39) = *(_BYTE *)(a1 + 24);
    v42[0] = &v39;
    BYTE4(v39) = v4;
    v42[1] = 8LL;
    EtwTraceKernelEvent((__int64)v42, 1u, 0x80008000, 0x1224u, 0x401802u);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 && (*(_DWORD *)(a1 + 20) & 0x4000000) == 0 )
    v6[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[467] = 1;
  v10 = *(_DWORD *)(a1 + 20);
  if ( (v10 & 0x8000000) != 0 )
  {
    HIDWORD(PopCurrentBroadcast) |= 0x200000u;
    v10 = *(_DWORD *)(a1 + 20);
  }
  v11 = v10 & 0x4000000;
  v38 = v11;
  if ( v11 )
    HIDWORD(PopCurrentBroadcast) |= 0x800000u;
  v12 = 4;
  if ( !v4 )
  {
    if ( *((int *)v6 + 112) < 0 )
    {
LABEL_34:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 112) = -1073741823;
      }
      goto LABEL_35;
    }
    PopSetupSleepNotifies(v6);
    LOBYTE(v13) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v13, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v14 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v14 = 14LL;
    PopCheckpointSystemSleep(v14);
    v17 = *(_DWORD *)(a1 + 16);
    if ( v17 == 4 && (PopShutdownPowerOffPolicy || *(_QWORD *)&qword_140442FF0) )
    {
      v18 = 4LL;
    }
    else
    {
      v18 = 0LL;
      if ( (unsigned int)(v17 - 2) <= 1 && *v6 == 2 )
        PopFxActivateDevicesForSx(1u);
    }
    v19 = 4LL;
    v20 = v6 + 352;
    while ( 1 )
    {
      if ( v12 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v38 )
      {
        if ( dword_140442FE8 == 5 )
          WmiAcquireSmbiosLockExclusive();
        EmPowerPagingEnabled(0LL);
        PopVerifierFlushMemoryBeforeSleep();
        _InterlockedExchange(&PopPagingEnabled, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          IoConfigureCrashDump(0, 1);
          if ( (PopShutdownCleanly & 0x10) != 0 )
            ObShutdownSystem(1LL);
          MmShutdownSystem(1LL);
        }
        else
        {
          LOBYTE(v23) = 1;
          ExAcquireTimeRefreshLock(v23);
          v6[468] = 1;
        }
      }
      LOBYTE(v15) = *v6;
      LOBYTE(v16) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v12, 0LL, v15, v16);
      if ( *v20 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        PopSleepDeviceList((__int64)v6, (__int64)&v6[64 * v12 + 64 + 8 * v12]);
      }
      LOBYTE(v21) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v12, 0LL, v21, 0LL);
      if ( *((int *)v6 + 112) < 0 )
        break;
      --v12;
      --v19;
      v20 -= 18;
      if ( v19 < v18 )
        goto LABEL_29;
    }
    v34 = *((_QWORD *)v6 + 57);
    v4 = 1;
    if ( v34 && *(_DWORD *)(a1 + 12) == 1 )
    {
      v37 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
      if ( v37 == 7 )
      {
        v36 = **((_QWORD **)v6 + 7);
      }
      else
      {
        v34 = v35;
        if ( *(int *)(a1 + 20) < 0 )
          goto LABEL_93;
      }
      IoNotifyPowerOperationVetoed(v37, v36, v35);
      v34 = *((_QWORD *)v6 + 57);
    }
LABEL_93:
    PopDirectedDripsNotifyTransitionFailed(v34);
LABEL_29:
    v11 = v38;
    if ( *v6 == 2 && v38 )
      PopFxIdleDevicesFromSx();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12LL);
    goto LABEL_34;
  }
LABEL_35:
  v6[464] = v4;
  if ( v4 )
  {
    v6[466] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) != 2
      || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
          qword_140443498 = KeQueryPerformanceCounter(0LL).QuadPart,
          *v6 == 2) )
    {
      if ( v11 )
        PopFxActivateDevicesForSx(1u);
    }
    v24 = 0;
    v25 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v24 )
      {
        if ( byte_1404433C0 )
          qword_140443660 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_140467D68 )
        {
          BgDisplayFade();
          byte_140467E3D = 0;
          byte_140467E3C = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v24, 1LL, a3, a4);
      if ( v25[1] < *v25 )
        PopWakeDeviceList(v6, (__int64)&v6[64 * v24 + 64 + 8 * v24]);
      LOBYTE(v26) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v24, 1LL, v26, 0LL);
      if ( v24 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v11 )
      {
        if ( v6[468] )
        {
          v6[468] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          if ( qword_140443000 )
          {
            v30 = *(_QWORD *)(qword_140443000 + 216);
            if ( v30 )
              PopBootLoaderSiData(v30);
          }
          v31 = *(_QWORD *)(qword_140443000 + 200);
          v32 = *(_QWORD *)(v31 + 968);
          v33 = *(unsigned int *)(v31 + 976);
          LOBYTE(v27) = *(_BYTE *)(v31 + 981);
          LOBYTE(v31) = *(_BYTE *)(v31 + 980);
          PopUpdateSmbiosData(v31, v27, v33, v32);
        }
        if ( dword_140442FE8 == 5 )
          WmiReleaseSmbiosLockExclusive();
        LOBYTE(v28) = 1;
        EmPowerPagingEnabled(v28);
        _InterlockedExchange(&PopPagingEnabled, 1);
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v24;
      v25 += 18;
    }
    while ( v24 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_1404434A0 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceDevicesWakeEnd();
      PopCheckpointSystemSleep(36LL);
      PopHandleWakeSources();
      if ( (PopDebugFlags & 8) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
      }
    }
    *v6 = *(_BYTE *)(a1 + 26);
    *((_DWORD *)v6 + 1) = *(_DWORD *)(a1 + 4);
  }
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v40 = *((_DWORD *)v6 + 112);
    v43[1] = 4LL;
    v43[0] = &v40;
    EtwTraceKernelEvent((__int64)v43, 1u, 0x80008000, 0x1225u, 0x401802u);
  }
  HIDWORD(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 112);
}
