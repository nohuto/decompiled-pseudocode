/*
 * XREFs of ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000E0B0
 * Callers:
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000D1C0 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DF90 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E030 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002B180 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x180039244 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180079110 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActIsStartedOrReachedPendState(__int64 a1, unsigned __int8 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 548);
  if ( v2 == 3 )
    return 1LL;
  if ( v2 == 2 )
    return *(_BYTE *)(a1 + 549) >= a2;
  return 0LL;
}
