/*
 * XREFs of GreGetHandleCount @ 0x1C00C2B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return *((unsigned int *)gpHandleManager + 1);
}
