/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18002098C
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1800208FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18002098C (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001CA30 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18002098C (RtlpHpLfhOwnerCompact.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD **v9; // rdi
  _QWORD *result; // rax
  volatile signed __int64 *v11; // rsi
  _QWORD *i; // rbx

  v4 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v7 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v8 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v7 + *(_QWORD *)(a2 + 96)), v4);
        v7 += 8LL;
        --v8;
      }
      while ( v8 );
    }
  }
  v9 = (_QWORD **)(a2 + 24);
  if ( *v9 != v9 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v11 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16), (char *)a2, a3, a4);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      RtlpHpLfhSubsegmentDecommitPages(a1, (__int64)i, -1, 1u, v4);
    return (_QWORD *)RtlReleaseSRWLockShared(v11);
  }
  return result;
}
