/*
 * XREFs of sub_1800F41F0 @ 0x1800F41F0
 * Callers:
 *     sub_1800F62B0 @ 0x1800F62B0 (sub_1800F62B0.c)
 *     sub_1800F62EC @ 0x1800F62EC (sub_1800F62EC.c)
 * Callees:
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

int __fastcall sub_1800F41F0(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = 16LL * a4;
  v7 = (void *)sub_1800F597C(a1, a2, 5LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
