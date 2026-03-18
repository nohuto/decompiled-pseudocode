/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C011C1DC
 * Callers:
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C00E27E0 (NtGdiFastPolyPolyline.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A51B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __m128i v3; // xmm0
  _DWORD *v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax
  _QWORD *v8; // r9
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a3;
  v4 = *(_DWORD **)this;
  v9 = v3;
  v5 = v4[10] & 1;
  v6 = v4[2 * v5 + 356];
  v9.m128i_i32[2] = v3.m128i_i32[2] - v6;
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v3) - v6;
  v7 = v4[2 * v5 + 357];
  v9.m128i_i32[1] = v3.m128i_i32[1] - v7;
  v9.m128i_i32[3] = v3.m128i_i32[3] - v7;
  if ( (v4[9] & 0x20) != 0 )
  {
    ERECTL::operator|=(v4 + 368, &v9);
    v4 = (_DWORD *)*v8;
  }
  if ( (v4[9] & 0x80u) != 0 )
    ERECTL::operator|=(v4 + 376, &v9);
}
