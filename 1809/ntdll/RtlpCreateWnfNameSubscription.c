/*
 * XREFs of RtlpCreateWnfNameSubscription @ 0x18005C110
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BE4C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpCreateWnfNameSubscription(volatile signed __int32 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _RTL_SRWLOCK *v6; // rbp
  _QWORD *v7; // rdi
  _QWORD *i; // rdx
  volatile signed __int32 *v9; // rcx
  _QWORD *Heap; // rax
  _QWORD *v11; // rsi
  _QWORD *j; // rcx
  volatile signed __int32 *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v3 = qword_1801660D0;
  if ( a3 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(qword_1801660D0 + 8);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 8));
  v7 = (_QWORD *)(v3 + 16);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (volatile signed __int32 *)(i - 4);
    if ( *(i - 2) == a2 )
    {
      _InterlockedIncrement(v9 + 27);
      *a1 = v9;
      RtlReleaseSRWLockShared(v6);
      return 0LL;
    }
  }
  RtlReleaseSRWLockShared(v6);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x98uLL);
  v11 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x98uLL);
    *(_DWORD *)v11 = 9963794;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[2] = a2;
    v11[9] = v11 + 8;
    v11[8] = v11 + 8;
    *((_DWORD *)v11 + 32) = 0;
    v11[15] = 0LL;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 27) = 1;
    RtlAcquireSRWLockExclusive(v6);
    for ( j = (_QWORD *)*v7; j != v7; j = (_QWORD *)*j )
    {
      v13 = (volatile signed __int32 *)(j - 4);
      if ( *(j - 2) == a2 )
      {
        _InterlockedIncrement(v13 + 27);
        *a1 = v13;
        RtlReleaseSRWLockExclusive(v6);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        return 0LL;
      }
    }
    v14 = (_QWORD *)*v7;
    v15 = v11 + 4;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      __fastfail(3u);
    *v15 = v14;
    v11[5] = v7;
    v14[1] = v15;
    *v7 = v15;
    *a1 = (volatile signed __int32 *)v11;
    RtlReleaseSRWLockExclusive(v6);
    return 0LL;
  }
  return 3221225495LL;
}
