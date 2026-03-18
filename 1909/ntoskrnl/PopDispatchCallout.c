/*
 * XREFs of PopDispatchCallout @ 0x14078D080
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14018237C (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
