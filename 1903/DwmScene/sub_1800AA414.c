/*
 * XREFs of sub_1800AA414 @ 0x1800AA414
 * Callers:
 *     sub_1800AAD5C @ 0x1800AAD5C (sub_1800AAD5C.c)
 * Callees:
 *     sub_18009F120 @ 0x18009F120 (sub_18009F120.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

char __fastcall sub_1800AA414(__int64 a1, __int64 a2)
{
  char v2; // bl
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // r8

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    v5 = (const void *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 32) >= 0x10uLL )
      v5 = *(const void **)(a2 + 8);
    v6 = (const void *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 32) >= 0x10uLL )
      v6 = *(const void **)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 == *(_QWORD *)(a2 + 24) && !memcmp(v6, v5, v7) && sub_18009F120((__m128 *)(a1 + 40), (__m128 *)(a2 + 40)) )
      return 1;
  }
  return v2;
}
