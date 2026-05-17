/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x18006E4A0
 * Callers:
 *     LdrpFreeTls @ 0x18006E3E4 (LdrpFreeTls.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

signed __int64 LdrpCleanupThreadTlsData()
{
  __int64 v0; // rdi
  void **v1; // rsi
  unsigned __int64 UniqueThread; // r14
  void *ProcessHeap; // r15
  volatile signed __int64 *v4; // rbx
  void **v5; // rax
  signed __int64 result; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v4 = (volatile signed __int64 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v4 + 1);
  v5 = (void **)*v4;
  if ( *v4 )
  {
    do
    {
      v7 = v5[1];
      if ( *v5 == (void *)UniqueThread )
      {
        if ( v1 )
          v1[1] = v7;
        else
          *v4 = (volatile signed __int64)v7;
        v5[1] = (void *)v0;
        v0 = (__int64)v5;
        v5 = v1;
      }
      v1 = v5;
      v5 = (void **)v7;
    }
    while ( v7 );
  }
  result = RtlReleaseSRWLockExclusive(v4 + 1);
  if ( v0 )
  {
    do
    {
      v8 = *(_QWORD *)(v0 + 8);
      result = RtlFreeHeap((__int64)ProcessHeap, 0, v0);
      v0 = v8;
    }
    while ( v8 );
  }
  return result;
}
