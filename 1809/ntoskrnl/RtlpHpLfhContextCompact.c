/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1401B66BC
 * Callers:
 *     RtlpHpHeapCompact @ 0x1401B63AC (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x14000817C (RtlpHpReleaseLockShared.c)
 *     RtlpHpAcquireLockShared @ 0x140009644 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x1401B6758 (RtlpHpLfhOwnerCompact.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v4; // esi
  KIRQL v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 result; // rax

  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v5 = -1;
  else
    v5 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
  v6 = (__int64 *)(a1 + 128);
  v7 = 129LL;
  do
  {
    result = *v6;
    if ( (*v6 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v6, a2 | 1u);
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( !v4 )
    return RtlpHpReleaseLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57), v5);
  return result;
}
