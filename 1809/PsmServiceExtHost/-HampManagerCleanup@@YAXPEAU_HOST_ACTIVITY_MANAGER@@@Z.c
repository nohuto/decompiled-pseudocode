/*
 * XREFs of ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068BCC
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180055538 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x18000898C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     Pdcv2ActivationClientUnregister @ 0x18007173C (Pdcv2ActivationClientUnregister.c)
 */

void __fastcall HampManagerCleanup(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _HAM_RC_TREE_NODE *v6; // rdi
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v8; // rbx

  v2 = *((_QWORD *)a1 + 36);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  if ( *((_DWORD *)a1 + 200) || *((_DWORD *)a1 + 201) )
    NtDeleteWnfStateName((char *)a1 + 800);
  v3 = (void *)*((_QWORD *)a1 + 46);
  if ( v3 )
    Pdcv2ActivationClientUnregister(v3);
  v4 = *((_QWORD *)a1 + 47);
  if ( v4 )
    TpReleaseWork(v4);
  v5 = *((_QWORD *)a1 + 75);
  if ( v5 )
    TpReleaseWork(v5);
  if ( *((_QWORD *)a1 + 74) )
    EtwEventUnregister();
  v6 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 640);
  for ( i = HamRcNodeGetFirst((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 640), 4); ; i = HamRcNodeGetSuccessor(
                                                                                               v6,
                                                                                               v8) )
  {
    v8 = i;
    if ( !i )
      break;
    CemRcObjectDereference(i);
  }
}
