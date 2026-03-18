/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1408ABEAC
 * Callers:
 *     PdcPoResiliencyClient @ 0x1408AB9F0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14011F380 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402EF1C0 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402F1FA8 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402F31D4 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1402F3EE8 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402F4E50 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402FB310 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402FB378 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402FFEF4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408A4244 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408AB440 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408AB594 (PopDripsWatchdogStopWatchdog.c)
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
  PopAccumulateNonActivatedCpuTime(v2, &qword_140467EA8, &qword_140467EB0);
  Time = PpmQueryTime();
  QuadPart = Time.QuadPart;
  if ( (_BYTE)v2 )
  {
    qword_140467E78 = Time.QuadPart;
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
    qword_140467E80 += Time.QuadPart - qword_140467E78;
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
