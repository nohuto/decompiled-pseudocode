/*
 * XREFs of sub_18006A0CC @ 0x18006A0CC
 * Callers:
 *     sub_180032F9C @ 0x180032F9C (sub_180032F9C.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

__int64 __fastcall sub_18006A0CC(__int64 a1)
{
  sub_180063DA8(a1);
  *(_QWORD *)a1 = &Spectre::Engine::CommandList::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return a1;
}
