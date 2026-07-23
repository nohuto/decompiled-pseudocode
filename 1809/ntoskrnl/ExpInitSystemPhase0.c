/*
 * XREFs of ExpInitSystemPhase0 @ 0x1409D61A0
 * Callers:
 *     ExInitSystem @ 0x1409D5FF0 (ExInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     RtlHpGlobalsInitialize @ 0x14018D710 (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x1407562C0 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  int v0; // ecx
  unsigned __int64 v1; // rbx
  char result; // al

  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  qword_140408118 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_1404080A8 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_1404080C8 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_14040AD48 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpTimeout = -40000000LL;
  ExpEnvironmentLock.Count = 1;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  v0 = *(_DWORD *)(KeLoaderBlock_0 + 264);
  ExpConDrvLoadLock = 0LL;
  qword_14096F4E0 = 0LL;
  qword_14096F5A0 = 0LL;
  ExpFirmwarePageProtectionSupported = (v0 & 4) != 0;
  if ( CmSuiteBufferType == 7 )
    MEMORY[0xFFFFF780000002D0] = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v1 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  result = 1;
  RtlpHpLegacyEnvHandle = 2uLL;
  return result;
}
