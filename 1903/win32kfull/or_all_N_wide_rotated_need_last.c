/*
 * XREFs of or_all_N_wide_rotated_need_last @ 0x1C00EEF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall or_all_N_wide_rotated_need_last(
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
  char v10; // bl
  __int64 v11; // rbp
  unsigned __int8 v12; // r9
  _BYTE *v13; // r11
  _BYTE *v14; // rax
  char v15; // r9
  unsigned __int8 v16; // r8

  result = a5;
  v9 = &a5[a3 * a1];
  v10 = 8 - a2;
  v11 = a3 - a7;
  do
  {
    v12 = *a4;
    v13 = &result[a7];
    ++a4;
    *result |= v12 >> a2;
    v14 = result + 1;
    v15 = v12 << v10;
    do
    {
      v16 = *a4++;
      *v14++ |= v15 | (v16 >> a2);
      v15 = v16 << v10;
    }
    while ( v14 != v13 );
    result = &v14[v11];
  }
  while ( result != v9 );
  return result;
}
