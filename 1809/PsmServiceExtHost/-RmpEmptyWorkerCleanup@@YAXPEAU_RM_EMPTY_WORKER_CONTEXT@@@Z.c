/*
 * XREFs of ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180008430
 * Callers:
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800082CC (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017250 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpEmptyWorkerCleanup(struct _RM_EMPTY_WORKER_CONTEXT *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    TpReleaseWork();
    *(_QWORD *)a1 = 0LL;
  }
  v2 = (void *)*((_QWORD *)a1 + 1);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 2);
  if ( v3 )
    NtClose(v3);
}
