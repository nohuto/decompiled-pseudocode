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
  v7 = sub_18007C0A8();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_180166380);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v8 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 0);
      if ( v8 == -1 )
        goto LABEL_43;
      *(_DWORD *)qword_18017A288 = v8 + 1;
      RtlReleaseSRWLockExclusive(&qword_180165010);
    }
    v9 = Base;
    if ( Base )
    {
      v10 = (char *)bsearch(
                      Key,
                      Base,
                      (unsigned int)NumOfElements,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)sub_180075A40);
      v9 = Base;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
      goto LABEL_22;
    if ( v9 && (_DWORD)NumOfElements + 1 != dword_18017A2CC )
    {
      sub_180035F18(0);
      Heap = (char *)Base;
LABEL_21:
      v10 = &Heap[24 * (unsigned int)NumOfElements];
      LODWORD(NumOfElements) = NumOfElements + 1;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *(_OWORD *)v10 = *Key;
      sub_180035F18(1);
      v9 = Base;
      v6 = 1;
LABEL_22:
      v15 = *((_QWORD *)v10 + 2);
      *((_QWORD *)v10 + 2) = a2;
      if ( a3 )
        *a3 = v15;
      if ( v6 )
        qsort(v9, (unsigned int)NumOfElements, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)sub_180075A40);
      v7 = 0;
      goto LABEL_27;
    }
    v11 = 16;
    if ( dword_18017A2CC )
      v11 = 2 * dword_18017A2CC;
    if ( v11 >= dword_18017A2CC && v11 < 0xAAAAAAA )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        if ( 24 * (unsigned __int64)v11 >= 0xFF000 )
          goto LABEL_42;
        ProcessHeap = (void *)qword_18017A278;
      }
      else
      {
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      }
      Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v11);
      if ( Heap )
      {
        sub_180035F18(0);
        v14 = Base;
        if ( Base )
        {
          memmove(Heap, Base, 24LL * (unsigned int)NumOfElements);
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
            v18 = (void *)qword_18017A278;
          else
            v18 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap((__int64)v18, 0, (__int64)v14);
        }
        Base = Heap;
        dword_18017A2CC = v11;
        goto LABEL_21;
      }
    }
LABEL_42:
    v7 = -1073741801;
LABEL_27:
    if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    {
LABEL_32:
      RtlReleaseSRWLockExclusive(&qword_180166380);
      return (unsigned int)v7;
    }
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v16 = *(_DWORD *)qword_18017A288;
    if ( *(_DWORD *)qword_18017A288 )
    {
      *(_DWORD *)qword_18017A288 = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 1);
      RtlReleaseSRWLockExclusive(&qword_180165010);
      goto LABEL_32;
    }
LABEL_43:
    RtlReleaseSRWLockExclusive(&qword_180165010);
    __fastfail(0xEu);
  }
  return (unsigned int)v7;
}
