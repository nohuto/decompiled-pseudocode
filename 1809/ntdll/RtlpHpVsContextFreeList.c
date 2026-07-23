/*
 * XREFs of RtlpHpVsContextFreeList @ 0x18009FD94
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCompact @ 0x180068A30 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x18009FBFC (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(PRTL_SRWLOCK SRWLock, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  PRTL_SRWLOCK SRWLocka; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    SRWLocka = SRWLock;
    v8 = 0LL;
    v10 = 0LL;
    RtlAcquireSRWLockExclusive(SRWLock);
  }
  while ( a3 )
  {
    v7 = (__int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    RtlpHpVsContextFreeInternal(SRWLock, a2, v7, v4, (__int64)&v8);
  }
  if ( !v6 )
    RtlReleaseSRWLockExclusive(SRWLocka);
}
