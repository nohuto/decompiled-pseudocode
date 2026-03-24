/*
 * XREFs of PopDripsWatchdogReportDirectedDripsDevice @ 0x14087973C
 * Callers:
 *     PopDripsCallbackTakeAction @ 0x140879548 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x140879788 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     PopDoesFxDeviceSupportDirectedTransition @ 0x1402D6B10 (PopDoesFxDeviceSupportDirectedTransition.c)
 *     PopReportDirectedDripsCandidateDevice @ 0x140868930 (PopReportDirectedDripsCandidateDevice.c)
 *     PopReportDirectedDripsCandidateChildren @ 0x14087CE84 (PopReportDirectedDripsCandidateChildren.c)
 */

void __fastcall PopDripsWatchdogReportDirectedDripsDevice(__int64 a1, __int16 a2, unsigned int a3)
{
  __int64 v5; // rcx

  if ( (a2 & 0x200) != 0 )
  {
    if ( PopDoesFxDeviceSupportDirectedTransition(a1) )
      PopReportDirectedDripsCandidateDevice(v5, *(struct _DEVICE_OBJECT **)(v5 + 96));
    if ( (a3 & 2) != 0 )
      PopReportDirectedDripsCandidateChildren(a1, a3);
  }
}
