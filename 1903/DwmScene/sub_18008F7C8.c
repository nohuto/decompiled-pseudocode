/*
 * XREFs of sub_18008F7C8 @ 0x18008F7C8
 * Callers:
 *     sub_1800A7470 @ 0x1800A7470 (sub_1800A7470.c)
 * Callees:
 *     sub_18002554C @ 0x18002554C (sub_18002554C.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008F7C8(__int64 a1)
{
  sub_180063E80((_QWORD *)a1, 0, 0xAu);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  *(_WORD *)(a1 + 112) = 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = _InterlockedIncrement64(&qword_18026A0C0);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 200) = sub_18002554C();
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 192) |= 0xFFFFFFFF00000000uLL;
  return a1;
}
