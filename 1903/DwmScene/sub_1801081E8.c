/*
 * XREFs of sub_1801081E8 @ 0x1801081E8
 * Callers:
 *     sub_180109108 @ 0x180109108 (sub_180109108.c)
 *     sub_18010A120 @ 0x18010A120 (sub_18010A120.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180108B50 @ 0x180108B50 (sub_180108B50.c)
 *     sub_18010A314 @ 0x18010A314 (sub_18010A314.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801081E8(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  v3 = sub_18010A314(a1);
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  try
  {
    sub_18000F3F4((_QWORD *)(v3 + 32), a2);
    v4 = v3 + 64;
  }
  catch ( ... )
  {
    sub_18010A3A0(a1, v3);
    throw;
  }
  sub_180108B50(v4);
  return v3;
}
