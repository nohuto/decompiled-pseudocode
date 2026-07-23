/*
 * XREFs of RtlSetProtectedPolicy @ 0x180083740
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
 *     bsearch @ 0x180092940 (bsearch.c)
 *     qsort @ 0x180093DA0 (qsort.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  PVOID v8; // rax
  GUID *v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  PVOID ProcessHeap; // rcx
  char *Heap; // rsi
  PVOID v14; // rdi
  unsigned __int64 v15; // rcx
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  PVOID v20; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 < 0 )
    return v7;
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v17 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v17 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v8 = RtlpProtectedPolicies;
  if ( RtlpProtectedPolicies )
  {
    v9 = (GUID *)bsearch(
                   PolicyGuid,
                   RtlpProtectedPolicies,
                   (unsigned int)RtlpProtectedPoliciesActiveCount,
                   0x18uLL,
                   (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v8 = RtlpProtectedPolicies;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    goto LABEL_18;
  if ( v8 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_17:
    v9 = (GUID *)&Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    *(_QWORD *)&v9->Data1 = 0LL;
    *(_QWORD *)v9->Data4 = 0LL;
    *(_QWORD *)&v9[1].Data1 = 0LL;
    *v9 = *PolicyGuid;
    LdrProtectMrdata(1);
    v8 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_18:
    v15 = *(_QWORD *)&v9[1].Data1;
    *(_QWORD *)&v9[1].Data1 = PolicyValue;
    if ( OldPolicyValue )
      *OldPolicyValue = v15;
    if ( v6 )
      qsort(
        v8,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v7 = 0;
    goto LABEL_23;
  }
  v10 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v10 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v10 >= RtlpProtectedPoliciesTotalCount && v10 < 0xAAAAAAA )
  {
    LOBYTE(v11) = LdrControlFlowGuardEnforced();
    if ( v11 )
    {
      if ( 24 * (unsigned __int64)v10 >= 0xFF000 )
        goto LABEL_45;
      ProcessHeap = LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v10);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v14 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        LOBYTE(v19) = LdrControlFlowGuardEnforced();
        if ( v19 )
          v20 = LdrpMrdataHeap;
        else
          v20 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v20, 0, v14);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v10;
      goto LABEL_17;
    }
  }
LABEL_45:
  v7 = -1073741801;
LABEL_23:
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v18 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v18 - 1;
    if ( v18 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return v7;
}
