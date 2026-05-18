/*
 * XREFs of sub_1800F4294 @ 0x1800F4294
 * Callers:
 *     sub_1800F5DE0 @ 0x1800F5DE0 (sub_1800F5DE0.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 */

int __fastcall sub_1800F4294(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)sub_1800F5A8C(a1, a2, 7LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
