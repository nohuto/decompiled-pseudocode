/*
 * XREFs of RtlpHpVsContextFreeList @ 0x18009FD74
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCompact @ 0x180068A30 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x18009FBDC (RtlpHpVsContextFreeInternal.c)
 */

signed __int64 __fastcall RtlpHpVsContextFreeList(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int v5; // ebp
  int v7; // edi
  signed __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v4 = a3;
  v5 = a2;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v11 = a1;
    v10 = 0LL;
    v12 = 0LL;
    result = RtlAcquireSRWLockExclusive((unsigned __int64)a1, a2, a3, a4);
  }
  while ( v4 )
  {
    v9 = (__int64)(v4 - 2);
    v4 = (unsigned __int64 *)*v4;
    result = RtlpHpVsContextFreeInternal((unsigned __int64)a1, a2, v9, v5, (__int64)&v10);
  }
  if ( !v7 )
    return RtlReleaseSRWLockExclusive(v11);
  return result;
}
