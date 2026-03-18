/*
 * XREFs of GreGetPeakHandleCount @ 0x1C00F90B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return *(unsigned int *)gpHandleManager;
}
