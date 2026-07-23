/*
 * XREFs of sub_180018610 @ 0x180018610
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x180018130 (LdrRscIsTypeExist.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 */

int __fastcall sub_180018610(void *a1, const wchar_t **a2, __int64 a3, unsigned int a4)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v6 = (unsigned int *)sub_180018940(a1);
  v7 = v6;
  if ( !v6 )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(v6, *a2, a4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (v7[5] & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (v7[4] & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
