/*
 * XREFs of sub_1800F99E8 @ 0x1800F99E8
 * Callers:
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 * Callees:
 *     sub_1800F9ABC @ 0x1800F9ABC (sub_1800F9ABC.c)
 */

__int64 __fastcall sub_1800F99E8(__int64 a1, int *a2, unsigned int a3, int a4)
{
  int v4; // eax

  v4 = *a2;
  if ( !*a2 )
  {
    v4 = sub_1800F9ABC(a1, a3);
    *a2 = v4;
  }
  return sub_1800F9888(a1, v4, a4);
}
