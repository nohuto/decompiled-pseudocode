/*
 * XREFs of PiUEventReferenceEventEntry @ 0x140697C88
 * Callers:
 *     PiUEventNotifyClient @ 0x140697B04 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rcx
  unsigned int v3; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = *(struct _FAST_MUTEX **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v3;
  KeReleaseGuardedMutex(v2);
  return v3;
}
