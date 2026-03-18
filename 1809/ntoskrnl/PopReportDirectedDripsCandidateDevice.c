/*
 * XREFs of PopReportDirectedDripsCandidateDevice @ 0x140868950
 * Callers:
 *     PoReportDirectedDripsCandidateDevice @ 0x140867AD0 (PoReportDirectedDripsCandidateDevice.c)
 *     PopDripsWatchdogReportDirectedDripsDevice @ 0x14087975C (PopDripsWatchdogReportDirectedDripsDevice.c)
 *     PopReportDirectedDripsCandidateChildren @ 0x14087CEA4 (PopReportDirectedDripsCandidateChildren.c)
 * Callees:
 *     PipSetDevNodeStateFlags @ 0x1408285B8 (PipSetDevNodeStateFlags.c)
 *     PopDiagTraceDirectedDripsMarkDevice @ 0x140871FA4 (PopDiagTraceDirectedDripsMarkDevice.c)
 */

__int64 __fastcall PopReportDirectedDripsCandidateDevice(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( PopDirectedDripsEnableV2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    _m_prefetchw(&PopDirectedDripsState);
    if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0 && _InterlockedExchangeAdd(&dword_140419184, 0) <= 0 )
    {
      v4 = PipSetDevNodeStateFlags(a2);
      v2 = v4;
      if ( v4 >= 0 && v4 != 255 )
      {
        PopDiagTraceDirectedDripsMarkDevice(a2);
        _InterlockedIncrement(&dword_140419190);
      }
    }
  }
  return v2;
}
