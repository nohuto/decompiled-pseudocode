/*
 * XREFs of sub_18009D228 @ 0x18009D228
 * Callers:
 *     sub_18001715C @ 0x18001715C (sub_18001715C.c)
 * Callees:
 *     sub_180041D90 @ 0x180041D90 (sub_180041D90.c)
 *     sub_180063F90 @ 0x180063F90 (sub_180063F90.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009D228(__int64 a1)
{
  signed __int64 v2; // rdi

  sub_180063F90((_QWORD *)a1, 1, 0xBu);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 112) = sub_180041D90();
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v2 = _InterlockedExchangeAdd64(&qword_18026B0E8, 1uLL);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = (v2 + 1) | 0xFFFFFFFF00000000uLL;
  return a1;
}
