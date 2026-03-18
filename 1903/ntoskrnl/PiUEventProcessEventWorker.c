/*
 * XREFs of PiUEventProcessEventWorker @ 0x14066A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x14066A6E0 (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14066A7A0 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14066C200 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071B2C8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1407321EC (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073AD64 (PiUEventNotifyDeviceInstancePropertyChange.c)
 */

void __fastcall PiUEventProcessEventWorker(PVOID P)
{
  int v1; // edi
  _DWORD *v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v3 = PiUEventUsermodeEventQueue;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    v4 = v3[22];
    switch ( v4 )
    {
      case 3:
      case 1:
        v5 = PiUEventNotifyTargetDeviceChange(v3);
        break;
      case 2:
        v5 = PiUEventNotifyDeviceInterfaceChange(v3);
        break;
      case 4:
        goto LABEL_18;
      case 9:
        v5 = PiUEventNotifyDeviceInstancePropertyChange(v3);
        break;
      default:
        if ( v4 <= 9 || v4 > 11 )
        {
LABEL_5:
          PiUEventProcessBroadcastNotifications(v3);
          goto LABEL_6;
        }
LABEL_18:
        v5 = PiUEventNotifyDeviceInstanceChange(v3);
        break;
    }
    if ( v5 >= 0 )
      goto LABEL_5;
LABEL_6:
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    if ( *((PVOID **)PiUEventUsermodeEventQueue + 1) != &PiUEventUsermodeEventQueue
      || (v6 = *(_QWORD *)PiUEventUsermodeEventQueue,
          *(PVOID *)(*(_QWORD *)PiUEventUsermodeEventQueue + 8LL) != PiUEventUsermodeEventQueue) )
    {
      __fastfail(3u);
    }
    PiUEventUsermodeEventQueue = *(PVOID *)PiUEventUsermodeEventQueue;
    *(_QWORD *)(v6 + 8) = &PiUEventUsermodeEventQueue;
    if ( PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue )
      v1 = 1;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    PiUEventDereferenceEventEntry(v3);
  }
  while ( !v1 );
  ExFreePoolWithTag(P, 0x59706E50u);
}
