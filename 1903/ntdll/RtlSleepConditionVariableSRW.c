/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180060AE0
 * Callers:
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180060CBC @ 0x180060CBC (sub_180060CBC.c)
 *     sub_180060EF4 @ 0x180060EF4 (sub_180060EF4.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
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
  int i; // ecx
  NTSTATUS v12; // ebx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  HANDLE UniqueThread; // [rsp+38h] [rbp-30h]
  signed __int32 v23; // [rsp+44h] [rbp-24h] BYREF
  PRTL_SRWLOCK v24; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v21 = 0LL;
  v23 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v24 = SRWLock;
  v8 = Flags & 1;
  if ( (Flags & 1) == 0 )
    v23 = 3;
  while ( 1 )
  {
    v9 = (unsigned __int64)&v19 | Ptr & 0xF;
    v19 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v20 = 0LL;
    else
      v20 = &v19;
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
    sub_180060EF4(ConditionVariable, v9);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v15 = __rdtsc();
      v16 = v15 + (unsigned int)dword_180163B84;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v23 & 2) == 0 )
          break;
        v17 = v15;
        v18 = __rdtsc();
        v15 = v18;
        if ( v18 <= v17 || v18 >= v16 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (v23 & 2) != 0 && i != dword_180163B84 / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  v12 = 0;
  if ( _interlockedbittestandreset(&v23, 1u) )
  {
    v12 = ZwWaitForAlertByThreadId(SRWLock, Timeout);
    if ( v12 == 258 )
      goto LABEL_21;
  }
  else
  {
    _InterlockedOr(&v23, 4u);
  }
  if ( (v23 & 4) != 0 )
    goto LABEL_28;
LABEL_21:
  if ( !(unsigned __int8)sub_180060CBC(ConditionVariable, &v19) )
  {
    do
      ZwWaitForAlertByThreadId(SRWLock, 0LL);
    while ( (v23 & 4) == 0 );
    goto LABEL_28;
  }
  if ( v12 != 258 )
LABEL_28:
    v12 = 0;
  if ( v8 )
    RtlAcquireSRWLockShared(SRWLock);
  else
    RtlAcquireSRWLockExclusive(SRWLock);
  return v12;
}
