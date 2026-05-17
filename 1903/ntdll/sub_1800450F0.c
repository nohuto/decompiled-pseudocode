/*
 * XREFs of sub_1800450F0 @ 0x1800450F0
 * Callers:
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 *     sub_18004EA3C @ 0x18004EA3C (sub_18004EA3C.c)
 * Callees:
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_1800450F0(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  v3 = 0;
  if ( !dword_18015F9B8 && ((v4 = *(_QWORD *)(a3 + 16)) != 0 || (v4 = qword_180163568) != 0) && a1 > v4 )
  {
    v6 = *(_QWORD *)(a3 + 24);
    if ( v6 )
      sub_18010A694(20, a2, 0, v6, a1, *(_QWORD *)(a3 + 16));
  }
  else
  {
    return 1;
  }
  return v3;
}
