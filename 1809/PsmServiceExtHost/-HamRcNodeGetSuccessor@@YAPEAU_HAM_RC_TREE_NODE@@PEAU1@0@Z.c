/*
 * XREFs of ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180003A8C (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x180007278 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800088D0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068BCC (-HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x18006B990 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006BBD8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x18000858C (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x18000898C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetSuccessor(struct _HAM_RC_TREE_NODE *a1, struct _HAM_RC_TREE_NODE *a2)
{
  struct _HAM_RC_TREE_NODE *v2; // rbx
  struct _HAM_RC_TREE_NODE *v4; // rbx
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v6; // rdi
  struct _HAM_RC_TREE_NODE *Successor; // rax

  v2 = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v2 == (struct _HAM_RC_TREE_NODE *)((char *)a1 + 40) )
    return (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2);
  v4 = (struct _HAM_RC_TREE_NODE *)((char *)v2 - 40);
  if ( _InterlockedIncrement64((volatile signed __int64 *)v4 + 3) <= 1 )
    __fastfail(0xEu);
  for ( i = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2); ; i = HamRcNodeGetFirst(Successor, 1u) )
  {
    v6 = i;
    if ( i )
      break;
    Successor = HamRcNodeGetSuccessor(a1, v4);
    v4 = Successor;
    if ( !Successor )
    {
      v6 = 0LL;
      break;
    }
  }
  if ( v4 )
    CemRcObjectDereference(v4);
  return v6;
}
