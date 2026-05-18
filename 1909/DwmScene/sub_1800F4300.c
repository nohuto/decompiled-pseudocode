/*
 * XREFs of sub_1800F4300 @ 0x1800F4300
 * Callers:
 *     sub_1800F63C0 @ 0x1800F63C0 (sub_1800F63C0.c)
 *     sub_1800F63FC @ 0x1800F63FC (sub_1800F63FC.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 */

int __fastcall sub_1800F4300(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = 16LL * a4;
  v7 = (void *)sub_1800F5A8C(a1, a2, 5LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
