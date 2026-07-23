/*
 * XREFs of RtlSetProtectedPolicy @ 0x18007F090
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     bsearch @ 0x18008F220 (bsearch.c)
 *     qsort @ 0x180090640 (qsort.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  PVOID v10; // rax
  GUID *v11; // rbx
  unsigned int v12; // ebx
  int v13; // eax
  PVOID ProcessHeap; // rcx
  char *Heap; // rsi
  PVOID v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v21; // eax
  PVOID v22; // rcx

  v6 = 0;
  v7 = sub_18007C0A8();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_180166380);
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v9 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        RtlProtectHeap(qword_18017A278, 0);
      if ( v9 == -1 )
        goto LABEL_43;
      *(_DWORD *)qword_18017A288 = v9 + 1;
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
    v10 = Base;
    if ( Base )
    {
      v11 = (GUID *)bsearch(
                      PolicyGuid,
                      Base,
                      (unsigned int)NumOfElements,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)sub_180075A40);
      v10 = Base;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
      goto LABEL_22;
    if ( v10 && (_DWORD)NumOfElements + 1 != dword_18017A2CC )
    {
      sub_180035F18(0);
      Heap = (char *)Base;
LABEL_21:
      v11 = (GUID *)&Heap[24 * (unsigned int)NumOfElements];
      LODWORD(NumOfElements) = NumOfElements + 1;
      *(_QWORD *)&v11->Data1 = 0LL;
      *(_QWORD *)v11->Data4 = 0LL;
      *(_QWORD *)&v11[1].Data1 = 0LL;
      *v11 = *PolicyGuid;
      sub_180035F18(1);
      v10 = Base;
      v6 = 1;
LABEL_22:
      v17 = *(_QWORD *)&v11[1].Data1;
      *(_QWORD *)&v11[1].Data1 = PolicyValue;
      if ( OldPolicyValue )
        *OldPolicyValue = v17;
      if ( v6 )
        qsort(v10, (unsigned int)NumOfElements, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)sub_180075A40);
      v7 = 0;
      goto LABEL_27;
    }
    v12 = 16;
    if ( dword_18017A2CC )
      v12 = 2 * dword_18017A2CC;
    if ( v12 >= dword_18017A2CC && v12 < 0xAAAAAAA )
    {
      LOBYTE(v13) = LdrControlFlowGuardEnforced();
      if ( v13 )
      {
        if ( 24 * (unsigned __int64)v12 >= 0xFF000 )
          goto LABEL_42;
        ProcessHeap = qword_18017A278;
      }
      else
      {
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      }
      Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v12);
      if ( Heap )
      {
        sub_180035F18(0);
        v16 = Base;
        if ( Base )
        {
          memmove(Heap, Base, 24LL * (unsigned int)NumOfElements);
          LOBYTE(v21) = LdrControlFlowGuardEnforced();
          if ( v21 )
            v22 = qword_18017A278;
          else
            v22 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap(v22, 0, v16);
        }
        Base = Heap;
        dword_18017A2CC = v12;
        goto LABEL_21;
      }
    }
LABEL_42:
    v7 = -1073741801;
LABEL_27:
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( !v18 )
    {
LABEL_32:
      RtlReleaseSRWLockExclusive(&stru_180166380);
      return v7;
    }
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v19 = *(_DWORD *)qword_18017A288;
    if ( *(_DWORD *)qword_18017A288 )
    {
      *(_DWORD *)qword_18017A288 = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(qword_18017A278, 1u);
      RtlReleaseSRWLockExclusive(&stru_180165010);
      goto LABEL_32;
    }
LABEL_43:
    RtlReleaseSRWLockExclusive(&stru_180165010);
    __fastfail(0xEu);
  }
  return v7;
}
