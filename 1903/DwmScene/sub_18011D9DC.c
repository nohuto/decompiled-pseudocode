/*
 * XREFs of sub_18011D9DC @ 0x18011D9DC
 * Callers:
 *     sub_180024840 @ 0x180024840 (sub_180024840.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 *     sub_1800B6980 @ 0x1800B6980 (sub_1800B6980.c)
 *     sub_1800B6CB0 @ 0x1800B6CB0 (sub_1800B6CB0.c)
 *     sub_1800FC794 @ 0x1800FC794 (sub_1800FC794.c)
 *     sub_180116258 @ 0x180116258 (sub_180116258.c)
 *     sub_1801229E0 @ 0x1801229E0 (sub_1801229E0.c)
 *     sub_180122AD0 @ 0x180122AD0 (sub_180122AD0.c)
 *     sub_180122B60 @ 0x180122B60 (sub_180122B60.c)
 *     sub_180123FA8 @ 0x180123FA8 (sub_180123FA8.c)
 *     sub_1801248EC @ 0x1801248EC (sub_1801248EC.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180027FB4 @ 0x180027FB4 (sub_180027FB4.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011D9DC(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v4; // rdi
  const char *v6; // r8
  int v7; // edx

  v4 = a2;
  sub_180027FB4((_QWORD *)a1, a2);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18000F3F4((_QWORD *)(a1 + 24), (__int64)v4);
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
  sub_18011D988(&qword_18025E1A0, v7, v6, v4, -2LL);
  return a1;
}
