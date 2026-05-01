/*
 * XREFs of ?CrmpActivityWindowClosedReasonUnsubscribe@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A750
 * Callers:
 *     ?CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A3C0 (-CrmpActivityContextCleanup@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     _CrmActivityWindowClosedReasonUnsubscribe@4 @ 0x1000BCA0 (_CrmActivityWindowClosedReasonUnsubscribe@4.c)
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@P6GXPAX11@Z1@Z @ 0x1000BCD7 (-CrmpActivityWindowClosedReasonSubscribe@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@P6GXPAX11@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall CrmpActivityWindowClosedReasonUnsubscribe(_DWORD *this)
{
  if ( this[16] )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(this[16]);
    this[16] = 0;
  }
  if ( this[14] || this[15] )
  {
    _NdrClientCall4(&stru_10001638, &byte_10003020, this[2], this[3], *(_DWORD *)(this[4] + 4));
    this[14] = 0;
    this[15] = 0;
  }
}
