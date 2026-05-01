/*
 * XREFs of ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000FF7C
 * Callers:
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x1800081BC (-CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z.c)
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000FE1C (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     CrmActivityWindowClosedReasonUnsubscribe @ 0x1800100C0 (CrmActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityWindowClosedReasonUnsubscribe(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( *((_DWORD *)a1 + 22) || *((_DWORD *)a1 + 23) )
  {
    NdrClientCall3(
      (MIDL_STUBLESS_PROXY_INFO *)&stru_180013BA0,
      9u,
      0LL,
      *((_QWORD *)a1 + 1),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL));
    *((_QWORD *)a1 + 11) = 0LL;
  }
}
