/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x18008525C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18004CD90 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

signed __int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v4; // rbx

  v2 = (volatile signed __int64 *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 2144));
  if ( (*(_WORD *)(v4 + 42))-- == 1 )
  {
    memset((void *)v4, 0, 0x30uLL);
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2152);
  }
  return RtlReleaseSRWLockExclusive(v2);
}
