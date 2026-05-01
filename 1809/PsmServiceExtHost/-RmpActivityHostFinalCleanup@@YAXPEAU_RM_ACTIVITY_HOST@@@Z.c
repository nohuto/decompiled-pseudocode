/*
 * XREFs of ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800082CC
 * Callers:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800083F0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180008430 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostFinalCleanup(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_PARTITION *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  RmpEmptyWorkerCleanup((struct _RM_ACTIVITY_HOST *)((char *)a1 + 1240));
  v2 = (struct _RM_PARTITION *)*((_QWORD *)a1 + 7);
  if ( v2 )
    RmpPartitionRelease(v2);
  v3 = *((_QWORD *)a1 + 131);
  if ( v3 )
    CemRcObjectDereference(v3);
  if ( *((_QWORD *)a1 + 104) )
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 184LL))();
  if ( *((_QWORD *)a1 + 108) )
    TpReleaseTimer();
  if ( *((_QWORD *)a1 + 85) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 84) )
    TpReleaseWork();
  v4 = *((_QWORD *)a1 + 102);
  if ( v4 )
    CemRcObjectDereference(v4);
}
