/*
 * XREFs of or_all_N_wide_rotated_no_last @ 0x1C00D01A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall or_all_N_wide_rotated_no_last(
        int a1,
        char a2,
        int a3,
        unsigned __int8 *a4,
        _BYTE *a5,
        int a6,
        int a7)
{
  _BYTE *result; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rbp
  _BYTE *v11; // r11
  char v12; // r9
  unsigned __int8 v13; // r8

  result = a5;
  v9 = &a5[a3 * a1];
  v10 = a3 - a7 + 1LL;
  do
  {
    v11 = &result[a7 - 1];
    v12 = 0;
    do
    {
      v13 = *a4++;
      *result++ |= v12 | (v13 >> a2);
      v12 = v13 << (8 - a2);
    }
    while ( result != v11 );
    *result |= v12;
    result += v10;
  }
  while ( result != v9 );
  return result;
}
