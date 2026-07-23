/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18005E058
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18005DF40 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E00E0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005E1EC (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A2050 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *BaseAddress, int a2)
{
  ULONG v4; // esi
  int v5; // r15d
  _QWORD *i; // rcx
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  _RTL_SRWLOCK *v12; // rcx
  __int64 *v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // r8

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 8));
  for ( i = *(_QWORD **)(qword_1801660D0 + 16); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(qword_1801660D0 + 16) )
      goto LABEL_24;
    v7 = i - 4;
    if ( *(i - 2) == *(_QWORD *)&BaseAddress[1] && v7[1] == *BaseAddress )
      break;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  v8 = *((_DWORD *)v7 + 32);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_8;
    v12 = (_RTL_SRWLOCK *)(v7 + 7);
    if ( !a2 )
    {
      v7[15] = BaseAddress;
      RtlReleaseSRWLockExclusive(v12);
      v4 = 259;
      goto LABEL_24;
    }
LABEL_27:
    RtlReleaseSRWLockExclusive(v12);
    v4 = 128;
LABEL_24:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 8));
    goto LABEL_22;
  }
  if ( a2 )
  {
    v12 = (_RTL_SRWLOCK *)(v7 + 7);
    goto LABEL_27;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7[15]);
  v7[15] = 0LL;
  *((_DWORD *)v7 + 32) = 0;
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 8));
  v9 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(BaseAddress, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !v7[15] )
      break;
    BaseAddress = (_WNF_STATE_NAME *)v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  }
  if ( v4 )
  {
    v13 = (__int64 *)*v9;
    v14 = 1;
    v7[15] = BaseAddress;
    v15 = 0LL;
    for ( *((_DWORD *)v7 + 32) = 2; v13 != v9; v13 = (__int64 *)*v13 )
    {
      if ( (*((_BYTE *)v13 + 52) & 4) != 0 && *((_DWORD *)v13 + 28) )
      {
        if ( !v15 || v15 > v13[15] )
          v15 = v13[15];
        if ( *((_DWORD *)v13 + 32) < *(_DWORD *)(qword_1801660D0 + 72) )
          v14 = 0;
      }
    }
    v7[17] = v15;
    *((_DWORD *)v7 + 36) = v14;
  }
  else
  {
    *((_DWORD *)v7 + 32) = 0;
    if ( !*((_DWORD *)v7 + 6) || (signed int)(BaseAddress[2].Data[0] - *((_DWORD *)v7 + 6)) > 0 )
      *((_DWORD *)v7 + 6) = BaseAddress[2].Data[0];
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlpDecRefWnfNameSubscription(v7);
LABEL_22:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(BaseAddress + 1, (ULONG64 *)BaseAddress, BaseAddress[3].Data[0], v4, 0LL, 0);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 128;
  }
  return v4;
}
