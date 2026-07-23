/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x140590A24
 * Callers:
 *     PiUEventNotifyClient @ 0x140590938 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x1405A0A1C (PiUEventHandleGetEvent.c)
 * Callees:
 *     PiUEventEstimateRequiredClientBufferSize @ 0x140006544 (PiUEventEstimateRequiredClientBufferSize.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventNotifyClientPendingEvent(const WNF_STATE_NAME *a1)
{
  struct _FAST_MUTEX *v2; // rcx
  int v3; // eax
  struct _FAST_MUTEX *v4; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _FAST_MUTEX *)a1[2];
  Buffer = 0;
  ExAcquireFastMutex(v2);
  v3 = PiUEventEstimateRequiredClientBufferSize((__int64)a1);
  v4 = (struct _FAST_MUTEX *)a1[2];
  Buffer = v3;
  KeReleaseGuardedMutex(v4);
  return ZwUpdateWnfStateData(a1 + 11, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
