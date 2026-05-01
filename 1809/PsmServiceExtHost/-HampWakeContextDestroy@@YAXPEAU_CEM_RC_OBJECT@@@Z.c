/*
 * XREFs of ?HampWakeContextDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180008470
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180009F60 (CemRcObjectCleanup.c)
 */

void __fastcall HampWakeContextDestroy(struct _CEM_RC_OBJECT *a1)
{
  void *v2; // rcx

  if ( *((_QWORD *)a1 + 15) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 12) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 13) )
    TpReleaseTimer();
  v2 = (void *)*((_QWORD *)a1 + 14);
  if ( v2 )
    NtClose(v2);
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
