/*
 * XREFs of sub_1800D59A8 @ 0x1800D59A8
 * Callers:
 *     sub_18006D890 @ 0x18006D890 (sub_18006D890.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D59A8(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D593C(a1, *(_QWORD *)(a1 + 192));
  return result;
}
