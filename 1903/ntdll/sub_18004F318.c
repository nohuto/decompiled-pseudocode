/*
 * XREFs of sub_18004F318 @ 0x18004F318
 * Callers:
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18004F3A8 @ 0x18004F3A8 (sub_18004F3A8.c)
 */

void __fastcall sub_18004F318(_RTL_SRWLOCK *a1, int a2)
{
  int v4; // esi
  _RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rbp

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 9);
  v5 = a1 + 16;
  v6 = 129LL;
  do
  {
    if ( ((__int64)v5->Ptr & 1) == 0 )
      sub_18004F3A8(a1, v5->Ptr, a2 | 1u);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
    RtlReleaseSRWLockShared(a1 + 9);
}
