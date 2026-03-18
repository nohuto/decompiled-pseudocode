/*
 * XREFs of PfSnInitializePrefetcher @ 0x140A19504
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x14077BB90 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x14077BBD0 (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  stru_1404679E8.Count = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  qword_1404679D0 = 0LL;
  qword_1404679C8 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  qword_1404679E0 = &qword_1404679D8;
  qword_1404679D8 = &qword_1404679D8;
  stru_1404679E8.Event.Header.WaitListHead.Blink = &stru_1404679E8.Event.Header.WaitListHead;
  stru_1404679E8.Event.Header.WaitListHead.Flink = &stru_1404679E8.Event.Header.WaitListHead;
  stru_1404679E8.Owner = 0LL;
  stru_1404679E8.Contention = 0;
  LOWORD(stru_1404679E8.Event.Header.Lock) = 1;
  stru_1404679E8.Event.Header.Size = 6;
  stru_1404679E8.Event.Header.SignalState = 0;
  dword_140467A24 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140467A28);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140467A38);
  RegHandle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x66506343u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    *(_BYTE *)PoolWithTag = 8;
    PoolWithTag[2] = PoolWithTag + 1;
    PoolWithTag[1] = PoolWithTag + 1;
    PoolWithTag[3] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[11] = PfSnTracingStateDpcRoutine;
    *((_DWORD *)PoolWithTag + 16) = 275;
    PoolWithTag[12] = PoolWithTag;
    PoolWithTag[15] = 0LL;
    PoolWithTag[10] = 0LL;
    PoolWithTag[18] = PfSnTracingStateExWorkerRoutine;
    PoolWithTag[19] = PoolWithTag;
    PoolWithTag[16] = 0LL;
    KiSetTimerEx((__int64)PoolWithTag, -6000000000LL, 0, 0, (__int64)(PoolWithTag + 8));
  }
  return 0LL;
}
