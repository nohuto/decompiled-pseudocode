/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01C8E40
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C01089A4 (WakeDIT.c)
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  EtwTraceWakeDIT(32LL);
  return WakeDIT(0x20u);
}
