/*
 * XREFs of ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180017988
 * Callers:
 *     ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180015760 (-HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x1800108BC (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     CemRcTableFind @ 0x180017DB0 (CemRcTableFind.c)
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x180030BA4 (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180036040 (CemRcTableFindOrInsertEx.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180040548 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampHostIdStoreFindOrCreateIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  DWORD v3; // r15d
  struct _HAM_RC_TREE_NODE *v4; // rsi
  struct _HAM_HOSTID_STORE_LEAF_ENTRY *v5; // rdi
  __int64 v6; // rbp
  _QWORD *Value; // r14
  __int64 v10; // r14
  unsigned __int8 IsDynamicKey; // al
  __int64 v12; // rdx
  int v13; // r12d
  struct _HAM_HOSTID_STORE_LEAF_ENTRY *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  unsigned int v17; // ebx
  struct _HAM_RC_TREE_NODE *v19; // rax
  __int64 v20; // rcx
  _OWORD *v21; // rax
  struct _HAM_HOSTID_STORE_KEY *v22; // rdx
  __int128 v23; // xmm1
  PVOID Heap; // rax
  PVOID v25; // rax
  struct _HAM_HOSTID_STORE_LEAF_ENTRY *v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+90h] [rbp+8h]
  __int64 v28; // [rsp+98h] [rbp+10h]
  struct _HAM_RC_TREE_NODE *v30; // [rsp+A8h] [rbp+20h]

  v3 = HampLockTrackerId;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  v10 = CemRcTableFind((char *)a1 + 56, *((unsigned int *)a2 + 133), HampHostIdStoreCompareSessionByKey);
  if ( !v10 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v10 = (__int64)Heap;
    if ( !Heap )
      goto LABEL_38;
    memset_0(Heap, 0, 0x60uLL);
    HamRcNodeInitializeFromRoot(
      (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
      (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
      (struct _HAM_RC_TREE_NODE *)v10);
    *(_DWORD *)(v10 + 88) = *((_DWORD *)a2 + 133);
    CemRcTableFindOrInsertEx(
      (_DWORD)a1 + 56,
      *((_DWORD *)a2 + 133),
      (unsigned int)HampHostIdStoreCompareSessionByKey,
      v10);
    if ( v27 != v10 )
    {
      CemRcObjectDereference((_QWORD *)v10);
      v10 = v27;
    }
  }
  v6 = CemRcTableFind(v10 + 40, (char *)a2 + 464, HampUserCompareByIdentity);
  if ( !v6 )
  {
    v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
    v6 = (__int64)v25;
    if ( !v25 )
      goto LABEL_38;
    memset_0(v25, 0, 0xA0uLL);
    HamRcNodeInitialize(
      (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
      (struct _HAM_RC_TREE_NODE *)v10,
      (struct _HAM_RC_TREE_NODE *)v6);
    *(_OWORD *)(v6 + 88) = *((_OWORD *)a2 + 29);
    *(_OWORD *)(v6 + 104) = *((_OWORD *)a2 + 30);
    *(_OWORD *)(v6 + 120) = *((_OWORD *)a2 + 31);
    *(_OWORD *)(v6 + 136) = *((_OWORD *)a2 + 32);
    *(_DWORD *)(v6 + 152) = *((_DWORD *)a2 + 132);
    CemRcTableFindOrInsertEx(v10 + 40, (_DWORD)a2 + 464, (unsigned int)HampUserCompareByIdentity, v6);
    if ( v28 != v6 )
    {
      CemRcObjectDereference((_QWORD *)v6);
      v6 = v28;
    }
  }
  IsDynamicKey = PsmIsDynamicKey(a2);
  v13 = IsDynamicKey;
  if ( !IsDynamicKey )
    v4 = (struct _HAM_RC_TREE_NODE *)CemRcTableFind(v6 + 40, a2, HampHostIdStoreCompareApplicationByKey);
  if ( !v4 )
  {
    v19 = (struct _HAM_RC_TREE_NODE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
    v4 = v19;
    if ( !v19 )
      goto LABEL_38;
    memset_0(v19, 0, 0x228uLL);
    HamRcNodeInitialize(
      (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreApplicationDestroy,
      (struct _HAM_RC_TREE_NODE *)v6,
      v4);
    v20 = 3LL;
    v21 = (_OWORD *)((char *)v4 + 88);
    v22 = a2;
    do
    {
      *v21 = *(_OWORD *)v22;
      v21[1] = *((_OWORD *)v22 + 1);
      v21[2] = *((_OWORD *)v22 + 2);
      v21[3] = *((_OWORD *)v22 + 3);
      v21[4] = *((_OWORD *)v22 + 4);
      v21[5] = *((_OWORD *)v22 + 5);
      v21[6] = *((_OWORD *)v22 + 6);
      v21 += 8;
      v23 = *((_OWORD *)v22 + 7);
      v22 = (struct _HAM_HOSTID_STORE_KEY *)((char *)v22 + 128);
      *(v21 - 1) = v23;
      --v20;
    }
    while ( v20 );
    *v21 = *(_OWORD *)v22;
    v21[1] = *((_OWORD *)v22 + 1);
    v21[2] = *((_OWORD *)v22 + 2);
    v21[3] = *((_OWORD *)v22 + 3);
    v21[4] = *((_OWORD *)v22 + 4);
    CemRcTableFindOrInsertEx(v6 + 40, (_DWORD)a2, (unsigned int)HampHostIdStoreCompareApplicationByKey, (_DWORD)v4);
    if ( v30 != v4 )
    {
      CemRcObjectDereference(v4);
      v4 = v30;
    }
  }
  if ( !v13 )
    v5 = (struct _HAM_HOSTID_STORE_LEAF_ENTRY *)CemRcTableFind((char *)v4 + 40, a2, HampHostIdStoreCompareLeafByKey);
  if ( v5 )
  {
    v15 = *((_QWORD *)v5 + 11);
LABEL_16:
    v17 = 0;
    *a3 = v15;
    goto LABEL_17;
  }
  v14 = (struct _HAM_HOSTID_STORE_LEAF_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x268uLL);
  v5 = v14;
  if ( v14 )
  {
    HampHostIdStoreLeafInitialize(v4, a2, v14);
    CemRcTableFindOrInsertEx((_DWORD)v4 + 40, (_DWORD)a2, (unsigned int)HampHostIdStoreCompareLeafByKey, (_DWORD)v5);
    if ( v26 == v5 )
    {
      v16 = (unsigned __int64 *)((char *)v5 + 88);
      v5 = 0LL;
      v15 = *v16;
    }
    else
    {
      CemRcObjectDereference(v5);
      v15 = *((_QWORD *)v26 + 11);
      v5 = v26;
    }
    goto LABEL_16;
  }
LABEL_38:
  v17 = -1073741801;
LABEL_17:
  CempLockTrackerMarkReleased(v15, v12, 11LL);
  RtlReleaseSRWLockShared(a1);
  if ( v5 )
    CemRcObjectDereference(v5);
  if ( v4 )
    CemRcObjectDereference(v4);
  if ( v6 )
    CemRcObjectDereference((_QWORD *)v6);
  if ( v10 )
    CemRcObjectDereference((_QWORD *)v10);
  return v17;
}
