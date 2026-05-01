/*
 * XREFs of ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000BDE4 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C664 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001B930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18006F2D0 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 * Callees:
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z @ 0x18000C07C (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C124 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000C1D8 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180019658 (-RmpActivityHostGetCommitLevel@@YA-AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180019BBC (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180019DA0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800257F0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostComputeAndApplyEnforcementSettings(char *P)
{
  unsigned int CommitLevel; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v8[3]; // [rsp+48h] [rbp-28h] BYREF

  v5 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)P, 0LL, &v5, &v6);
  RmpActivityHostAggregateCommitValues((struct _RM_ACTIVITY_HOST *)P);
  v8[1] = *((_QWORD *)P + 169);
  v7 = 0LL;
  v8[0] = 0LL;
  v8[2] = 1LL;
  RmpActivityHostGetCommitThresholds((struct _RM_COMMIT_THRESHOLDS *)(P + 1328), v5, &v7, v8, &v6);
  RmpActivityHostPopulateRunnabilitySettings((struct _RM_ACTIVITY_HOST *)P, (struct _RM_ENFORCEMENT_SETTINGS *)&v7);
  CommitLevel = RmpActivityHostGetCommitLevel(P + 1328, v5);
  RmpActivityHostUpdateCommitUseState(P, v3, CommitLevel);
  result = RmpActivityHostApplyEnforcementSettings(P, (struct _RM_ENFORCEMENT_SETTINGS *)&v7, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
