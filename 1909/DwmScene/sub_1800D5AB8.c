/*
 * XREFs of sub_1800D5AB8 @ 0x1800D5AB8
 * Callers:
 *     sub_18006D9A0 @ 0x18006D9A0 (sub_18006D9A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D5AB8(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D5A4C(a1, *(_QWORD *)(a1 + 192));
  return result;
}
