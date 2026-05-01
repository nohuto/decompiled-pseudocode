/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A90
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180062130 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B2A8 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECA4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECE8 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003045C (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003DEC0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x180072FE0 (-HampSystemNotificationClientUnregister@@YAXPEAX@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076684 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x1800768D0 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007698C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A64 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800784AC (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x1800784EC (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B838 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007BBBC (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA90 (-HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     CemRcTableWaitForEmpty @ 0x18007E894 (CemRcTableWaitForEmpty.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_DEPENDENCY_GROUP *v11; // rax
  __int64 v12; // rdx
  struct _HAM_DEPENDENCY_GROUP *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  HampWakeManagerPreRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 392));
  if ( *((_QWORD *)a1 + 37) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 36) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 45) )
    HampPdcExitPlmPhase((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 336));
  v2 = (void *)*((_QWORD *)a1 + 43);
  if ( v2 )
  {
    HampSystemNotificationClientUnregister(v2);
    *((_QWORD *)a1 + 43) = 0LL;
  }
  HampSlsRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 504));
  v3 = (_QWORD *)((char *)a1 + 304);
  v4 = 4LL;
  do
  {
    if ( *v3 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v3;
    --v4;
  }
  while ( v4 );
  v5 = (_QWORD *)((char *)a1 + 16);
  do
  {
    while ( (_QWORD *)*v5 != v5 )
      HampClientDestroy((struct _HAM_CLIENT_CONTEXT *)(*v5 - 8LL));
    LODWORD(v4) = v4 + 1;
    v5 += 2;
  }
  while ( (unsigned int)v4 < 7 );
  for ( i = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 128), 0, 0LL);
        ;
        i = HampManagerGetNextHost(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    HampHostQueueTerminateEx((__int64)i, 3u, 2816, 0LL, 0, 0);
  }
  v8 = 0LL;
  v9 = a1;
  while ( 1 )
  {
    v11 = HampManagerEnumerateDependencyGroups(v9, v8);
    v13 = v11;
    if ( !v11 )
      break;
    HampDepGroupWaitEnterStateChange(v11);
    HampDepGroupAcquireLockExclusive(v13);
    for ( j = HampDepGroupGetFirstDependency(v13); j; j = HampDepGroupGetNextDependency(j) )
    {
      if ( *((_BYTE *)j + 40) != 2 )
        *((_DWORD *)j + 9) |= 1u;
    }
    HampDepGroupReleaseLockExclusive(v13);
    HampDepGroupRunStateChangeWorker(v13);
    v9 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v13 + 4);
    v8 = v13;
  }
  while ( 1 )
  {
    HampManagerAcquireLockShared(a1, v12);
    v15 = *((_QWORD *)a1 + 33);
    HampManagerReleaseLockShared(a1, v14);
    if ( !v15 )
      break;
    RtlWaitOnAddress((char *)a1 + 264, &v15, 8LL);
  }
  CemRcTableWaitForEmpty((char *)a1 + 168);
  CemRcTableWaitForEmpty((char *)a1 + 216);
  CemRcTableWaitForEmpty((char *)a1 + 424);
}
