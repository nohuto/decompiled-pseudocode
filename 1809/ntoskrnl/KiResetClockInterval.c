/*
 * XREFs of KiResetClockInterval @ 0x140190D2C
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1400605D0 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140299858 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCCD0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD90 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rcx
  __int64 Right_low; // rdx

  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  Right_low = LODWORD(Node[1].Right);
  LOBYTE(Node[1].Children[0]) = 0;
  if ( (_DWORD)Right_low )
    PoTraceSystemTimerResolutionKernel(0, Right_low);
  return KiSetClockIntervalToMinimumRequested(v2, Right_low);
}
