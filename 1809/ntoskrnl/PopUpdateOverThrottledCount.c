/*
 * XREFs of PopUpdateOverThrottledCount @ 0x14086DA40
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14018C034 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402E2128 (PopDiagTraceThermalOverthrottleState.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateOverThrottledCount(__int64 a1, unsigned __int8 a2)
{
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopDiagTraceThermalOverthrottleState(*(_QWORD *)(a1 + 48), a2);
  PopAcquirePolicyLock();
  if ( a2 )
  {
    if ( ++dword_140418218 == 1 )
    {
      Buffer = 1;
LABEL_6:
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_OVERTHROTTLE, &Buffer, 4u, 0LL, 0LL, 0, 0);
    }
  }
  else if ( !--dword_140418218 )
  {
    Buffer = 0;
    goto LABEL_6;
  }
  return PopReleasePolicyLock();
}
