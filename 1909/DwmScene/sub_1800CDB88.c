/*
 * XREFs of sub_1800CDB88 @ 0x1800CDB88
 * Callers:
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 *     sub_1800A2360 @ 0x1800A2360 (sub_1800A2360.c)
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 *     sub_1800A2488 @ 0x1800A2488 (sub_1800A2488.c)
 *     sub_1800A26D8 @ 0x1800A26D8 (sub_1800A26D8.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CDB88(__int64 a1, int a2)
{
  sub_180063F90((_QWORD *)a1, 2, 8u);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 136) = sub_180041D90();
  *(_BYTE *)(a1 + 152) = 0;
  sub_180064684(a1, 2, 0);
  return a1;
}
