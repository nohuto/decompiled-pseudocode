/*
 * XREFs of ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000FE1C
 * Callers:
 *     CrmActivityAllocate @ 0x180008420 (CrmActivityAllocate.c)
 *     CrmActivityFree @ 0x180010070 (CrmActivityFree.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000FF7C (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __fastcall CrmpActivityContextCleanup(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  CrmpActivityWindowClosedReasonUnsubscribe(a1);
  v2 = *((_QWORD *)a1 + 6);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)*((_QWORD *)a1 + 8);
  if ( v3 )
    CloseHandle(v3);
  if ( *((_QWORD *)a1 + 1) != -1LL )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180013BA0, 4u, 0LL);
}
