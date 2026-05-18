/*
 * XREFs of sub_180097404 @ 0x180097404
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180097330 @ 0x180097330 (sub_180097330.c)
 * Callees:
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180094DB8 @ 0x180094DB8 (sub_180094DB8.c)
 */

__int64 __fastcall sub_180097404(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v7; // rax

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v7 = (_QWORD *)sub_180064400(a1);
  return sub_180094DB8((__int64 *)(a1 + 160), a2, a3, *(_DWORD *)(a1 + 124), 1, *(_DWORD *)(a1 + 304), v7);
}
