/*
 * XREFs of PopMonitorInvocation @ 0x1406DC1A8
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopIsInputSuppressionEngaged @ 0x14086DE9C (PopIsInputSuppressionEngaged.c)
 *     PopProcessSessionDisplayStateChange @ 0x14086F458 (PopProcessSessionDisplayStateChange.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x140873308 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x140875358 (PopTraceMonitorOnRequestUserInput.c)
 */

__int64 __fastcall PopMonitorInvocation(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( PopPlatformAoAc && *(_BYTE *)a1 )
  {
    PopAcquirePolicyLock();
    if ( (unsigned __int8)PopIsInputSuppressionEngaged(v1) && (GUID *)PopWdiCurrentScenario != &NullGuid )
      PopTraceMonitorOnRequestUserInput(v1);
    LOBYTE(v4) = 1;
    v2 = PopProcessSessionDisplayStateChange(v4, v1);
    PopReleasePolicyLock();
    if ( (!v2 || v2 == 259) && (GUID *)PopWdiCurrentScenario != &NullGuid && !PopConsoleDisplayState )
    {
      PopDiagTraceMonitorOnWithLidClosed(v1);
      ZwUpdateWnfStateData(
        (__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
        (__int64)&PopWdiCurrentScenarioInstanceId,
        1LL);
    }
  }
  return v2;
}
