/*
 * XREFs of DbgUiStopDebugging @ 0x1800CEB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
