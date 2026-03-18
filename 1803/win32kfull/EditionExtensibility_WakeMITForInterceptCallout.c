/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01A6E10
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00BAAD8 (WakeDIT.c)
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  EtwTraceWakeDIT(32LL);
  return WakeDIT(0x20u);
}
