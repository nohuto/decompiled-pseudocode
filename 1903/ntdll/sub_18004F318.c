/*
 * XREFs of sub_18004F318 @ 0x18004F318
 * Callers:
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18004F3A8 @ 0x18004F3A8 (sub_18004F3A8.c)
 */

signed __int64 __fastcall sub_18004F318(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  int v6; // esi
  signed __int64 *v7; // rdi
  __int64 v8; // rbp
  signed __int64 result; // rax

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  v7 = (signed __int64 *)(a1 + 128);
  v8 = 129LL;
  do
  {
    result = *v7;
    if ( (*v7 & 1) == 0 )
      result = sub_18004F3A8(a1, *v7, v4 | 1u);
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v6 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return result;
}
