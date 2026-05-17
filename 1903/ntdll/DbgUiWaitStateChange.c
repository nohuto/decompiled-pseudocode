/*
 * XREFs of DbgUiWaitStateChange @ 0x1800CD320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiWaitStateChange()
{
  return ZwWaitForDebugEvent();
}
