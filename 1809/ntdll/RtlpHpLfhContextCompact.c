/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1800208FC
 * Callers:
 *     RtlpHpHeapCompact @ 0x180068A30 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x18002098C (RtlpHpLfhOwnerCompact.c)
 */

signed __int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v6; // esi
  signed __int64 *v7; // rdi
  __int64 v8; // rbp
  signed __int64 result; // rax

  v4 = (int)a2;
  v6 = (unsigned __int8)a2 & 1;
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  v7 = (signed __int64 *)(a1 + 128);
  v8 = 129LL;
  do
  {
    result = *v7;
    if ( (*v7 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v7, v4 | 1u);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v6 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return result;
}
