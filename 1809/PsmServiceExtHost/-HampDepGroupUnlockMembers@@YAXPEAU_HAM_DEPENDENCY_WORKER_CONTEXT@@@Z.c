/*
 * XREFs of ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006B3B4
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069C9C (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006ABC8 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B07C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupUnlockMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx

  for ( i = *a1; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    if ( (*((_BYTE *)i + 40) & 1) != 0 )
    {
      HampHostReleaseLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 704));
      *((_DWORD *)i + 10) &= ~1u;
    }
  }
}
