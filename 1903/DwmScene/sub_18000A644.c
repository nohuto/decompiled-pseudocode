/*
 * XREFs of sub_18000A644 @ 0x18000A644
 * Callers:
 *     sub_18000CD80 @ 0x18000CD80 (sub_18000CD80.c)
 * Callees:
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 */

_QWORD *__fastcall sub_18000A644(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = &wil::ResultException::`vftable';
  v2 = a1 + 3;
  v2[18] = 0LL;
  v2[19] = 0LL;
  sub_18000C5F0();
  a1[23] = 0LL;
  result = a1;
  a1[24] = 0LL;
  return result;
}
