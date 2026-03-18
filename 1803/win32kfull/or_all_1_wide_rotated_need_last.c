/*
 * XREFs of or_all_1_wide_rotated_need_last @ 0x1C00ABD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall or_all_1_wide_rotated_need_last(int a1, char a2, int a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v5; // r11
  _BYTE *v6; // r10
  char result; // al

  v5 = a3;
  v6 = &a4[a1];
  do
  {
    result = *a4++ >> a2;
    *a5 |= result;
    a5 += v5;
  }
  while ( a4 != v6 );
  return result;
}
