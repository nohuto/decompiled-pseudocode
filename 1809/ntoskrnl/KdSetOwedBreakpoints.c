/*
 * XREFs of KdSetOwedBreakpoints @ 0x14028D1E0
 * Callers:
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x14091A10C (KdpSetOwedBreakpoints.c)
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
