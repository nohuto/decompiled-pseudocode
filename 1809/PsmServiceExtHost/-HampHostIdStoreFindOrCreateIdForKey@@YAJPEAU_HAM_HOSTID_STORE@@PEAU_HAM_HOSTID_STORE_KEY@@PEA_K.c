/*
 * XREFs of ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006D2F0
 * Callers:
 *     ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180066B74 (-HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18000CADC (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     CemRcTableFind @ 0x180014BBC (CemRcTableFind.c)
 *     CemRcTableFindOrInsertEx @ 0x180035C60 (CemRcTableFindOrInsertEx.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003F54C (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18006D1C0 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18006D8DC (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18006D98C (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreFindOrCreateIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  struct _HAM_RC_TREE_NODE *v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  PVOID Heap; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID v13; // rax
  unsigned __int8 IsDynamicKey; // al
  int v15; // r12d
  struct _HAM_RC_TREE_NODE *v16; // rax
  __int64 v17; // rcx
  _OWORD *v18; // rax
  struct _HAM_HOSTID_STORE_KEY *v19; // rdx
  __int128 v20; // xmm1
  struct _HAM_HOSTID_STORE_LEAF_ENTRY *v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-68h]
  unsigned __int64 v27[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 *v30; // [rsp+A0h] [rbp+18h]
  struct _HAM_RC_TREE_NODE *v31; // [rsp+A8h] [rbp+20h] BYREF

  v30 = a3;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  HampHostIdStoreAcquireLockShared(a1, (__int64)a2);
  v8 = CemRcTableFind(
         (unsigned __int64)a1 + 56,
         *((unsigned int *)a2 + 133),
         (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareSessionByKey);
  if ( !v8 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v8 = (unsigned __int64)Heap;
    if ( !Heap )
    {
LABEL_3:
      v10 = -1073741801;
      goto LABEL_27;
    }
    memset_0(Heap, 0, 0x60uLL);
    HamRcNodeInitializeFromRoot(
      (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
      (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
      (struct _HAM_RC_TREE_NODE *)v8);
    *(_DWORD *)(v8 + 88) = *((_DWORD *)a2 + 133);
    CemRcTableFindOrInsertEx(
      (__int64)a1 + 56,
      *((unsigned int *)a2 + 133),
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareSessionByKey,
      v8,
      v26,
      &v28);
    if ( v28 != v8 )
    {
      CemRcObjectDereference((_QWORD *)v8);
      v8 = v28;
    }
  }
  v7 = CemRcTableFind(
         v8 + 40,
         (__int64)a2 + 464,
         (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareUserByKey);
  if ( !v7 )
  {
    v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
    v7 = (unsigned __int64)v13;
    if ( !v13 )
      goto LABEL_3;
    memset_0(v13, 0, 0xA0uLL);
    HamRcNodeInitialize(
      (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
      (struct _HAM_RC_TREE_NODE *)v8,
      (struct _HAM_RC_TREE_NODE *)v7);
    *(_OWORD *)(v7 + 88) = *((_OWORD *)a2 + 29);
    *(_OWORD *)(v7 + 104) = *((_OWORD *)a2 + 30);
    *(_OWORD *)(v7 + 120) = *((_OWORD *)a2 + 31);
    *(_OWORD *)(v7 + 136) = *((_OWORD *)a2 + 32);
    *(_DWORD *)(v7 + 152) = *((_DWORD *)a2 + 132);
    CemRcTableFindOrInsertEx(
      v8 + 40,
      (__int64)a2 + 464,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareUserByKey,
      v7,
      v26,
      &v29);
    if ( v29 != v7 )
    {
      CemRcObjectDereference((_QWORD *)v7);
      v7 = v29;
    }
  }
  IsDynamicKey = PsmIsDynamicKey(a2, v11, v12);
  v15 = IsDynamicKey;
  if ( !IsDynamicKey )
    v5 = (struct _HAM_RC_TREE_NODE *)CemRcTableFind(
                                       v7 + 40,
                                       (__int64)a2,
                                       (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareApplicationByKey);
  if ( !v5 )
  {
    v16 = (struct _HAM_RC_TREE_NODE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
    v5 = v16;
    if ( !v16 )
      goto LABEL_3;
    memset_0(v16, 0, 0x228uLL);
    HamRcNodeInitialize(
      (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
      (struct _HAM_RC_TREE_NODE *)v7,
      v5);
    v17 = 3LL;
    v18 = (_OWORD *)((char *)v5 + 88);
    v19 = a2;
    do
    {
      *v18 = *(_OWORD *)v19;
      v18[1] = *((_OWORD *)v19 + 1);
      v18[2] = *((_OWORD *)v19 + 2);
      v18[3] = *((_OWORD *)v19 + 3);
      v18[4] = *((_OWORD *)v19 + 4);
      v18[5] = *((_OWORD *)v19 + 5);
      v18[6] = *((_OWORD *)v19 + 6);
      v18 += 8;
      v20 = *((_OWORD *)v19 + 7);
      v19 = (struct _HAM_HOSTID_STORE_KEY *)((char *)v19 + 128);
      *(v18 - 1) = v20;
      --v17;
    }
    while ( v17 );
    *v18 = *(_OWORD *)v19;
    v18[1] = *((_OWORD *)v19 + 1);
    v18[2] = *((_OWORD *)v19 + 2);
    v18[3] = *((_OWORD *)v19 + 3);
    v18[4] = *((_OWORD *)v19 + 4);
    CemRcTableFindOrInsertEx(
      v7 + 40,
      (__int64)a2,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareApplicationByKey,
      (unsigned __int64)v5,
      v26,
      (unsigned __int64 *)&v31);
    if ( v31 != v5 )
    {
      CemRcObjectDereference(v5);
      v5 = v31;
    }
  }
  if ( !v15 )
    v6 = (_QWORD *)CemRcTableFind(
                     (unsigned __int64)v5 + 40,
                     (__int64)a2,
                     (__int64 (__fastcall *)(__int64, __int64))HampHostIdStoreCompareLeafByKey);
  if ( v6 )
  {
    v24 = v6[11];
  }
  else
  {
    v21 = (struct _HAM_HOSTID_STORE_LEAF_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x268uLL);
    v6 = v21;
    if ( !v21 )
      goto LABEL_3;
    HampHostIdStoreLeafInitialize(v5, a2, v21);
    CemRcTableFindOrInsertEx(
      (__int64)v5 + 40,
      (__int64)a2,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareLeafByKey,
      (unsigned __int64)v6,
      v26,
      v27);
    v22 = v27[0];
    if ( (_QWORD *)v27[0] == v6 )
    {
      v23 = v6 + 11;
      v6 = 0LL;
      v24 = *v23;
    }
    else
    {
      CemRcObjectDereference(v6);
      v24 = *(_QWORD *)(v22 + 88);
      v6 = (_QWORD *)v22;
    }
  }
  v10 = 0;
  *v30 = v24;
LABEL_27:
  HampHostIdStoreReleaseLockShared(a1);
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v5 )
    CemRcObjectDereference(v5);
  if ( v7 )
    CemRcObjectDereference((_QWORD *)v7);
  if ( v8 )
    CemRcObjectDereference((_QWORD *)v8);
  return v10;
}
