/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x1800063B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return sub_18000645C(*((PVOID *)Callback + 3), Callback);
}
