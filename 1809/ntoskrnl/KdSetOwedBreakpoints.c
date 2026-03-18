/*
 * XREFs of KdSetOwedBreakpoints @ 0x14028CEF0
 * Callers:
 *     KiPageFault @ 0x1401CB400 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x14091910C (KdpSetOwedBreakpoints.c)
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
