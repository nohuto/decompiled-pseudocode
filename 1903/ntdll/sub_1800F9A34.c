/*
 * XREFs of sub_1800F9A34 @ 0x1800F9A34
 * Callers:
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 * Callees:
 *     sub_1800F9888 @ 0x1800F9888 (sub_1800F9888.c)
 *     sub_1800F9ABC @ 0x1800F9ABC (sub_1800F9ABC.c)
 *     sub_1800F9CC0 @ 0x1800F9CC0 (sub_1800F9CC0.c)
 */

__int64 __fastcall sub_1800F9A34(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int v5; // eax
  int v10; // ebx
  int v11; // eax

  v5 = *a2;
  if ( !*a2 )
  {
    v10 = *a3;
    if ( !*a3 )
    {
      v10 = sub_1800F9ABC(a1, a4);
      *a3 = v10;
    }
    v11 = sub_1800F9CC0(a1, a4);
    v5 = sub_1800F9888(a1, v10, v11);
    *a2 = v5;
  }
  return sub_1800F9888(a1, v5, a5);
}
