/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1408A917C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140195F40 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408A8FB0 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402FEE24 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  int v4; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(_QWORD *)(a1 + 48), a2);
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_140442A58 == 1 )
    {
      v4 = 1;
LABEL_6:
      ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_OVERTHROTTLE, (__int64)&v4, 4LL);
    }
  }
  else if ( !--dword_140442A58 )
  {
    v4 = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
