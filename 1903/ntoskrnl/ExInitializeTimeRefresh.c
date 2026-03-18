/*
 * XREFs of ExInitializeTimeRefresh @ 0x140A0E83C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x1400E3EBC (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x1401C2190 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x1407607C8 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  __int64 v0; // r8
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
      ExpNtExpirationDate.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = ExpNtExpirationDate.QuadPart;
    ExpShuttingDown = 0;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_1404322F8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_140432318 = 0LL;
  qword_140432300 = (__int64)&ExpOkToTimeRefresh;
  qword_1404322F0 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_140432322 = 0;
  KiInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  v2[0] = 0LL;
  ExpTimeRefreshInterval = -36000000000LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, v0, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_1404323F8 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
