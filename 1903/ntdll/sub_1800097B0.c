/*
 * XREFs of sub_1800097B0 @ 0x1800097B0
 * Callers:
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800097B0(int a1)
{
  _QWORD *i; // rax
  _QWORD *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 **v10; // rdx
  __int64 *v11; // rcx

  RtlAcquireSRWLockShared(qword_180166088 + 48);
  for ( i = *(_QWORD **)(qword_180166088 + 32); i != (_QWORD *)(qword_180166088 + 32); i = (_QWORD *)*i )
  {
    v3 = i - 1;
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v3 + 8);
      RtlReleaseSRWLockShared(qword_180166088 + 48);
      return (__int64)v3;
    }
  }
  RtlReleaseSRWLockShared(qword_180166088 + 48);
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 40LL);
  v3 = (_QWORD *)result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)result = 2623763;
    *(_QWORD *)(result + 24) = 0LL;
    v5 = qword_180166088 + 48;
    *(_DWORD *)(result + 4) = a1;
    *(_DWORD *)(result + 32) = 1;
    RtlAcquireSRWLockExclusive(v5);
    v6 = qword_180166088;
    v7 = qword_180166088 + 32;
    for ( j = *(_QWORD **)(qword_180166088 + 32); j != (_QWORD *)v7; j = (_QWORD *)*j )
    {
      v9 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v9 + 8);
        RtlReleaseSRWLockExclusive(qword_180166088 + 48);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
        return (__int64)v9;
      }
    }
    v10 = *(__int64 ***)(qword_180166088 + 40);
    v11 = v3 + 1;
    if ( *v10 != (__int64 *)v7 )
      __fastfail(3u);
    *v11 = v7;
    v3[2] = v10;
    *v10 = v11;
    *(_QWORD *)(v7 + 8) = v11;
    RtlReleaseSRWLockExclusive(v6 + 48);
    return (__int64)v3;
  }
  return result;
}
