/*
 * XREFs of ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005B9D0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DABC (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A530 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005B1E4 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromRemediationGroup(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  struct _RM_ACTIVITY_HOST **v5; // r8

  v3 = *((_QWORD *)a1 + 171);
  v4 = *((_QWORD *)a1 + 172);
  if ( *(struct _RM_ACTIVITY_HOST **)(v4 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1376)
    || (v5 = (struct _RM_ACTIVITY_HOST **)*((_QWORD *)a1 + 173), *v5 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1376)) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _RM_ACTIVITY_HOST *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *((_QWORD *)a1 + 171) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  RmpObjectRelease(a1);
}
