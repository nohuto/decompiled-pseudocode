/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x140274270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 HvlInvokeWheaErrorNotificationCallback()
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( HvlpWheaErrorNotificationCallback )
    return ((__int64 (*)(void))HvlpWheaErrorNotificationCallback)();
  return result;
}
