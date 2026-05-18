/*
 * XREFs of sub_180097544 @ 0x180097544
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180097474 @ 0x180097474 (sub_180097474.c)
 * Callees:
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180094DB8 @ 0x180094DB8 (sub_180094DB8.c)
 */

__int64 __fastcall sub_180097544(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v6 = (_QWORD *)sub_180064400(a1);
  return sub_180094DB8((__int64 *)(a1 + 144), a2, a3, *(_DWORD *)(a1 + 124), 0, *(_DWORD *)(a1 + 304), v6);
}
