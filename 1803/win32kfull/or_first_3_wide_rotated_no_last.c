/*
 * XREFs of or_first_3_wide_rotated_no_last @ 0x1C0126D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall or_first_3_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5)
{
  unsigned __int8 *v6; // r11
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // r8d
  __int64 result; // rax

  v6 = &a4[2 * a1];
  v7 = a3;
  do
  {
    v8 = a4[1];
    v9 = *a4;
    a4 += 2;
    v10 = (v8 | (unsigned int)(v9 << 8)) << 8 >> a2;
    a5[2] = v10;
    *a5 |= BYTE2(v10);
    result = v10 >> 8;
    a5[1] = BYTE1(v10);
    a5 += v7;
  }
  while ( a4 != v6 );
  return result;
}
