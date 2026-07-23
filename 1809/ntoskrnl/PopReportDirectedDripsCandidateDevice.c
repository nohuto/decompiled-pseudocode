/*
 * XREFs of PopReportDirectedDripsCandidateDevice @ 0x140869B90
 * Callers:
 *     PoReportDirectedDripsCandidateDevice @ 0x140868D10 (PoReportDirectedDripsCandidateDevice.c)
 *     PopDripsWatchdogReportDirectedDripsDevice @ 0x14087A99C (PopDripsWatchdogReportDirectedDripsDevice.c)
 *     PopReportDirectedDripsCandidateChildren @ 0x14087E0E4 (PopReportDirectedDripsCandidateChildren.c)
 * Callees:
 *     PipSetDevNodeStateFlags @ 0x140829798 (PipSetDevNodeStateFlags.c)
 *     PopDiagTraceDirectedDripsMarkDevice @ 0x1408731E4 (PopDiagTraceDirectedDripsMarkDevice.c)
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
    if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0 && _InterlockedExchangeAdd(&dword_14041A244, 0) <= 0 )
    {
      v4 = PipSetDevNodeStateFlags(a2);
      v2 = v4;
      if ( v4 >= 0 && v4 != 255 )
      {
        PopDiagTraceDirectedDripsMarkDevice(a2);
        _InterlockedIncrement(&dword_14041A250);
      }
    }
  }
  return v2;
}
