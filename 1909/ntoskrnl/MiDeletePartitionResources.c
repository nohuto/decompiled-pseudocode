/*
 * XREFs of MiDeletePartitionResources @ 0x1402E9CB8
 * Callers:
 *     MiDeletePartition @ 0x1402C9994 (MiDeletePartition.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiUnlinkWorkingSet @ 0x14008E63C (MiUnlinkWorkingSet.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400C5490 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400C57C0 (MiLockDynamicMemoryExclusive.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1400D6100 (ExFreeCacheAwareRundownProtection.c)
 *     ExReleaseSpinLockExclusive @ 0x140109E70 (ExReleaseSpinLockExclusive.c)
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 *     MiIncreaseCommitLimits @ 0x140193294 (MiIncreaseCommitLimits.c)
 *     ZwWaitForSingleObject @ 0x1401C0CD0 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcExitPartition @ 0x14027EDAC (CcExitPartition.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x1402BE828 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiEnumerateSlabAllocators @ 0x1402DB63C (MiEnumerateSlabAllocators.c)
 *     MiFreeClonePool @ 0x1402E4088 (MiFreeClonePool.c)
 *     MiMergePageNodes @ 0x1402EAF70 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x14088C710 (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x14089B570 (MiDeletePfnBitMaps.c)
 *     MiFreePartitionPhysicalPages @ 0x14089C078 (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x14089C3A4 (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  _QWORD *v2; // rcx
  HANDLE *v3; // rbx
  void *v4; // rcx
  PVOID v5; // rcx
  __int64 v6; // r14
  HANDLE v7; // rsi
  ULONG_PTR v8; // rbx
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 **v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rax
  unsigned __int64 *j; // rbx
  unsigned __int64 **v15; // rax
  unsigned __int64 *v16; // rsi
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // rcx
  KIRQL v19; // al
  unsigned __int64 *v20; // rcx
  KIRQL v21; // r13
  unsigned __int64 *i; // rbx
  unsigned __int64 **v23; // rax
  unsigned __int64 *v24; // r14
  unsigned __int64 *v25; // rcx
  unsigned __int64 *v26; // rcx
  _QWORD *v27; // rdx
  bool v28; // r8
  _QWORD *v29; // rax
  unsigned __int64 *v30; // rax
  unsigned __int64 *k; // rbx
  unsigned __int64 **v32; // rax
  unsigned __int64 *v33; // rsi
  unsigned __int64 *v34; // rcx
  unsigned __int64 *v35; // rcx
  void *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rbx
  void *v41; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v46; // [rsp+90h] [rbp+40h] BYREF
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF
  struct _KTHREAD *v48; // [rsp+A0h] [rbp+50h]

  v2 = *(_QWORD **)(a1 + 168);
  v46 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CcExitPartition(v2, 1);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  if ( *(_BYTE *)(a1 + 7900) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 0x2000, 0LL);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(a1 + 8304));
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), *(_QWORD *)(a1 + 8304));
  }
  v3 = (HANDLE *)(a1 + 128);
  v4 = *(void **)(a1 + 128);
  if ( v4 )
  {
    ObReferenceObjectByHandle(v4, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
    v5 = Object;
    *(_BYTE *)(a1 + 7321) = 1;
    KeSetActualBasePriorityThread((__int64)v5, 12LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObject(Object);
  }
  v6 = 5LL;
  do
  {
    v7 = *v3;
    if ( *v3 )
    {
      ZwWaitForSingleObject(*v3, 0, 0LL);
      ObCloseHandle(v7, 0);
    }
    ++v3;
    --v6;
  }
  while ( v6 );
  MiFreeClonePool((_SLIST_HEADER *)a1);
  v8 = *(_QWORD *)(a1 + 7888);
  v9 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  *(_QWORD *)(a1 + 8552) -= MiDeletePagingFiles(a1);
  MiEnumerateSlabAllocators(
    a1,
    (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiDeleteSlabAllocator,
    0LL);
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL) + 184LL, 0LL);
  if ( *(_QWORD *)(a1 + 4032) + *(_QWORD *)(a1 + 8128) != v8 )
    KeBugCheckEx(0x1Au, 0x41003uLL, v8, *(_QWORD *)(a1 + 8128), *(_QWORD *)(a1 + 4032));
  MiFreePartitionPhysicalPages(a1);
  if ( *(_QWORD *)(a1 + 8064) )
    KeBugCheckEx(0x1Au, 0x41004uLL, v8, *(_QWORD *)(a1 + 8064), *(_QWORD *)(a1 + 4032));
  if ( (ULONG_PTR *)v9 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 8128));
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8128), *(_QWORD *)(a1 + 8128));
  v11 = (unsigned __int64 **)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 8552) - *(_QWORD *)(a1 + 8424);
  if ( (ULONG_PTR *)v9 != &MiSystemPartition )
  {
    MiIncreaseCommitLimits(v9, v12, v12, 0, 0LL);
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 192));
    v20 = *v11;
    v21 = v19;
    i = 0LL;
    while ( v20 )
    {
      i = v20;
      v20 = (unsigned __int64 *)*v20;
    }
    if ( !i )
    {
LABEL_55:
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 192), v21);
      MiMakePartitionMemoryBlock(v9);
      goto LABEL_56;
    }
LABEL_37:
    v23 = (unsigned __int64 **)i[1];
    v24 = i;
    v25 = i;
    if ( v23 )
    {
      v26 = *v23;
      for ( i = (unsigned __int64 *)i[1]; v26; v26 = (unsigned __int64 *)*v26 )
        i = v26;
    }
    else
    {
      while ( 1 )
      {
        i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (unsigned __int64 *)*i == v25 )
          break;
        v25 = i;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v24);
    if ( (unsigned int)MiMergePageNodes(v9, v24) != 1 )
      goto LABEL_53;
    v27 = v46;
    v28 = 0;
    if ( !v46 )
      goto LABEL_52;
    while ( 1 )
    {
      if ( (v24[3] & 0x7FFFFFFFFFFFFFFFLL) < (v27[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v29 = (_QWORD *)*v27;
        if ( !*v27 )
        {
          v28 = 0;
LABEL_52:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v46, (unsigned __int64)v27, v28, v24);
LABEL_53:
          if ( !i )
          {
            CurrentThread = v48;
            goto LABEL_55;
          }
          goto LABEL_37;
        }
      }
      else
      {
        v29 = (_QWORD *)v27[1];
        if ( !v29 )
        {
          v28 = 1;
          goto LABEL_52;
        }
      }
      v27 = v29;
    }
  }
  MiReturnCommit(v9, v12);
  _InterlockedExchangeAdd64(&qword_140466738, -(__int64)v12);
  v13 = *v11;
  j = 0LL;
  while ( v13 )
  {
    j = v13;
    v13 = (unsigned __int64 *)*v13;
  }
  while ( j )
  {
    v15 = (unsigned __int64 **)j[1];
    v16 = j;
    v17 = j;
    if ( v15 )
    {
      v18 = *v15;
      for ( j = (unsigned __int64 *)j[1]; v18; v18 = (unsigned __int64 *)*v18 )
        j = v18;
    }
    else
    {
      while ( 1 )
      {
        j = (unsigned __int64 *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !j || (unsigned __int64 *)*j == v17 )
          break;
        v17 = j;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v16);
    ExFreePoolWithTag((PVOID)v16[5], 0);
    ExFreePoolWithTag(v16, 0);
  }
LABEL_56:
  MiUnlockDynamicMemoryNestedParentExclusive(a1);
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v30 = v46;
  k = 0LL;
  while ( v30 )
  {
    k = v30;
    v30 = (unsigned __int64 *)*v30;
  }
  while ( k )
  {
    v32 = (unsigned __int64 **)k[1];
    v33 = k;
    v34 = k;
    if ( v32 )
    {
      v35 = *v32;
      for ( k = (unsigned __int64 *)k[1]; v35; v35 = (unsigned __int64 *)*v35 )
        k = v35;
    }
    else
    {
      while ( 1 )
      {
        k = (unsigned __int64 *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || (unsigned __int64 *)*k == v34 )
          break;
        v34 = k;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v46, v33);
    ExFreePoolWithTag((PVOID)v33[5], 0);
    ExFreePoolWithTag(v33, 0);
  }
  v36 = *(void **)(a1 + 7800);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(a1 + 7800) = 0LL;
  }
  v37 = *(_QWORD *)(a1 + 96);
  if ( v37 )
    MiDereferencePageRunsEx(v37, 0);
  v38 = *(_QWORD *)(a1 + 32);
  if ( v38 )
    MiDereferencePageRunsEx(v38, 0);
  MiDeletePfnBitMaps(a1);
  v39 = 11LL;
  v40 = a1 + 240;
  do
  {
    v41 = *(void **)(v40 + 88);
    if ( v41 )
      ObCloseHandle(v41, 0);
    if ( *(_QWORD *)v40 != a1 + 200 )
      ObfDereferenceObject(*(PVOID *)v40);
    v40 += 8LL;
    --v39;
  }
  while ( v39 );
  v42 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2080);
  if ( v42 )
    ExFreeCacheAwareRundownProtection(v42);
  v43 = *(void **)(a1 + 232);
  if ( v43 )
    ObCloseHandle(v43, 0);
  v44 = *(void **)(a1 + 224);
  if ( v44 )
    ObCloseHandle(v44, 0);
}
