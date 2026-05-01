/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006A800
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069C9C (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006ABC8 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B07C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rbx
  char *v3; // rdi
  __int64 v4; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v5; // rax

  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1 )
      break;
    v3 = (char *)v2 - 704;
    HampHostAcquireLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 704), 0);
    HampHostCheckQueueStateWorker((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 704), 0);
    HampHostReleaseLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 704));
    v4 = *(_QWORD *)v2;
    if ( *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)(*(_QWORD *)v2 + 8LL) != v2
      || (v5 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)v2 + 1), *v5 != v2) )
    {
      __fastfail(3u);
    }
    *v5 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v3 + 186) = 0;
    if ( (*((_QWORD *)v3 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 768));
  }
  RmpReleaseGlobalLock();
}
