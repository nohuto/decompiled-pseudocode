/*
 * XREFs of PopDispatchCallout @ 0x14078ABA0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x140181C8C (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
