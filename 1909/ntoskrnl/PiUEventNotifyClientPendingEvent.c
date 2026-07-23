/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x140697BE8
 * Callers:
 *     PiUEventHandleGetEvent @ 0x140695F54 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x140697B04 (PiUEventNotifyClient.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x1400EE084 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  Buffer = v2;
  KeReleaseGuardedMutex(v3);
  return ZwUpdateWnfStateData((PCWNF_STATE_NAME)(a1 + 88), &Buffer, 4u, 0LL, 0LL, 0, 0);
}
