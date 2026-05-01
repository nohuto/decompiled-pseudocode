/*
 * XREFs of ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003A564
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800248E0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003E7A0 (-HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x18003A708 (CemRcObjectCleanup.c)
 */

void __fastcall HampWakeContextDestroy(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx

  if ( *((_QWORD *)a1 + 15) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
    TpReleaseWork(v2);
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = (void *)*((_QWORD *)a1 + 14);
  if ( v4 )
    NtClose(v4);
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
