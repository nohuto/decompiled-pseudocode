/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x1800066EC
 * Callers:
 *     RtlpWnfNotificationThread @ 0x1800065D0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008C460 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180006950 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x180006ECC (RtlpDecRefWnfNameSubscription.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x18009EC00 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared(qword_180166090 + 8);
  v6 = *(_QWORD **)(qword_180166090 + 16);
  if ( v6 == (_QWORD *)(qword_180166090 + 16) )
    goto LABEL_5;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v7 = v6 - 4;
    v17 = *(v6 - 2);
    if ( v17 == *(_QWORD *)(a1 + 8) && v7[1] == *(_QWORD *)a1 )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_180166090 + 16) )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive(v7 + 7);
  v8 = *((_DWORD *)v7 + 32);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_9;
    v15 = v7 + 7;
    if ( !a2 )
    {
      v7[15] = a1;
      RtlReleaseSRWLockExclusive(v15);
      v4 = 259;
      goto LABEL_5;
    }
LABEL_39:
    RtlReleaseSRWLockExclusive(v15);
    v4 = 128;
LABEL_5:
    RtlReleaseSRWLockShared(qword_180166090 + 8);
    goto LABEL_23;
  }
  if ( a2 )
  {
    v15 = v7 + 7;
    goto LABEL_39;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7[15]);
  v7[15] = 0LL;
  *((_DWORD *)v7 + 32) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive(v7 + 7);
  RtlReleaseSRWLockShared(qword_180166090 + 8);
  v9 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive(v7 + 7);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !v7[15] )
      break;
    a1 = v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive(v7 + 7);
  }
  if ( v4 )
  {
    v12 = (__int64 *)*v9;
    v13 = 1;
    v7[15] = a1;
    v14 = 0LL;
    for ( *((_DWORD *)v7 + 32) = 2; v12 != v9; v12 = (__int64 *)*v12 )
    {
      if ( (*((_BYTE *)v12 + 52) & 4) != 0 && *((_DWORD *)v12 + 28) )
      {
        if ( !v14 || v14 > v12[15] )
          v14 = v12[15];
        if ( *((_DWORD *)v12 + 32) < *(_DWORD *)(qword_180166090 + 72) )
          v13 = 0;
      }
    }
    v7[17] = v14;
    *((_DWORD *)v7 + 36) = v13;
  }
  else
  {
    *((_DWORD *)v7 + 32) = 0;
    if ( !*((_DWORD *)v7 + 6) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v7 + 6) > 0 )
      *((_DWORD *)v7 + 6) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v7 + 7);
  RtlpDecRefWnfNameSubscription(v7);
LABEL_23:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v4, 0LL, 0, v16, v17);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    return 128;
  }
  return v4;
}
