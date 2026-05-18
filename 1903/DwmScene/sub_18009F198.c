/*
 * XREFs of sub_18009F198 @ 0x18009F198
 * Callers:
 *     sub_18009F3EC @ 0x18009F3EC (sub_18009F3EC.c)
 * Callees:
 *     sub_18009F120 @ 0x18009F120 (sub_18009F120.c)
 */

bool __fastcall sub_18009F198(__int64 a1, __int64 a2)
{
  char v2; // si

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
    && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
    && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
    && *(float *)(a1 + 16) == *(float *)(a2 + 16)
    && *(_DWORD *)(a1 + 20) == *(_DWORD *)(a2 + 20)
    && *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24)
    && sub_18009F120((__m128 *)(a1 + 28), (__m128 *)(a2 + 28))
    && *(float *)(a1 + 44) == *(float *)(a2 + 44) )
  {
    return *(float *)(a1 + 48) == *(float *)(a2 + 48);
  }
  return v2;
}
