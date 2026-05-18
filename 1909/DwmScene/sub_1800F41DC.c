/*
 * XREFs of sub_1800F41DC @ 0x1800F41DC
 * Callers:
 *     sub_1800F5DAC @ 0x1800F5DAC (sub_1800F5DAC.c)
 * Callees:
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 *     memcmp @ 0x180125BB8 (memcmp.c)
 */

int __fastcall sub_1800F41DC(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v5; // rdi
  int result; // eax

  v5 = (_OWORD *)sub_1800F5A8C(a1, a2, 7LL);
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
