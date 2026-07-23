/*
 * XREFs of PopDispatchCallout @ 0x140765530
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14017852C (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
