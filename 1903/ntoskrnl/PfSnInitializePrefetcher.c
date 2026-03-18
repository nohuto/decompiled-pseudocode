/*
 * XREFs of PfSnInitializePrefetcher @ 0x140A19044
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407785B0 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1407785F0 (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  FastMutex.Count = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  qword_140467CD0 = 0LL;
  qword_140467CC8 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  qword_140467CE0 = &qword_140467CD8;
  qword_140467CD8 = &qword_140467CD8;
  FastMutex.Event.Header.WaitListHead.Blink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Event.Header.WaitListHead.Flink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Owner = 0LL;
  FastMutex.Contention = 0;
  LOWORD(FastMutex.Event.Header.Lock) = 1;
  FastMutex.Event.Header.Size = 6;
  FastMutex.Event.Header.SignalState = 0;
  dword_140467D24 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140467D28);
  PfSnPrefetchCacheCtxInitialize((__int64)&unk_140467D38);
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
