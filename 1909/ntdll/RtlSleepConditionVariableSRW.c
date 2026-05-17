/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180060B80
 * Callers:
 *     TpTrimPools @ 0x180060860 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWakeSingle @ 0x180060D5C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180060F94 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableSRW(signed __int64 *a1, volatile signed __int64 *a2, __int64 a3, int a4)
{
  signed __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int i; // ecx
  unsigned int v15; // ebx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  unsigned int v24; // [rsp+44h] [rbp-24h] BYREF
  volatile signed __int64 *v25; // [rsp+48h] [rbp-20h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v22 = 0LL;
  v24 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v25 = a2;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    v24 = 3;
  while ( 1 )
  {
    v9 = (unsigned __int64)&v20 | v7 & 0xF;
    v20 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v21 = 0LL;
    else
      v21 = &v20;
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
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v12 = __rdtsc();
      v13 = v12 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        v11 = 0LL;
        __asm { monitorx rax, rcx, rdx }
        if ( (v24 & 2) == 0 )
          break;
        v18 = v12;
        v19 = __rdtsc();
        v11 = (unsigned __int64)HIDWORD(v19) << 32;
        v12 = v19;
        if ( v19 <= v18 || v19 >= v13 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v11 = v24;
        if ( (v24 & 2) == 0 || i == ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
          break;
        _mm_pause();
      }
    }
  }
  v15 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&v24, 1u) )
  {
    v15 = NtWaitForAlertByThreadId(a2, a3);
    if ( v15 == 258 )
      goto LABEL_21;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&v24, 4u);
  }
  if ( (v24 & 4) != 0 )
    goto LABEL_28;
LABEL_21:
  if ( !(unsigned __int8)RtlpWakeSingle(a1, &v20) )
  {
    do
      NtWaitForAlertByThreadId(a2, 0LL);
    while ( (v24 & 4) == 0 );
    goto LABEL_28;
  }
  if ( v15 != 258 )
LABEL_28:
    v15 = 0;
  if ( v8 )
    RtlAcquireSRWLockShared(a2, v11, v12, v13);
  else
    RtlAcquireSRWLockExclusive(a2);
  return v15;
}
