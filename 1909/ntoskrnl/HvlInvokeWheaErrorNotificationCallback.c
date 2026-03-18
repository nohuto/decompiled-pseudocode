/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x1402880A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 HvlInvokeWheaErrorNotificationCallback()
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( HvlpWheaErrorNotificationCallback )
    return ((__int64 (*)(void))HvlpWheaErrorNotificationCallback)();
  return result;
}
