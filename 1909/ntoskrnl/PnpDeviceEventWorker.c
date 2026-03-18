/*
 * XREFs of PnpDeviceEventWorker @ 0x140699360
 * Callers:
 *     <none>
 * Callees:
 *     IoSetActivityIdThread @ 0x140001C20 (IoSetActivityIdThread.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     PnpEnableWatchdog @ 0x1400EEF6C (PnpEnableWatchdog.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     PnpDisableWatchdog @ 0x1400EFC58 (PnpDisableWatchdog.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpProcessCustomDeviceEvent @ 0x1406971FC (PnpProcessCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 *     PnpProcessDeferredRegistrations @ 0x140699710 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x1406997C8 (PnpCompleteDeviceEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407011A4 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x140737AD8 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // r14
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  _QWORD *v15; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0uLL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
    v5 = *(_QWORD **)(PnpDeviceEventList + 120);
    if ( v5 == (_QWORD *)(PnpDeviceEventList + 120) )
      break;
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v5[1] = v5;
    *v5 = v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    v7 = v5;
    v15 = v5;
    v8 = *(_QWORD *)&NullGuid.Data1 - v5[11];
    if ( *(_QWORD *)&NullGuid.Data1 == v5[11] )
      v8 = *(_QWORD *)NullGuid.Data4 - v5[12];
    if ( v8 )
    {
      v17 = *(_OWORD *)(v5 + 11);
      IoSetActivityIdThread(&v17);
      v2 = 1;
    }
    v9 = v5[19];
    v10 = 0;
    if ( v9 && !*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) )
      v10 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState )
    {
      v7 = v15;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
        v10 = -1073741431;
    }
    if ( v10 < 0 )
      goto LABEL_23;
    PnpEnableWatchdog(v5, 1u);
    v11 = *((_DWORD *)v5 + 32);
    if ( v11 > 4 )
    {
      if ( v11 < 6 )
        goto LABEL_41;
      if ( v11 > 8 )
      {
        if ( v11 == 11 || v11 == 9 || v11 == 10 )
          v10 = PiUEventNotifyUserMode((__int64)v5);
        else
LABEL_41:
          v10 = -1073741823;
      }
LABEL_23:
      if ( v10 == 259 )
        goto LABEL_27;
      goto LABEL_24;
    }
    if ( v11 != 4 )
    {
      if ( !v11 )
      {
        v10 = PiUEventNotifyUserMode((__int64)v5);
        if ( v10 >= 0 )
          PnpNotifyHwProfileChange(v5 + 14);
        goto LABEL_23;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v14 = PnpProcessTargetDeviceEvent(&v15);
LABEL_22:
        v7 = v15;
        v10 = v14;
        goto LABEL_23;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          goto LABEL_41;
        v14 = PnpProcessCustomDeviceEvent((__int64 *)&v15);
        goto LABEL_22;
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 88);
      PnpNotifyDeviceClassChange(v5 + 14, v5 + 20, &DestinationString);
    }
    PiUEventNotifyUserMode((__int64)v5);
LABEL_24:
    if ( v7[13] )
    {
      PnpDisableWatchdog(v7, 1);
      v7[13] = 0LL;
    }
    PnpCompleteDeviceEvent(v7);
LABEL_27:
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
