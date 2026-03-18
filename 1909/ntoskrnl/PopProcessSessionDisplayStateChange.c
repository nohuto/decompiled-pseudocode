/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1408AB8DC
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x140720C4C (PopMonitorInvocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopPdcEngagePhases @ 0x1408AB6BC (PopPdcEngagePhases.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408B28D4 (PopTriggerMonitorPowerEvent.c)
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
    if ( v3 && qword_14046BB40 && !(unsigned __int8)qword_14046BB40() )
      return 259;
  }
  else
  {
    return (unsigned int)PopPdcEngagePhases((_BYTE)a1 == 0, a2);
  }
  return v2;
}
