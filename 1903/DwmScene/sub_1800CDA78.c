/*
 * XREFs of sub_1800CDA78 @ 0x1800CDA78
 * Callers:
 *     sub_1800A21BC @ 0x1800A21BC (sub_1800A21BC.c)
 *     sub_1800A2250 @ 0x1800A2250 (sub_1800A2250.c)
 *     sub_1800A22E4 @ 0x1800A22E4 (sub_1800A22E4.c)
 *     sub_1800A2378 @ 0x1800A2378 (sub_1800A2378.c)
 *     sub_1800A25C8 @ 0x1800A25C8 (sub_1800A25C8.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CDA78(__int64 a1, int a2)
{
  sub_180063E80((_QWORD *)a1, 2, 8u);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 136) = sub_180041C80();
  *(_BYTE *)(a1 + 152) = 0;
  sub_180064574(a1, 2, 0);
  return a1;
}
