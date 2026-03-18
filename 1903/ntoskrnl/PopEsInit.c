/*
 * XREFs of PopEsInit @ 0x140A06D78
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x14069FF90 (PoRegisterPowerSettingCallback.c)
 *     PopEsWorkItemSchedule @ 0x140738928 (PopEsWorkItemSchedule.c)
 */

void __fastcall PopEsInit(int a1)
{
  if ( a1 == 1 )
  {
    qword_1404388F8 = 0LL;
    PopEsLock = 0LL;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsWorkItemSchedule(1);
  }
  else if ( PopPlatformAoAc )
  {
    if ( a1 == 3 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyLowPowerEpochCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyLowPowerEpochCallback,
        0LL,
        0LL);
      ExSubscribeWnfStateChange(
        (int)&PopEsWnfSubscriptionOpportunisticCs,
        (int)&WNF_PO_OPPORTUNISTIC_CS,
        1,
        0,
        (__int64)PopEsInStandbyLowPowerEpochCallback,
        0LL);
      PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    }
  }
}
