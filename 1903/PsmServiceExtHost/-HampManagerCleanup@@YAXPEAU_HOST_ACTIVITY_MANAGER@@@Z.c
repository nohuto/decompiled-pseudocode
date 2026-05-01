/*
 * XREFs of ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800766B0
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180061F58 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180012834 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180013184 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 */

void __fastcall HampManagerCleanup(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _HAM_RC_TREE_NODE *v5; // rdi
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v7; // rbx

  v2 = (_DWORD *)((char *)a1 + 792);
  if ( *v2 || *((_DWORD *)a1 + 199) )
    NtDeleteWnfStateName(v2);
  if ( *((_QWORD *)a1 + 44) )
    Pdcv2ActivationClientUnregister();
  v3 = *((_QWORD *)a1 + 45);
  if ( v3 )
    TpReleaseWork(v3);
  v4 = *((_QWORD *)a1 + 73);
  if ( v4 )
    TpReleaseWork(v4);
  if ( *((_QWORD *)a1 + 72) )
    EtwEventUnregister();
  v5 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 624);
  for ( i = HamRcNodeGetFirst((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 624), 4); ; i = HamRcNodeGetSuccessor(
                                                                                               v5,
                                                                                               v7) )
  {
    v7 = i;
    if ( !i )
      break;
    CemRcObjectDereference(i);
  }
}
