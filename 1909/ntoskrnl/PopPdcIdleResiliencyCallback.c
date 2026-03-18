/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1408AB70C
 * Callers:
 *     PdcPoResiliencyClient @ 0x1408AB250 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x1401200D0 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402EEF20 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402F1D08 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402F2F34 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1402F3C38 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402F4900 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402FADC0 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402FAE28 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FF9A4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408A3A84 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408AACA0 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408AADF4 (PopDripsWatchdogStopWatchdog.c)
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
  PopAccumulateNonActivatedCpuTime(v2, &qword_140467BE8, &qword_140467BF0);
  Time = PpmQueryTime();
  QuadPart = Time.QuadPart;
  if ( (_BYTE)v2 )
  {
    qword_140467BB8 = Time.QuadPart;
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxResumeDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(1);
    PopUpdateNonAttributedCpuTimeReference(0);
    PopDripsWatchdogStartWatchdog();
    PpmDisableHighPerfRequestDeferredExpiration(1);
    PopFxBeginDeviceIRPhaseAccounting(QuadPart);
  }
  else
  {
    qword_140467BC0 += Time.QuadPart - qword_140467BB8;
    PopFxEndDeviceIRPhaseAccounting(Time.QuadPart);
    if ( (PopFxDeviceAccountingLevel & 4) != 0 )
      PopFxPauseDeviceAccounting();
    PpmIdleCsVetoAccountingResiliencyUpdate(0);
    PopUpdateNonAttributedCpuTimeReference(1);
    PopDripsWatchdogStopWatchdog();
    PpmDisableHighPerfRequestDeferredExpiration(0);
  }
  PopReleasePolicyLock();
  return PopDirectedDripsIdleResiliencyCallback(a1, v2);
}
