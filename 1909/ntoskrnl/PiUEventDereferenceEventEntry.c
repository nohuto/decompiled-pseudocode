/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1406975B0
 * Callers:
 *     PiUEventDequeuePendingEventWorker @ 0x140697410 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventProcessEventWorker @ 0x140697470 (PiUEventProcessEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x140697610 (PiUEventFreeEventEntry.c)
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
