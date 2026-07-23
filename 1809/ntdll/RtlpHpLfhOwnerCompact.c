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

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD **v8; // rdi
  _RTL_SRWLOCK *v9; // rsi
  _QWORD *i; // rbx

  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v6 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v7 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v6 + *(_QWORD *)(a2 + 96)), a3);
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
  }
  v8 = (_QWORD **)(a2 + 24);
  if ( *v8 != v8 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v9 = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
      RtlpHpLfhSubsegmentDecommitPages(a1, (__int64)i, -1, 1u, a3);
    RtlReleaseSRWLockShared(v9);
  }
}
