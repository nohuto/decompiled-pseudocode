/*
 * XREFs of sub_18009D0A4 @ 0x18009D0A4
 * Callers:
 *     sub_18002DEB8 @ 0x18002DEB8 (sub_18002DEB8.c)
 *     sub_1800B5BA0 @ 0x1800B5BA0 (sub_1800B5BA0.c)
 * Callees:
 *     sub_180063D84 @ 0x180063D84 (sub_180063D84.c)
 */

__int64 __fastcall sub_18009D0A4(__int64 a1)
{
  __int64 result; // rax

  sub_180063D84((_QWORD *)a1, 1LL, 11LL);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = a1;
  *(_QWORD *)(a1 + 152) = qword_18026B290;
  return result;
}
