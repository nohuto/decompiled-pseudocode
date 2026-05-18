/*
 * XREFs of sub_1800F4184 @ 0x1800F4184
 * Callers:
 *     sub_1800F5CD0 @ 0x1800F5CD0 (sub_1800F5CD0.c)
 * Callees:
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

int __fastcall sub_1800F4184(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v5; // rdi
  void *v7; // rbp
  int result; // eax

  v5 = (unsigned __int64)a4 << 6;
  v7 = (void *)sub_1800F597C(a1, a2, 7LL);
  result = memcmp(v7, a3, v5);
  if ( result )
  {
    result = (unsigned int)memcpy(v7, a3, v5);
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
