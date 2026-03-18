/*
 * XREFs of KeAbCrossThreadDelete @ 0x1402B07D8
 * Callers:
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiAbCrossThreadRelease @ 0x14016BFF8 (KiAbCrossThreadRelease.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall KeAbCrossThreadDelete(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  int v6; // r9d
  unsigned int v7; // r8d
  __m128i *v8; // rdi
  int v9; // edx
  __int128 v10; // rt0
  unsigned __int8 v11; // tt
  __int64 v12; // rcx
  __int128 v13; // rt0
  unsigned __int8 v14; // tt
  __int64 v16; // rcx
  int v17; // ecx
  _QWORD Object[6]; // [rsp+48h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2[8]; // [rsp+78h] [rbp-9h] BYREF

  memset(Object, 0, sizeof(Object));
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  LOBYTE(v4) = *(_BYTE *)(a2 + 792) | *(_BYTE *)(a2 + 1422);
  if ( (_BYTE)v4 != 63 )
  {
    v5 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    LOBYTE(v4) = MmIsSessionAddress(a1);
    if ( (_DWORD)v4 )
    {
      LODWORD(v4) = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v6 = v4;
    }
    else
    {
      v6 = -1;
    }
    v7 = (*(char *)(a2 + 792) | *(char *)(a2 + 1422)) ^ 0x3F;
    while ( _BitScanReverse((unsigned int *)&v16, v7) )
    {
      v7 &= ~(1 << v16);
      v8 = (__m128i *)(96 * v16 + a2 + 800);
      v4 = v8[2].m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v4 == v5 )
      {
        *(_QWORD *)&v10 = v8[2].m128i_i64[0];
        *((_QWORD *)&v10 + 1) = _mm_srli_si128(v8[2], 8).m128i_u64[0];
        v11 = _InterlockedCompareExchange128(
                v8[2].m128i_i64,
                *((signed __int64 *)&v10 + 1),
                v10,
                (signed __int64 *)&v10);
        LOBYTE(v4) = v10;
        v9 = DWORD2(v10);
        v12 = v10;
        if ( v11
          || (*(_QWORD *)&v13 = v8[2].m128i_i64[0],
              *((_QWORD *)&v13 + 1) = _mm_srli_si128(v8[2], 8).m128i_u64[0],
              v14 = _InterlockedCompareExchange128(
                      v8[2].m128i_i64,
                      *((signed __int64 *)&v13 + 1),
                      v13,
                      (signed __int64 *)&v13),
              LOBYTE(v4) = v13,
              v9 = DWORD2(v13),
              v12 = v13,
              v14) )
        {
          if ( (v8[1].m128i_i8[10] & 1) != 0 )
          {
            LOBYTE(v4) = v12 & 0xFC;
            if ( (v12 & 0x7FFFFFFFFFFFFFFCLL) == v5 && v9 == v6 )
            {
              if ( v12 >= 0 )
              {
                v17 = *(_DWORD *)(a2 + 536);
                Object[2] = &Object[1];
                Object[1] = &Object[1];
                BugCheckParameter2[3] = (ULONG_PTR)&KeAbCrossThreadDeleteDpcRoutine;
                BugCheckParameter2[4] = (ULONG_PTR)Object;
                BugCheckParameter2[7] = 0LL;
                Object[3] = a1;
                Object[4] = v8;
                Object[5] = a2;
                LOWORD(Object[0]) = 1;
                BYTE2(Object[0]) = 6;
                HIDWORD(Object[0]) = 0;
                LOWORD(BugCheckParameter2[0]) = 275;
                BugCheckParameter2[2] = 0LL;
                WORD1(BugCheckParameter2[0]) = v17 + 1280;
                KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
                KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
              }
              else
              {
                v8[2].m128i_i8[0] |= 1u;
              }
              LOBYTE(v4) = KiAbCrossThreadRelease(a1, (__int64)v8, a2);
              return v4;
            }
          }
        }
      }
    }
  }
  return v4;
}
