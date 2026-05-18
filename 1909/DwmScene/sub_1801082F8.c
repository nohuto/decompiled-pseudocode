/*
 * XREFs of sub_1801082F8 @ 0x1801082F8
 * Callers:
 *     sub_180109218 @ 0x180109218 (sub_180109218.c)
 *     sub_18010A230 @ 0x18010A230 (sub_18010A230.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180108C60 @ 0x180108C60 (sub_180108C60.c)
 *     sub_18010A424 @ 0x18010A424 (sub_18010A424.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801082F8(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  v3 = sub_18010A424(a1);
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  try
  {
    sub_18000F444((_QWORD *)(v3 + 32), a2);
    v4 = v3 + 64;
  }
  catch ( ... )
  {
    sub_18010A4B0(a1, v3);
    throw;
  }
  sub_180108C60(v4);
  return v3;
}
