/*
 * XREFs of sub_1800F8AB8 @ 0x1800F8AB8
 * Callers:
 *     sub_18002B144 @ 0x18002B144 (sub_18002B144.c)
 *     sub_18002B3B0 @ 0x18002B3B0 (sub_18002B3B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F8AB8(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *v3; // r9

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2 * (a2 - 1LL));
  if ( a2 <= 0 )
    return (unsigned int)a2;
  while ( *v3 != 64 )
  {
    --v3;
    if ( --v2 < 0 )
      return (unsigned int)a2;
  }
  return (unsigned int)(v2 + 1);
}
