/*
 * XREFs of sub_180096C7C @ 0x180096C7C
 * Callers:
 *     sub_180096948 @ 0x180096948 (sub_180096948.c)
 *     sub_180096BAC @ 0x180096BAC (sub_180096BAC.c)
 * Callees:
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180094D80 @ 0x180094D80 (sub_180094D80.c)
 */

__int64 __fastcall sub_180096C7C(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v6 = (_QWORD *)sub_1800642F0(a1);
  return sub_180094D80((__int64 *)(a1 + 176), a2, a3, *(_DWORD *)(a1 + 124), 3, *(_DWORD *)(a1 + 304), v6);
}
