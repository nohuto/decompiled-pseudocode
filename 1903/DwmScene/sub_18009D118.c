/*
 * XREFs of sub_18009D118 @ 0x18009D118
 * Callers:
 *     sub_1800170EC @ 0x1800170EC (sub_1800170EC.c)
 * Callees:
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009D118(__int64 a1)
{
  signed __int64 v2; // rdi

  sub_180063E80((_QWORD *)a1, 1, 0xBu);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 112) = sub_180041C80();
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v2 = _InterlockedExchangeAdd64(&qword_18026A0E8, 1uLL);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = (v2 + 1) | 0xFFFFFFFF00000000uLL;
  return a1;
}
