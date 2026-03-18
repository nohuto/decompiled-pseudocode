/*
 * XREFs of ExpInitSystemPhase0 @ 0x140A18510
 * Callers:
 *     ExInitSystem @ 0x140A18360 (ExInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     RtlHpGlobalsInitialize @ 0x140196434 (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x140779AA0 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  bool v0; // cl
  unsigned __int64 v1; // rbx
  char result; // al

  ExpTimeout = -40000000LL;
  MEMORY[0xFFFFF780000002D6] = 10;
  qword_14042F5B8 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_14042F548 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_14042F568 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_1404323F8 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Count = 1;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  v0 = (*(_DWORD *)(KeLoaderBlock_0 + 264) & 4) != 0;
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = v0;
  qword_1409AE5D8 = 0LL;
  qword_1409AE688 = 0LL;
  if ( CmSuiteBufferType == 7 )
    MEMORY[0xFFFFF780000002D0] = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v1 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  result = 1;
  RtlpHpLegacyEnvHandle = 2uLL;
  return result;
}
