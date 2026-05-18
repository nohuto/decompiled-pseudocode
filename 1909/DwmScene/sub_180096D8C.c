/*
 * XREFs of sub_180096D8C @ 0x180096D8C
 * Callers:
 *     sub_180096A58 @ 0x180096A58 (sub_180096A58.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 * Callees:
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180094E90 @ 0x180094E90 (sub_180094E90.c)
 */

__int64 __fastcall sub_180096D8C(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v6 = (_QWORD *)sub_180064400(a1);
  return sub_180094E90((__int64 *)(a1 + 176), a2, a3, *(_DWORD *)(a1 + 124), 3, *(_DWORD *)(a1 + 304), v6);
}
