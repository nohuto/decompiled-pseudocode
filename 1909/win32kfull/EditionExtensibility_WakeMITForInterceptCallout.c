/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01DC5E0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00ECE44 (WakeDIT.c)
 */

__int64 EditionExtensibility_WakeMITForInterceptCallout()
{
  if ( !_InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
    return 0LL;
  EtwTraceWakeDIT(4LL);
  return WakeDIT(4u);
}
