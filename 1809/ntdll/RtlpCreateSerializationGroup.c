/*
 * XREFs of RtlpCreateSerializationGroup @ 0x18005C388
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

volatile signed __int32 *__fastcall RtlpCreateSerializationGroup(int a1)
{
  _QWORD *i; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *result; // rax
  _RTL_SRWLOCK *v5; // rcx
  _RTL_SRWLOCK *v6; // r8
  __int64 v7; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 **v10; // rdx
  __int64 *v11; // rcx

  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 48));
  for ( i = *(_QWORD **)(qword_1801660D0 + 32); i != (_QWORD *)(qword_1801660D0 + 32); i = (_QWORD *)*i )
  {
    v3 = (volatile signed __int32 *)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement(v3 + 8);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 48));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 48));
  result = (volatile signed __int32 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = result;
  if ( result )
  {
    memset((void *)result, 0, 0x28uLL);
    v5 = (_RTL_SRWLOCK *)qword_1801660D0;
    *v3 = 2623763;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 1) = a1;
    *((_DWORD *)v3 + 8) = 1;
    RtlAcquireSRWLockExclusive(v5 + 6);
    v6 = (_RTL_SRWLOCK *)qword_1801660D0;
    v7 = qword_1801660D0 + 32;
    for ( j = *(_QWORD **)(qword_1801660D0 + 32); j != (_QWORD *)v7; j = (_QWORD *)*j )
    {
      v9 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v9 + 8);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801660D0 + 48));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v3);
        return v9;
      }
    }
    v10 = *(__int64 ***)(qword_1801660D0 + 40);
    v11 = (__int64 *)(v3 + 2);
    if ( *v10 != (__int64 *)v7 )
      __fastfail(3u);
    *v11 = v7;
    *((_QWORD *)v3 + 2) = v10;
    *v10 = v11;
    *(_QWORD *)(v7 + 8) = v11;
    RtlReleaseSRWLockExclusive(v6 + 6);
    return v3;
  }
  return result;
}
