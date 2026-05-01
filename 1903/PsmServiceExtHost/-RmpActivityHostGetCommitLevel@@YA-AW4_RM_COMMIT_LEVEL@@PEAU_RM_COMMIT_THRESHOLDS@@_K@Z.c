/*
 * XREFs of ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180019658
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180019180 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostGetCommitLevel(unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 < *a1 )
    return 1LL;
  if ( a2 < a1[1] )
    return 2LL;
  return 4 - (unsigned int)(a2 < a1[2]);
}
