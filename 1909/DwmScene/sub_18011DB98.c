/*
 * XREFs of sub_18011DB98 @ 0x18011DB98
 * Callers:
 *     sub_180065920 @ 0x180065920 (sub_180065920.c)
 *     sub_180074288 @ 0x180074288 (sub_180074288.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     sub_18011DC60 @ 0x18011DC60 (sub_18011DC60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011DB98(__int64 a1, int a2, _QWORD *a3, char a4)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // rdx
  const char *v9; // r8
  int v10; // edx

  v5 = a3;
  v8 = a3;
  if ( a3[3] >= 0x10uLL )
    v8 = (_QWORD *)*a3;
  sub_18011DC60(a1, v8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18000F444((_QWORD *)(a1 + 24), (__int64)v5);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = a2;
  if ( a4 )
  {
    if ( v5[3] >= 0x10uLL )
      v5 = (_QWORD *)*v5;
    v9 = "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x";
    v10 = 4;
  }
  else
  {
    if ( v5[3] >= 0x10uLL )
      v5 = (_QWORD *)*v5;
    v9 = "Throwing SpectreException with message '%s' and HRESULT error 0x%.8x";
    v10 = 3;
  }
  sub_18011DA98(&qword_18025F1A0, v10, v9, v5, a2);
  return a1;
}
