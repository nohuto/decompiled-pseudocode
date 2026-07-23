/*
 * XREFs of sub_18007DC6C @ 0x18007DC6C
 * Callers:
 *     RtlNormalizeString @ 0x18007D7F0 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800FA250 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007DD8C @ 0x18007DD8C (sub_18007DD8C.c)
 *     sub_180089B20 @ 0x180089B20 (sub_180089B20.c)
 *     ZwGetNlsSectionPtr @ 0x18009E550 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall sub_18007DC6C(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *Heap; // rax
  char *v10; // rbx
  int v11; // ebp
  _QWORD *v12; // rax
  __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&stru_180163680);
  v5 = sub_18007DD8C(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&stru_180163680);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  v7 = sub_18007DD8C(v4);
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
      v11 = sub_180089B20(a1, SectionPointer, SectionSize, Heap + 24);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_18015F608[0];
        if ( *(_UNKNOWN ***)off_18015F608[0] != &off_18015F600 )
          __fastfail(3u);
        *(_QWORD *)v10 = &off_18015F600;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_18015F608[0] = (_UNKNOWN **)v10;
        goto LABEL_3;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = v11;
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
  RtlReleaseSRWLockExclusive(&stru_180163680);
  return (unsigned int)NlsSectionPtr;
}
