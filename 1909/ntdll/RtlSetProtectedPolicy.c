/*
 * XREFs of RtlSetProtectedPolicy @ 0x18007F730
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x18008F8C0 (bsearch.c)
 *     qsort @ 0x180090CE0 (qsort.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  void *v9; // rax
  char *v10; // rbx
  unsigned int v11; // ebx
  void *ProcessHeap; // rcx
  char *Heap; // rsi
  void *v14; // rdi
  __int64 v15; // rcx
  int v16; // edx
  void *v18; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      if ( v8 == -1 )
        goto LABEL_43;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v9 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v10 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v9 = RtlpProtectedPolicies;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
      goto LABEL_22;
    if ( v9 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_21:
      v10 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *(_OWORD *)v10 = *Key;
      LdrProtectMrdata(1);
      v9 = RtlpProtectedPolicies;
      v6 = 1;
LABEL_22:
      v15 = *((_QWORD *)v10 + 2);
      *((_QWORD *)v10 + 2) = a2;
      if ( a3 )
        *a3 = v15;
      if ( v6 )
        qsort(
          v9,
          (unsigned int)RtlpProtectedPoliciesActiveCount,
          0x18uLL,
          (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v7 = 0;
      goto LABEL_27;
    }
    v11 = 16;
    if ( RtlpProtectedPoliciesTotalCount )
      v11 = 2 * RtlpProtectedPoliciesTotalCount;
    if ( v11 >= RtlpProtectedPoliciesTotalCount && v11 < 0xAAAAAAA )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        if ( 24 * (unsigned __int64)v11 >= 0xFF000 )
          goto LABEL_42;
        ProcessHeap = (void *)LdrpMrdataHeap;
      }
      else
      {
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      }
      Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v11);
      if ( Heap )
      {
        LdrProtectMrdata(0);
        v14 = RtlpProtectedPolicies;
        if ( RtlpProtectedPolicies )
        {
          memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
            v18 = (void *)LdrpMrdataHeap;
          else
            v18 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap((__int64)v18, 0, (__int64)v14);
        }
        RtlpProtectedPolicies = Heap;
        RtlpProtectedPoliciesTotalCount = v11;
        goto LABEL_21;
      }
    }
LABEL_42:
    v7 = -1073741801;
LABEL_27:
    if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    {
LABEL_32:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v7;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_32;
    }
LABEL_43:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v7;
}
