/*
 * XREFs of sub_1800D58D0 @ 0x1800D58D0
 * Callers:
 *     sub_180067B10 @ 0x180067B10 (sub_180067B10.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D58D0(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D583C(a1, *(_QWORD *)(a1 + 192));
  return result;
}
