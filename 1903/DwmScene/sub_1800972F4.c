/*
 * XREFs of sub_1800972F4 @ 0x1800972F4
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180097220 @ 0x180097220 (sub_180097220.c)
 * Callees:
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180094CA8 @ 0x180094CA8 (sub_180094CA8.c)
 */

__int64 __fastcall sub_1800972F4(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v7; // rax

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v7 = (_QWORD *)sub_1800642F0(a1);
  return sub_180094CA8((__int64 *)(a1 + 160), a2, a3, *(_DWORD *)(a1 + 124), 1, *(_DWORD *)(a1 + 304), v7);
}
