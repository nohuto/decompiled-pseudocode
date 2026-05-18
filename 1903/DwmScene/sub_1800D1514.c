/*
 * XREFs of sub_1800D1514 @ 0x1800D1514
 * Callers:
 *     sub_18004248C @ 0x18004248C (sub_18004248C.c)
 *     sub_1800B5CC8 @ 0x1800B5CC8 (sub_1800B5CC8.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

__int64 __fastcall sub_1800D1514(__int64 a1)
{
  sub_180063DA8(a1);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
