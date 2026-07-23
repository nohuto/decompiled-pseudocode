/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x1800589C0
 * Callers:
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWakeSingle @ 0x180058B6C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180058D74 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  signed __int64 Ptr; // rbx
  ULONG v8; // esi
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rax
  int i; // eax
  NTSTATUS v12; // ebx
  unsigned __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  signed __int32 v19; // [rsp+44h] [rbp-24h] BYREF
  PRTL_SRWLOCK v20; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v17 = 0LL;
  v19 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v20 = SRWLock;
  v8 = Flags & 1;
  if ( (Flags & 1) == 0 )
    v19 = 3;
  while ( 1 )
  {
    v9 = (unsigned __int64)&v15 | Ptr & 0xF;
    v15 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v16 = 0LL;
    else
      v16 = &v15;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 |= 8uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v9, Ptr);
    if ( Ptr == v10 )
      break;
    Ptr = v10;
  }
  if ( (Flags & 1) != 0 )
    RtlReleaseSRWLockShared(SRWLock);
  else
    RtlReleaseSRWLockExclusive(SRWLock);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v9) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(ConditionVariable, v9);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v19 & 2) == 0 )
      break;
    _mm_pause();
  }
  v12 = 0;
  if ( _interlockedbittestandreset(&v19, 1u) )
  {
    v12 = NtWaitForAlertByThreadId(SRWLock, Timeout);
    if ( v12 == 258 )
      goto LABEL_18;
  }
  else
  {
    _InterlockedOr(&v19, 4u);
  }
  if ( (v19 & 4) != 0 )
    goto LABEL_25;
LABEL_18:
  if ( !(unsigned __int8)RtlpWakeSingle(ConditionVariable, &v15) )
  {
    do
      NtWaitForAlertByThreadId(SRWLock, 0LL);
    while ( (v19 & 4) == 0 );
    goto LABEL_25;
  }
  if ( v12 != 258 )
LABEL_25:
    v12 = 0;
  if ( v8 )
    RtlAcquireSRWLockShared(SRWLock);
  else
    RtlAcquireSRWLockExclusive(SRWLock);
  return v12;
}
