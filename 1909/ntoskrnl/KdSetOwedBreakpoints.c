/*
 * XREFs of KdSetOwedBreakpoints @ 0x1402A2DF0
 * Callers:
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140957B74 (KdpSetOwedBreakpoints.c)
 */

__int64 KdSetOwedBreakpoints()
{
  __int64 result; // rax

  if ( !KdPitchDebugger )
  {
    if ( KdpOweBreakpoint )
      return KdpSetOwedBreakpoints();
  }
  return result;
}
