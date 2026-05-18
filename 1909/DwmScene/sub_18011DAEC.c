/*
 * XREFs of sub_18011DAEC @ 0x18011DAEC
 * Callers:
 *     sub_180024950 @ 0x180024950 (sub_180024950.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 *     sub_1800B6A90 @ 0x1800B6A90 (sub_1800B6A90.c)
 *     sub_1800B6DC0 @ 0x1800B6DC0 (sub_1800B6DC0.c)
 *     sub_1800FC8A4 @ 0x1800FC8A4 (sub_1800FC8A4.c)
 *     sub_180116368 @ 0x180116368 (sub_180116368.c)
 *     sub_180122AF0 @ 0x180122AF0 (sub_180122AF0.c)
 *     sub_180122BE0 @ 0x180122BE0 (sub_180122BE0.c)
 *     sub_180122C70 @ 0x180122C70 (sub_180122C70.c)
 *     sub_1801240B8 @ 0x1801240B8 (sub_1801240B8.c)
 *     sub_1801249FC @ 0x1801249FC (sub_1801249FC.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800280C4 @ 0x1800280C4 (sub_1800280C4.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011DAEC(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v4; // rdi
  const char *v6; // r8
  int v7; // edx

  v4 = a2;
  sub_1800280C4((_QWORD *)a1, a2);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18000F444((_QWORD *)(a1 + 24), (__int64)v4);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  if ( a3 )
  {
    if ( v4[3] >= 0x10uLL )
      v4 = (_QWORD *)*v4;
    v6 = "Throwing SpectreException with message '%s'";
    v7 = 4;
  }
  else
  {
    if ( v4[3] >= 0x10uLL )
      v4 = (_QWORD *)*v4;
    v6 = "Throwing SpectreException with message '%s'";
    v7 = 3;
  }
  sub_18011DA98(&qword_18025F1A0, v7, v6, v4, -2LL);
  return a1;
}
