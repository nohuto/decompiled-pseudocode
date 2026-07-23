/*
 * XREFs of PnpDeviceEventWorker @ 0x14058CBC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireGuardedMutex @ 0x140005320 (KeAcquireGuardedMutex.c)
 *     PnpFreeWatchdog @ 0x140005AF8 (PnpFreeWatchdog.c)
 *     PnpDisablePnpEventWorkerWatchdog @ 0x140005B14 (PnpDisablePnpEventWorkerWatchdog.c)
 *     PnpEnablePnpEventWorkerWatchdog @ 0x140005BDC (PnpEnablePnpEventWorkerWatchdog.c)
 *     PnpAllocateWatchdog @ 0x140005D1C (PnpAllocateWatchdog.c)
 *     KeReadStateSemaphore @ 0x140005D60 (KeReadStateSemaphore.c)
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     IoSetActivityIdThread @ 0x140006780 (IoSetActivityIdThread.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpProcessDeferredRegistrations @ 0x14058CF08 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x14058CFC0 (PnpCompleteDeviceEvent.c)
 *     PnpProcessCustomDeviceEvent @ 0x14058F8E0 (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406EC360 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x14070B7F4 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x140826EE4 (PnpNotifyHwProfileChange.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // bp
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  void **v7; // rsi
  __int64 v8; // rax
  int v9; // edi
  PVOID Watchdog; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  void **v15; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF

  PnpDeviceEventThread = (__int64)KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    KeAcquireGuardedMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    PnpNotificationInProgress = 0;
    KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
    PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = (_QWORD *)(PnpDeviceEventList + 120);
    v5 = *(_QWORD *)(PnpDeviceEventList + 120);
    if ( v5 == PnpDeviceEventList + 120 )
      break;
    if ( *(_QWORD **)(v5 + 8) != v4 || (v6 = *(_QWORD *)v5, *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    v7 = (void **)v5;
    v15 = (void **)v5;
    if ( *(_QWORD *)&NullGuid.Data1 != *(_QWORD *)(v5 + 88) || *(_QWORD *)NullGuid.Data4 != *(_QWORD *)(v5 + 96) )
    {
      v17 = *(_OWORD *)(v5 + 88);
      IoSetActivityIdThread(&v17);
      v2 = 1;
    }
    v8 = *(_QWORD *)(v5 + 152);
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( KeReadStateSemaphore(&PnpShutdownEvent) )
    {
      v7 = v15;
      if ( !_InterlockedCompareExchange64(&PnpDeviceActionThread, 0LL, 0LL) )
        v9 = -1073741431;
    }
    if ( v9 < 0 )
      goto LABEL_38;
    Watchdog = PnpAllocateWatchdog();
    *(_QWORD *)(v5 + 104) = Watchdog;
    if ( Watchdog )
      PnpEnablePnpEventWorkerWatchdog(v5);
    v11 = *(_DWORD *)(v5 + 128);
    if ( v11 > 4 )
    {
      if ( v11 >= 6 )
      {
        if ( v11 <= 8 )
          goto LABEL_38;
        if ( v11 == 9 || v11 == 10 || v11 == 11 )
        {
          v9 = PiUEventNotifyUserMode(v5);
          goto LABEL_38;
        }
      }
LABEL_37:
      v9 = -1073741823;
LABEL_38:
      if ( v9 == 259 )
        goto LABEL_42;
      goto LABEL_39;
    }
    if ( v11 != 4 )
    {
      if ( !v11 )
      {
        v9 = PiUEventNotifyUserMode(v5);
        if ( v9 >= 0 )
          PnpNotifyHwProfileChange((void *)(v5 + 112));
        goto LABEL_38;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v14 = PnpProcessTargetDeviceEvent(&v15);
        goto LABEL_25;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          goto LABEL_37;
        v14 = PnpProcessCustomDeviceEvent(&v15);
LABEL_25:
        v7 = v15;
        v9 = v14;
        goto LABEL_38;
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 176));
      PnpNotifyDeviceClassChange(v5 + 112, v5 + 160, &DestinationString);
    }
    PiUEventNotifyUserMode(v5);
LABEL_39:
    if ( v7[13] )
    {
      PnpDisablePnpEventWorkerWatchdog((__int64)v7);
      PnpFreeWatchdog(v7[13]);
      v7[13] = 0LL;
    }
    PnpCompleteDeviceEvent(v7);
LABEL_42:
    PnpProcessDeferredRegistrations();
    if ( v2 )
      IoSetActivityIdThread(0LL);
  }
  KeAcquireGuardedMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  PnpNotificationInProgress = 0;
  PnpProcessDeferredRegistrations();
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
