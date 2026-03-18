/*
 * XREFs of GreGetPeakHandleCount @ 0x1C00C2B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return *(unsigned int *)gpHandleManager;
}
