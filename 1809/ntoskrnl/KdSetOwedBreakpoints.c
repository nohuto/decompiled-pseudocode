/*
 * XREFs of KdSetOwedBreakpoints @ 0x14028CFF0
 * Callers:
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
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
