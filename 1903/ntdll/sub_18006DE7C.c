/*
 * XREFs of sub_18006DE7C @ 0x18006DE7C
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

volatile signed __int32 *__fastcall sub_18006DE7C(PRTL_SRWLOCK SRWLock, unsigned int a2)
{
  __int64 v3; // r14
  volatile signed __int32 *Ptr; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *Heap; // rax
  _RTL_SRWLOCK *v9; // rdi
  PRTL_SRWLOCK *v10; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    Ptr = (volatile signed __int32 *)SRWLock[v3 + 410].Ptr;
    if ( Ptr )
    {
      v5 = (unsigned int)_InterlockedExchangeAdd(Ptr + 4, 1u);
      if ( (unsigned int)v5 < 0xF )
        return &Ptr[16 * v5 + 8];
    }
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(SRWLock[3].Ptr, 0x800000u, 0x3F0uLL);
    v9 = Heap;
    if ( !Heap )
      return 0LL;
    LODWORD(Heap[2].Ptr) = 1;
    v6 = ((unsigned __int64)&Heap[4].Ptr + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive(SRWLock);
    if ( Ptr == SRWLock[v3 + 410].Ptr )
      break;
    RtlReleaseSRWLockExclusive(SRWLock);
    RtlFreeHeap(SRWLock[3].Ptr, 0x800000u, v9);
  }
  v10 = (PRTL_SRWLOCK *)SRWLock[2].Ptr;
  if ( *v10 != &SRWLock[1] )
    __fastfail(3u);
  v9[1].Ptr = v10;
  v9->Ptr = &SRWLock[1];
  *v10 = v9;
  SRWLock[2].Ptr = v9;
  SRWLock[v3 + 410].Ptr = v9;
  RtlReleaseSRWLockExclusive(SRWLock);
  return (volatile signed __int32 *)v6;
}
