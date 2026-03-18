/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14058FA24
 * Callers:
 *     PiUEventNotifyClient @ 0x14058F938 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14059FA1C (PiUEventHandleGetEvent.c)
 * Callees:
 *     PiUEventEstimateRequiredClientBufferSize @ 0x140006544 (PiUEventEstimateRequiredClientBufferSize.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rcx
  int v3; // eax
  struct _FAST_MUTEX *v4; // rcx
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(struct _FAST_MUTEX **)(a1 + 16);
  v6 = 0;
  ExAcquireFastMutex(v2);
  v3 = PiUEventEstimateRequiredClientBufferSize(a1);
  v4 = *(struct _FAST_MUTEX **)(a1 + 16);
  v6 = v3;
  KeReleaseGuardedMutex(v4);
  return ZwUpdateWnfStateData(a1 + 88, (__int64)&v6, 4LL);
}
