/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1408A89DC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1408A8810 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402FE8D4 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(_QWORD *)(a1 + 48), a2);
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_1404429F8 == 1 )
    {
      Buffer = 1;
LABEL_6:
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_OVERTHROTTLE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_1404429F8 )
  {
    Buffer = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
