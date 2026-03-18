/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x14066A6E0
 * Callers:
 *     PiUEventDequeuePendingEventWorker @ 0x14066A544 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventProcessEventWorker @ 0x14066A5A0 (PiUEventProcessEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x14066BB20 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x14066A740 (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(PVOID P)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
  v2 = --*((_DWORD *)P + 14);
  if ( *((_BYTE *)P + 68) && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
  if ( !v2 )
    PiUEventFreeEventEntry(P);
  return v2;
}
