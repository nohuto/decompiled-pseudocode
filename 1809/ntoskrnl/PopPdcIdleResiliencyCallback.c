/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x14086F288
 * Callers:
 *     PdcPoResiliencyClient @ 0x14086EE60 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x14011F840 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1402D4A14 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1402D7318 (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402D7F44 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1402D891C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1402D9398 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402DE3A4 (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1402DE40C (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1402E30C4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058AA3C (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140867D38 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopCancelDripsWatchdog @ 0x1408793C4 (PopCancelDripsWatchdog.c)
 *     PopSetDripsWatchdog @ 0x14087A070 (PopSetDripsWatchdog.c)
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
  PopAccumulateNonActivatedCpuTime(v2, &qword_14043C3E8, &qword_14043C3F0);
  Time = PpmQueryTime();
  QuadPart = Time.QuadPart;
  if ( (_BYTE)v2 )
  {
    qword_14043C3B8 = Time.QuadPart;
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
    qword_14043C3C0 += Time.QuadPart - qword_14043C3B8;
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
