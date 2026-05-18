/*
 * XREFs of sub_18011DF50 @ 0x18011DF50
 * Callers:
 *     sub_18001DA04 @ 0x18001DA04 (sub_18001DA04.c)
 * Callees:
 *     sub_18011DF78 @ 0x18011DF78 (sub_18011DF78.c)
 */

__int64 __fastcall sub_18011DF50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18011DF78(a1, a2, v3);
  return a1;
}
