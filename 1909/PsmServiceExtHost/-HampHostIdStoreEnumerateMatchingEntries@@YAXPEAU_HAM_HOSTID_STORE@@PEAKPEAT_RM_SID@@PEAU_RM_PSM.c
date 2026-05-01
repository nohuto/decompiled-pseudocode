/*
 * XREFs of ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x180017844
 * Callers:
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x180002DE8 (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180017E98 (-HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18003A79C (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x18003F298 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18007B670 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z @ 0x18007B6E4 (-HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180012834 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180013184 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableFind @ 0x180017DB0 (CemRcTableFind.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostIdStoreEnumerateMatchingEntries(
        struct _HAM_HOSTID_STORE *a1,
        unsigned int *a2,
        union _RM_SID *a3,
        struct _RM_PSM_KEY *a4,
        unsigned int (*a5)(struct _HAM_HOSTID_STORE_LEAF_ENTRY *, void *),
        void *a6)
{
  _QWORD *v6; // rbx
  struct _HAM_RC_TREE_NODE *v7; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  struct _HAM_RC_TREE_NODE *v11; // rdi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _HAM_RC_TREE_NODE *i; // rax

  v6 = 0LL;
  v7 = (struct _HAM_HOSTID_STORE *)((char *)a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 4;
  if ( a2 )
  {
    v15 = CemRcTableFind((char *)a1 + 56, *a2, HampHostIdStoreCompareSessionByKey);
    v9 = (_QWORD *)v15;
    if ( !v15 )
      return;
    v7 = (struct _HAM_RC_TREE_NODE *)v15;
    v14 = 3;
  }
  if ( a3 )
  {
    v16 = CemRcTableFind(v9 + 5, a3, HampUserCompareByIdentity);
    v6 = (_QWORD *)v16;
    if ( !v16 )
    {
      v6 = 0LL;
      goto LABEL_15;
    }
    v7 = (struct _HAM_RC_TREE_NODE *)v16;
    v14 = 2;
  }
  if ( !a4 )
  {
LABEL_10:
    for ( i = HamRcNodeGetFirst(v7, v14); ; i = HamRcNodeGetSuccessor(v7, v11) )
    {
      v11 = i;
      if ( !i || !((unsigned int (__fastcall *)(struct _HAM_RC_TREE_NODE *, void *))a5)(i, a6) )
        break;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
    goto LABEL_15;
  }
  v17 = CemRcTableFind(v6 + 5, a4, HampHostIdStoreCompareApplicationByKey);
  v10 = (_QWORD *)v17;
  if ( v17 )
  {
    v7 = (struct _HAM_RC_TREE_NODE *)v17;
    v14 = 1;
    goto LABEL_10;
  }
LABEL_15:
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v11 )
    CemRcObjectDereference(v11);
}
