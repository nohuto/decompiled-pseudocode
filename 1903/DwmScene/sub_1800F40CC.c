/*
 * XREFs of sub_1800F40CC @ 0x1800F40CC
 * Callers:
 *     sub_1800F5C9C @ 0x1800F5C9C (sub_1800F5C9C.c)
 * Callees:
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

int __fastcall sub_1800F40CC(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v5; // rdi
  int result; // eax

  v5 = (_OWORD *)sub_1800F597C(a1, a2, 7LL);
  result = memcmp(v5, a3, 0x40uLL);
  if ( result )
  {
    *v5 = *a3;
    v5[1] = a3[1];
    v5[2] = a3[2];
    v5[3] = a3[3];
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
