/*
 * XREFs of PopDispatchCallout @ 0x140764340
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14017842C (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
