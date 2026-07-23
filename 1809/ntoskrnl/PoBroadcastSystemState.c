/*
 * XREFs of PoBroadcastSystemState @ 0x1405691E0
 * Callers:
 *     PopSetDevicesSystemState @ 0x140569154 (PopSetDevicesSystemState.c)
 *     PnprQuiesceDevices @ 0x14057B1E0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x14057BCE0 (PnprWakeDevices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PopFxActivateDevicesForSx @ 0x140142E40 (PopFxActivateDevicesForSx.c)
 *     PopFxIdleDevicesFromSx @ 0x140142F0C (PopFxIdleDevicesFromSx.c)
 *     PopMapInternalActionToIrpAction @ 0x140143558 (PopMapInternalActionToIrpAction.c)
 *     IoConfigureCrashDump @ 0x1401885EC (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x1405662FC (PopVerifierFlushMemoryBeforeSleep.c)
 *     PopBootLoaderSiData @ 0x1405674E4 (PopBootLoaderSiData.c)
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 *     PopSetupSleepNotifies @ 0x140567C48 (PopSetupSleepNotifies.c)
 *     PopDiagTraceDevicesLevel @ 0x140569874 (PopDiagTraceDevicesLevel.c)
 *     PopWakeDeviceList @ 0x140569954 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140569AB8 (PopSleepDeviceList.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     MmShutdownSystem @ 0x14057CEF0 (MmShutdownSystem.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BFE98 (ExReleaseTimeRefreshLock.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x1406DEF94 (WmiAcquireSmbiosLockExclusive.c)
 *     PopUpdateSmbiosData @ 0x1406DEFC4 (PopUpdateSmbiosData.c)
 *     WmiReleaseSmbiosLockExclusive @ 0x1406DF014 (WmiReleaseSmbiosLockExclusive.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1406DF040 (PopDiagTraceDevicesWakeEnd.c)
 *     PopDiagTraceDevicesSuspend @ 0x1406E00DC (PopDiagTraceDevicesSuspend.c)
 *     EmPowerPagingEnabled @ 0x1406E01A8 (EmPowerPagingEnabled.c)
 *     IoNotifyPowerOperationVetoed @ 0x140826E80 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x140861F6C (ObShutdownSystem.c)
 *     BgDisplayFade @ 0x14094F608 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char *v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // r15d
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r13
  int v19; // esi
  __int64 v20; // r12
  _DWORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // esi
  _DWORD *v28; // r14
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  int v37; // [rsp+30h] [rbp-50h]
  int v38; // [rsp+38h] [rbp-48h] BYREF
  char v39; // [rsp+3Ch] [rbp-44h]
  char v40; // [rsp+3Dh] [rbp-43h]
  char v41; // [rsp+3Eh] [rbp-42h]
  int v42; // [rsp+40h] [rbp-40h] BYREF
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v44[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v45[2]; // [rsp+60h] [rbp-20h] BYREF

  v4 = *(_BYTE *)(a1 + 25);
  v6 = (char *)qword_140418730;
  *(_BYTE *)qword_140418730 = *(_BYTE *)(a1 + 26);
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
    v9 = v7 | 0x1100;
  }
  else
  {
    HIDWORD(PopCurrentBroadcast) = v7 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v8 = HIDWORD(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xF) << 12);
    HIDWORD(PopCurrentBroadcast) = v8;
    if ( *(_DWORD *)(a1 + 16) != 4 )
      goto LABEL_6;
    v9 = (PopKsrPrepared != 0 ? 0x400000 : 0) | v8;
  }
  HIDWORD(PopCurrentBroadcast) = v9;
LABEL_6:
  v10 = *(_DWORD *)(a1 + 16);
  LOBYTE(PopCurrentBroadcast) = 1;
  LODWORD(qword_140418728) = v10;
  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v38 = *((_DWORD *)v6 + 1);
    v41 = *(_BYTE *)(a1 + 26);
    v40 = *(_BYTE *)(a1 + 24);
    v44[0] = &v38;
    v39 = v4;
    v44[1] = 8LL;
    EtwTraceKernelEvent((__int64)v44, 1u, 0x80008000, 0x1224u, 0x401802u);
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    v6[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v6[467] = 1;
  v11 = *(_DWORD *)(a1 + 20);
  if ( (v11 & 0x8000000) != 0 )
  {
    HIDWORD(PopCurrentBroadcast) |= 0x200000u;
    v11 = *(_DWORD *)(a1 + 20);
  }
  v12 = v11 & 0x4000000;
  v37 = v12;
  if ( v12 )
    HIDWORD(PopCurrentBroadcast) |= 0x800000u;
  if ( !v4 )
  {
    if ( *((int *)v6 + 112) < 0 )
    {
LABEL_57:
      if ( (PopSimulate & 0x20000) != 0 && *(_BYTE *)(a1 + 26) == 2 )
      {
        DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
        v4 = 1;
        *((_DWORD *)v6 + 112) = -1073741823;
      }
      goto LABEL_60;
    }
    PopSetupSleepNotifies((__int64)v6);
    LOBYTE(v13) = *(_BYTE *)(a1 + 26) == 3;
    PopDiagTraceDevicesSuspend(v13, (HIDWORD(PopCurrentBroadcast) >> 8) & 0xF, WORD2(PopCurrentBroadcast) >> 12);
    v14 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v14 = 14LL;
    PopCheckpointSystemSleep(v14);
    v17 = *(_DWORD *)(a1 + 16);
    if ( v17 == 4 && (PopShutdownPowerOffPolicy || qword_1404187D0) )
    {
      v18 = 4LL;
    }
    else
    {
      v18 = 0LL;
      if ( (unsigned int)(v17 - 2) <= 1 && *v6 == 2 )
        PopFxActivateDevicesForSx(1u);
    }
    v19 = 4;
    v20 = 4LL;
    v21 = v6 + 352;
    while ( 1 )
    {
      if ( v19 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v37 )
      {
        if ( dword_1404187C8 == 5 )
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
          LOBYTE(v22) = 1;
          ExAcquireTimeRefreshLock(v22);
          v6[468] = 1;
        }
      }
      LOBYTE(v15) = *v6;
      LOBYTE(v16) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v19, 0LL, v15, v16);
      if ( *v21 )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v6 + 7) = 0LL;
        PopSleepDeviceList(v6, &v6[64 * v19 + 64 + 8 * v19]);
      }
      LOBYTE(v23) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v19, 0LL, v23, 0LL);
      if ( *((int *)v6 + 112) < 0 )
        break;
      --v19;
      --v20;
      v21 -= 18;
      if ( v20 < v18 )
        goto LABEL_52;
    }
    v4 = 1;
    if ( *((_QWORD *)v6 + 57) && *(_DWORD *)(a1 + 12) == 1 )
    {
      v24 = PopMapInternalActionToIrpAction(*(_DWORD *)(a1 + 16), *((_DWORD *)v6 + 1), 0);
      if ( v24 == 7 )
      {
        v25 = **((_QWORD **)v6 + 7);
      }
      else if ( *(int *)(a1 + 20) < 0 )
      {
        goto LABEL_52;
      }
      IoNotifyPowerOperationVetoed(v24, v25, v26);
    }
LABEL_52:
    v12 = v37;
    if ( *v6 == 2 && v37 )
      PopFxIdleDevicesFromSx();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
    if ( *(_BYTE *)(a1 + 26) == 3 )
      PopCheckpointSystemSleep(12LL);
    goto LABEL_57;
  }
LABEL_60:
  v6[464] = v4;
  if ( v4 )
  {
    v6[466] = 1;
    *v6 = 2;
    *((_DWORD *)v6 + 1) = 1;
    if ( *(_BYTE *)(a1 + 26) != 2
      || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
          qword_140418BF8 = KeQueryPerformanceCounter(0LL).QuadPart,
          *v6 == 2) )
    {
      if ( v12 )
        PopFxActivateDevicesForSx(1u);
    }
    v27 = 0;
    v28 = v6 + 64;
    do
    {
      if ( PoResumeFromHibernate && !v27 )
      {
        if ( byte_140418900 )
          qword_140418DC0 = KeQueryPerformanceCounter(0LL).QuadPart;
        if ( byte_14043D5C8 )
        {
          BgDisplayFade();
          byte_14043D6B1 = 0;
          byte_14043D6B0 = 0;
        }
      }
      LOBYTE(a3) = *v6;
      LOBYTE(a4) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v27, 1LL, a3, a4);
      if ( v28[1] < *v28 )
        PopWakeDeviceList(v6, &v6[64 * v27 + 64 + 8 * v27]);
      LOBYTE(v29) = *v6;
      PopDiagTraceDevicesLevel((unsigned int)v27, 1LL, v29, 0LL);
      if ( v27 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v12 )
      {
        if ( v6[468] )
        {
          v6[468] = 0;
          ExReleaseTimeRefreshLock();
        }
        if ( PoResumeFromHibernate )
        {
          if ( BugCheckParameter4 )
          {
            v32 = *(_QWORD *)(BugCheckParameter4 + 216);
            if ( v32 )
              PopBootLoaderSiData(v32);
          }
          v33 = *(_QWORD *)(BugCheckParameter4 + 200);
          v34 = *(_QWORD *)(v33 + 968);
          v35 = *(unsigned int *)(v33 + 976);
          LOBYTE(v30) = *(_BYTE *)(v33 + 981);
          LOBYTE(v33) = *(_BYTE *)(v33 + 980);
          PopUpdateSmbiosData(v33, v30, v35, v34);
        }
        if ( dword_1404187C8 == 5 )
          WmiReleaseSmbiosLockExclusive();
        LOBYTE(v31) = 1;
        EmPowerPagingEnabled(v31);
        _InterlockedExchange(&PopPagingEnabled, 1);
        if ( (PopDebugFlags & 4) != 0 )
        {
          Interval.QuadPart = -50000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
        }
      }
      ++v27;
      v28 += 18;
    }
    while ( v27 <= 4 );
    if ( *(_BYTE *)(a1 + 26) == 2 )
    {
      PopFxIdleDevicesFromSx();
      qword_140418C00 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v42 = *((_DWORD *)v6 + 112);
    v45[1] = 4LL;
    v45[0] = &v42;
    EtwTraceKernelEvent((__int64)v45, 1u, 0x80008000, 0x1225u, 0x401802u);
  }
  HIDWORD(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v6 + 112);
}
