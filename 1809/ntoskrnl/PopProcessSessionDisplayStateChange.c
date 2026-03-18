/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x14086F458
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x1406DC1A8 (PopMonitorInvocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopPdcEngagePhases @ 0x14086F238 (PopPdcEngagePhases.c)
 *     PopTriggerMonitorPowerEvent @ 0x140876274 (PopTriggerMonitorPowerEvent.c)
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
    if ( v3 && qword_14043FFF0 && !(unsigned __int8)qword_14043FFF0() )
      return 259;
  }
  else
  {
    return (unsigned int)PopPdcEngagePhases((_BYTE)a1 == 0, a2);
  }
  return v2;
}
