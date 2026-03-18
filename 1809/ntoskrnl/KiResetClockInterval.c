/*
 * XREFs of KiResetClockInterval @ 0x140190BCC
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1400605D0 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140299568 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400BDDD0 (RtlRbRemoveNode.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCC30 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCCF0 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a1);
  v3 = *(unsigned int *)(a1 + 32);
  *(_BYTE *)(a1 + 24) = 0;
  if ( (_DWORD)v3 )
    PoTraceSystemTimerResolutionKernel(0, v3);
  return KiSetClockIntervalToMinimumRequested(v2, v3);
}
