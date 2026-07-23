/*
 * XREFs of RtlpGetNormalization @ 0x180083E54
 * Callers:
 *     RtlNormalizeString @ 0x180083A10 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800FD050 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NormalizationList__Lookup @ 0x180083F74 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x180083FA4 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x1800A2150 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *Heap; // rax
  char *v10; // rbx
  int Tables; // ebp
  _QWORD *v12; // rax
  __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
  v5 = NormalizationList__Lookup(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&NormalizationListLock);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  v7 = NormalizationList__Lookup(v4);
  if ( v7 )
  {
    SectionPointer = *(PVOID *)(v7 + 8);
    SectionSize = *(_QWORD *)(v7 + 16);
LABEL_6:
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap;
    if ( Heap )
    {
      v5 = (__int64)(Heap + 24);
      Tables = Normalization__LoadTables(a1, SectionPointer, SectionSize, Heap + 24);
      if ( Tables >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_18015F6D8[0];
        if ( *(_UNKNOWN ***)off_18015F6D8[0] != &NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &NormalizationListHead;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_18015F6D8[0] = (_UNKNOWN **)v10;
        goto LABEL_3;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_14;
  }
  NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_6;
LABEL_14:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
