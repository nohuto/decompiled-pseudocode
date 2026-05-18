/*
 * XREFs of sub_1800E03E0 @ 0x1800E03E0
 * Callers:
 *     sub_18006AA40 @ 0x18006AA40 (sub_18006AA40.c)
 * Callees:
 *     sub_18008E26C @ 0x18008E26C (sub_18008E26C.c)
 */

char __fastcall sub_1800E03E0(__int64 a1, __m128 *a2)
{
  __int32 v4; // eax

  LOBYTE(v4) = sub_18008E26C(a2, (__m128 *)(a1 + 44));
  if ( (_BYTE)v4 )
  {
    *(_DWORD *)(a1 + 44) = a2->m128_i32[0];
    *(_DWORD *)(a1 + 48) = a2->m128_i32[1];
    *(_DWORD *)(a1 + 52) = a2->m128_i32[2];
    v4 = a2->m128_i32[3];
    *(_DWORD *)(a1 + 56) = v4;
    *(_BYTE *)(a1 + 61) = 1;
  }
  return v4;
}
