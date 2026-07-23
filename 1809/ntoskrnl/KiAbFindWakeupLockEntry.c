/*
 * XREFs of KiAbFindWakeupLockEntry @ 0x140024358
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x140103548 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 */

__m128i *__fastcall KiAbFindWakeupLockEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  int SessionId; // r10d
  unsigned int v6; // r9d
  __int64 v8; // rcx
  __m128i *v9; // r8
  int v10; // edx
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  __int64 v13; // rcx
  __int128 v15; // rt0
  unsigned __int8 v16; // tt

  if ( (*(_BYTE *)(a2 + 792) | *(_BYTE *)(a2 + 1422)) == 63 )
    return 0LL;
  v3 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  v4 = 0LL;
  if ( (unsigned int)MmIsSessionAddress() )
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    SessionId = -1;
  v6 = (*(char *)(a2 + 792) | *(char *)(a2 + 1422)) ^ 0x3F;
  while ( _BitScanReverse((unsigned int *)&v8, v6) )
  {
    v6 &= ~(1 << v8);
    v9 = (__m128i *)(96 * v8 + a2 + 800);
    if ( (v9[2].m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL) == v3 )
    {
      *(_QWORD *)&v11 = v9[2].m128i_i64[0];
      *((_QWORD *)&v11 + 1) = _mm_srli_si128(v9[2], 8).m128i_u64[0];
      v12 = _InterlockedCompareExchange128(v9[2].m128i_i64, *((signed __int64 *)&v11 + 1), v11, (signed __int64 *)&v11);
      v10 = DWORD2(v11);
      v13 = v11;
      if ( v12
        || (*(_QWORD *)&v15 = v9[2].m128i_i64[0],
            *((_QWORD *)&v15 + 1) = _mm_srli_si128(v9[2], 8).m128i_u64[0],
            v16 = _InterlockedCompareExchange128(
                    v9[2].m128i_i64,
                    *((signed __int64 *)&v15 + 1),
                    v15,
                    (signed __int64 *)&v15),
            v10 = DWORD2(v15),
            v13 = v15,
            v16) )
      {
        if ( (v9[1].m128i_i8[9] & 1) != 0 && (v13 & 0x7FFFFFFFFFFFFFFCLL) == v3 && v10 == SessionId )
          return v9;
      }
    }
  }
  return (__m128i *)v4;
}
