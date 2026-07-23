/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1408704C8
 * Callers:
 *     PdcPoResiliencyClient @ 0x1408700A0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14011F8D0 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402D4D04 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402D7608 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402D8234 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1402D8C0C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402D9688 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402DE694 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402DE6FC (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E33B4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140868F78 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopCancelDripsWatchdog @ 0x14087A604 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x14087B2B0 (PopSetDripsWatchdog.c)
 */

__int64 __fastcall PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  LARGE_INTEGER Time; // rax
  __int64 QuadPart; // rbx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock();
  PopPdcIdleResiliency = v2;
  v7 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4LL, &v7);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_14043D4A8, &qword_14043D4B0);
  Time = PpmQueryTime();
  QuadPart = Time.QuadPart;
  if ( (_BYTE)v2 )
  {
    qword_14043D478 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopSetDripsWatchdog();
    PpmDisableHighPerfRequestDeferredExpiration(1);
    PopFxBeginDeviceIRPhaseAccounting(QuadPart);
  }
  else
  {
    qword_14043D480 += Time.QuadPart - qword_14043D478;
    PopFxEndDeviceIRPhaseAccounting(Time.QuadPart);
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxPauseDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(0);
    PopUpdateNonAttributedCpuTimeReference(1);
    PopCancelDripsWatchdog();
    PpmDisableHighPerfRequestDeferredExpiration(0);
  }
  PopReleasePolicyLock();
  return PopDirectedDripsIdleResiliencyCallback(a1, v2);
}
