/*
 * XREFs of PopMonitorInvocation @ 0x140720C4C
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopIsInputSuppressionEngaged @ 0x1408AA244 (PopIsInputSuppressionEngaged.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408AB8DC (PopProcessSessionDisplayStateChange.c)
 *     PopDiagTraceMonitorOnWithLidClosed @ 0x1408AF8F0 (PopDiagTraceMonitorOnWithLidClosed.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x1408B1928 (PopTraceMonitorOnRequestUserInput.c)
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
      ZwUpdateWnfStateData(&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, &PopWdiCurrentScenarioInstanceId, 1u, 0LL, 0LL, 0, 0);
    }
  }
  return v2;
}
