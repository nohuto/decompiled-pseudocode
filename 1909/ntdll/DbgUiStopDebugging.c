/*
 * XREFs of DbgUiStopDebugging @ 0x1800CD3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
