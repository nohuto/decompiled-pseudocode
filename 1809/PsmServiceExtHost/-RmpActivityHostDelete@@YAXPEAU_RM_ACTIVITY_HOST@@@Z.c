/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DABC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB80 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18002DBC4 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DBF8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038D94 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005B9D0 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostDelete(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx

  if ( *((_QWORD *)a1 + 171) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  if ( *((_QWORD *)a1 + 104) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 184LL))();
    *((_QWORD *)a1 + 104) = 0LL;
  }
  v2 = *((_QWORD *)a1 + 129);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 200LL))(v2, 0LL);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 184LL))(*((_QWORD *)a1 + 129));
    *((_QWORD *)a1 + 129) = 0LL;
  }
  RmpActivityHostRemoveFromTables(a1);
  RmpPsmAppFamilyTableTryRemoveActivityHost(a1);
  RmpActivityHostCleanupCommonState(a1);
  RmpPartitionAddRemoveHost(*((struct _RM_PARTITION **)a1 + 7), -1, 0);
  RmpObjectRelease(a1);
}
