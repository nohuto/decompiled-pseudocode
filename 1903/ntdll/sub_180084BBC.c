/*
 * XREFs of sub_180084BBC @ 0x180084BBC
 * Callers:
 *     sub_18004CCF0 @ 0x18004CCF0 (sub_18004CCF0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_180084BBC(__int64 a1, unsigned int *a2)
{
  _RTL_SRWLOCK *v2; // rsi
  __int64 v4; // rbx

  v2 = (_RTL_SRWLOCK *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 2144));
  if ( (*(_WORD *)(v4 + 42))-- == 1 )
  {
    memset((void *)v4, 0, 0x30uLL);
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2152);
  }
  RtlReleaseSRWLockExclusive(v2);
}
