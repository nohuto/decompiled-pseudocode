/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1408AC07C
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopMonitorInvocation @ 0x14071EDBC (PopMonitorInvocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopPdcEngagePhases @ 0x1408ABE5C (PopPdcEngagePhases.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408B3074 (PopTriggerMonitorPowerEvent.c)
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
    if ( v3 && qword_14046BE00 && !(unsigned __int8)qword_14046BE00() )
      return 259;
  }
  else
  {
    return (unsigned int)PopPdcEngagePhases((_BYTE)a1 == 0, a2);
  }
  return v2;
}
