/*
 * XREFs of PnpInsertEventInQueue @ 0x140669AA0
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140145348 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171798 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140172854 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140669C00 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1406FF290 (PnpSetPlugPlayEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x140731324 (PnpSetTargetDeviceRemove.c)
 *     PnpSetDeviceClassChange @ 0x140732320 (PnpSetDeviceClassChange.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14073B07C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetBlockedDriverEvent @ 0x14086DC08 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14086DC78 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14086DD84 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14086DE20 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14086DED4 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140099F60 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoGetActivityIdThread @ 0x140099FC0 (IoGetActivityIdThread.c)
 *     McTemplateK0z @ 0x14029EB1C (McTemplateK0z.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  GUID *ActivityIdThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  GUID v14; // [rsp+20h] [rbp-28h]

  v14 = NullGuid;
  v2 = 0;
  PoolWithTag = 0LL;
  ActivityIdThread = (GUID *)IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = *ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$9424C633A3F015B2949C47ACD1C6BB49::$C9A5EC8C1EDA84B9BBBFFDE0BE1813B0::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$9424C633A3F015B2949C47ACD1C6BB49::$C9A5EC8C1EDA84B9BBBFFDE0BE1813B0::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (byte_14042BDBB & 8) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_21;
    v11 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_21:
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      McTemplateK0z(v5, &KMPnPEvt_DeviceRemoval_Queue, v6, *(const wchar_t **)(v13 + 48));
    }
  }
  ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !PnpNotificationInProgress )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4C706E50u);
    if ( PoolWithTag )
    {
      PnpNotificationInProgress = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v7 = PnpDeviceEventList + 120;
  v8 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v8 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v7 + 8) = a1;
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( PoolWithTag )
  {
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v2;
}
