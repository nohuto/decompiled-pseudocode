/*
 * XREFs of sub_1800D1624 @ 0x1800D1624
 * Callers:
 *     sub_18004259C @ 0x18004259C (sub_18004259C.c)
 *     sub_1800B5DD8 @ 0x1800B5DD8 (sub_1800B5DD8.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

__int64 __fastcall sub_1800D1624(__int64 a1)
{
  sub_180063EB8(a1);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
