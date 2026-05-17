/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x1800589C0
 * Callers:
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWakeSingle @ 0x180058B6C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180058D74 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableSRW(signed __int64 *a1, volatile signed __int64 *a2, __int64 a3, int a4)
{
  signed __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rax
  char *v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  int i; // eax
  unsigned int v15; // ebx
  unsigned __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  signed __int32 v22; // [rsp+44h] [rbp-24h] BYREF
  volatile signed __int64 *v23; // [rsp+48h] [rbp-20h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v20 = 0LL;
  v22 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v23 = a2;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    v22 = 3;
  while ( 1 )
  {
    v9 = (unsigned __int64)&v18 | v7 & 0xF;
    v18 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v19 = 0LL;
    else
      v19 = &v18;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 |= 8uLL;
    v10 = _InterlockedCompareExchange64(a1, v9, v7);
    if ( v7 == v10 )
      break;
    v7 = v10;
  }
  if ( (a4 & 1) != 0 )
    RtlReleaseSRWLockShared(a2);
  else
    RtlReleaseSRWLockExclusive(a2);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v9) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v9);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v22 & 2) == 0 )
      break;
    _mm_pause();
  }
  v15 = 0;
  if ( _interlockedbittestandreset(&v22, 1u) )
  {
    v15 = NtWaitForAlertByThreadId(a2, a3);
    if ( v15 == 258 )
      goto LABEL_18;
  }
  else
  {
    _InterlockedOr(&v22, 4u);
  }
  if ( (v22 & 4) != 0 )
    goto LABEL_25;
LABEL_18:
  if ( !(unsigned __int8)RtlpWakeSingle(a1, &v18) )
  {
    do
      NtWaitForAlertByThreadId(a2, 0LL);
    while ( (v22 & 4) == 0 );
    goto LABEL_25;
  }
  if ( v15 != 258 )
LABEL_25:
    v15 = 0;
  if ( v8 )
    RtlAcquireSRWLockShared(a2, v11, (__int64)v12, v13);
  else
    RtlAcquireSRWLockExclusive((unsigned __int64)a2, (unsigned __int64)v11, v12, v13);
  return v15;
}
