/*
 * XREFs of sub_1800F2088 @ 0x1800F2088
 * Callers:
 *     sub_1800F20B8 @ 0x1800F20B8 (sub_1800F20B8.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_1800F2088(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int v3; // eax

  for ( ; a3; --a3 )
  {
    v3 = *a2++;
    a1 = ((v3 + a1) >> 16) + (unsigned __int16)(v3 + a1);
  }
  return a1 + HIWORD(a1);
}
