/*
 * XREFs of sub_18006A1DC @ 0x18006A1DC
 * Callers:
 *     sub_1800330AC @ 0x1800330AC (sub_1800330AC.c)
 * Callees:
 *     sub_180063EB8 @ 0x180063EB8 (sub_180063EB8.c)
 */

__int64 __fastcall sub_18006A1DC(__int64 a1)
{
  sub_180063EB8(a1);
  *(_QWORD *)a1 = &Spectre::Engine::CommandList::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return a1;
}
