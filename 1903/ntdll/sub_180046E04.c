/*
 * XREFs of sub_180046E04 @ 0x180046E04
 * Callers:
 *     sub_180045D7C @ 0x180045D7C (sub_180045D7C.c)
 *     sub_180045F38 @ 0x180045F38 (sub_180045F38.c)
 *     sub_18010A714 @ 0x18010A714 (sub_18010A714.c)
 * Callees:
 *     sub_180046D7C @ 0x180046D7C (sub_180046D7C.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 *     sub_180084338 @ 0x180084338 (sub_180084338.c)
 */

__int64 __fastcall sub_180046E04(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v8; // rax

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v8 = sub_1800515E8(&qword_180166A60, 2 * ((a2 - qword_180166A58) >> 20));
    if ( !v8 )
      return sub_180084338(a1, a2, a3);
    v3 = v8 - 1;
  }
  if ( v3 != 2 )
    return sub_180046D7C(a1 + 192LL * v3 + 256, a2);
  return sub_180084338(a1, a2, a3);
}
