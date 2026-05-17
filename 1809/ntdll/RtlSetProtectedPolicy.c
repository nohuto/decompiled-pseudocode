/*
 * XREFs of RtlSetProtectedPolicy @ 0x180083730
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     bsearch @ 0x180092930 (bsearch.c)
 *     qsort @ 0x180093D90 (qsort.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  char *v15; // rbx
  unsigned int v16; // ebx
  void *ProcessHeap; // rcx
  char *Heap; // rsi
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // ebx
  int v26; // ecx
  void *v27; // rcx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 < 0 )
    return (unsigned int)v8;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v7, v9, v10);
  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v25 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v25 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v14 = RtlpProtectedPolicies;
  if ( RtlpProtectedPolicies )
  {
    v15 = (char *)bsearch(
                    Key,
                    RtlpProtectedPolicies,
                    (unsigned int)RtlpProtectedPoliciesActiveCount,
                    0x18uLL,
                    (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v14 = RtlpProtectedPolicies;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
    goto LABEL_18;
  if ( v14 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0, v11, v12, v13);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_17:
    v15 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    v22 = (unsigned int)RtlpProtectedPoliciesActiveCount;
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *(_OWORD *)v15 = *Key;
    LdrProtectMrdata(1, v22, v19, v20);
    v14 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_18:
    v23 = *((_QWORD *)v15 + 2);
    *((_QWORD *)v15 + 2) = a2;
    if ( a3 )
      *a3 = v23;
    if ( v6 )
      qsort(
        v14,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v8 = 0;
    goto LABEL_23;
  }
  v16 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v16 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v16 >= RtlpProtectedPoliciesTotalCount && v16 < 0xAAAAAAA )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v16 >= 0xFF000 )
        goto LABEL_45;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v16);
    if ( Heap )
    {
      LdrProtectMrdata(0, v11, v12, v13);
      v21 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
          v27 = (void *)LdrpMrdataHeap;
        else
          v27 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v27, 0, (unsigned __int64)v21);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v16;
      goto LABEL_17;
    }
  }
LABEL_45:
  v8 = -1073741801;
LABEL_23:
  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
    if ( v26 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return (unsigned int)v8;
}
