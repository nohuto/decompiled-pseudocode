/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x140870698
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x1406DD428 (PopMonitorInvocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopPdcEngagePhases @ 0x140870478 (PopPdcEngagePhases.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408774B4 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char v3; // di

  v2 = 0;
  v3 = a1;
  if ( PopEventProcessorEnabled )
  {
    PopTriggerMonitorPowerEvent(a1, a2);
    if ( v3 && qword_1404410B0 && !(unsigned __int8)qword_1404410B0() )
      return 259;
  }
  else
  {
    return (unsigned int)PopPdcEngagePhases((_BYTE)a1 == 0, a2);
  }
  return v2;
}
