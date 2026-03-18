/*
 * XREFs of GreGetHandleCount @ 0x1C0123160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return *((unsigned int *)gpHandleManager + 1);
}
