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
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // ebp
  __int64 *v13; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&qword_180163680);
  v5 = sub_18007DD8C(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&qword_180163680);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  v7 = sub_18007DD8C(v4);
  if ( v7 )
  {
    v15 = *(_QWORD *)(v7 + 8);
    v14 = *(_QWORD *)(v7 + 16);
LABEL_6:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 144LL);
    v11 = Heap;
    if ( Heap )
    {
      v5 = Heap + 24;
      v12 = sub_180089B20(a1, v15, v14, Heap + 24);
      if ( v12 >= 0 )
      {
        *(_DWORD *)(v11 + 16) = a1;
        v13 = (__int64 *)off_18015F608[0];
        if ( *(_UNKNOWN ***)off_18015F608[0] != &off_18015F600 )
          __fastfail(3u);
        *(_QWORD *)v11 = &off_18015F600;
        *(_QWORD *)(v11 + 8) = v13;
        *v13 = v11;
        off_18015F608[0] = (_UNKNOWN **)v11;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      NlsSectionPtr = v12;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_14;
  }
  v8 = a1;
  LODWORD(v8) = a1 & 0xFFFFFEFF;
  NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8, 0LL, &v15, &v14);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_6;
LABEL_14:
  RtlReleaseSRWLockExclusive(&qword_180163680);
  return (unsigned int)NlsSectionPtr;
}
