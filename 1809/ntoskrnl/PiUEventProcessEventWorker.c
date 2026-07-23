/*
 * XREFs of PiUEventProcessEventWorker @ 0x14058F940
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x14058FAD8 (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058FB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140590668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140700174 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14070FF04 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1407112EC (PiUEventNotifyDeviceInterfaceChange.c)
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
