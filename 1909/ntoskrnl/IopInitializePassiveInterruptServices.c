/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x140A1B9B0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x140124310 (KeInitializeQueue.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407835CC (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407836E4 (IopQueryPassiveInterruptRegistryOptions.c)
 */

__int64 IopInitializePassiveInterruptServices()
{
  void *v0; // rdx
  void *v1; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_140460ED8 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v1, v0);
}
