/*
 * XREFs of sub_18011EBC4 @ 0x18011EBC4
 * Callers:
 *     sub_180121D14 @ 0x180121D14 (sub_180121D14.c)
 * Callees:
 *     sub_180122EC0 @ 0x180122EC0 (sub_180122EC0.c)
 *     sub_180122FFC @ 0x180122FFC (sub_180122FFC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011EBC4(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = sub_180122EC0(a1 + 8, 0LL, 0LL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_180122FFC(a1, a2);
  return a1;
}
