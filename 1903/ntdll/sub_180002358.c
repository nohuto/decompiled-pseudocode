/*
 * XREFs of sub_180002358 @ 0x180002358
 * Callers:
 *     sub_18002C138 @ 0x18002C138 (sub_18002C138.c)
 *     sub_1800808C0 @ 0x1800808C0 (sub_1800808C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002358(int a1, int a2, char a3)
{
  int v3; // r9d
  int v4; // r8d
  int i; // r8d

  v3 = 0;
  if ( a3 )
    v4 = a1 / 700;
  else
    v4 = a1 / 2;
  for ( i = v4 / a2 + v4; i > 455; i /= 35 )
    v3 += 36;
  return (unsigned int)(v3 + 36 * i / (i + 38));
}
