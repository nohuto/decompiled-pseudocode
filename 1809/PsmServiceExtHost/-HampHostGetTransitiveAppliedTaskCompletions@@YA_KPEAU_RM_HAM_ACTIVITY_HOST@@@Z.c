/*
 * XREFs of ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069C9C
 * Callers:
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x180067594 (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 * Callees:
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006974 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800070AC (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006A800 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AA28 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006ABC8 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006B3B4 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampHostGetTransitiveAppliedTaskCompletions(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // edx
  struct _HAM_DEPENDENCY_GROUP *v3; // rdi
  __int64 TransitiveTaskCompletionsForHost; // rsi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  HampHostAcquireLockExclusiveEx(a1, 0);
  v3 = HampHostCheckWaitEnterDependencyStateChange(a1, v2);
  if ( v3 )
  {
    HampHostReleaseLockExclusiveEx(a1);
    HampDepGroupLockAndReferenceMembers(v3, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v6);
    TransitiveTaskCompletionsForHost = HampDepGroupGetTransitiveTaskCompletionsForHost(v3, a1);
    HampDepGroupReleaseLockExclusive(v3);
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v6);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v6);
    HampDepGroupRunStateChangeWorker(v3);
  }
  else
  {
    TransitiveTaskCompletionsForHost = HampHostGetAppliedTaskCompletions(a1);
    HampHostReleaseLockExclusiveEx(a1);
  }
  return TransitiveTaskCompletionsForHost;
}
