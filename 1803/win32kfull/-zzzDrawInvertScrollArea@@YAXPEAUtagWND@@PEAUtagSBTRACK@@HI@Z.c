/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0
 * Callers:
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0202070 (xxxTrackBox.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C01FFE00 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  int v4; // esi
  __int16 v9; // ax
  int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  __int64 DCEx; // rax
  int v14; // ebx
  unsigned int DpiForSystem; // eax
  int v16; // ebx
  int DpiDependentMetric; // edi
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // eax
  HDC v23; // rdi
  unsigned int v24; // r9d
  __int16 v25; // ax
  unsigned int v26; // r8d
  HDC v27; // [rsp+30h] [rbp-58h]
  __m128i v28; // [rsp+38h] [rbp-50h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v28 = *((__m128i *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v14 = *(_DWORD *)a2;
    v27 = (HDC)DCEx;
    DpiForSystem = GetDpiForSystem();
    v16 = v14 & 2;
    DpiDependentMetric = GetDpiDependentMetric(v16 == 0 ? 0xB : 0, DpiForSystem);
    v18 = GetDpiForSystem();
    v19 = GetDpiDependentMetric(v16 != 0 ? 10 : 1, v18);
    v20 = _mm_cvtsi128_si32(v28);
    v10 = 3;
    if ( DpiDependentMetric == _mm_cvtsi128_si32(_mm_srli_si128(v28, 8)) - v20
      && v19 == v28.m128i_i32[3] - v28.m128i_i32[1] )
    {
      v21 = *(_DWORD *)a2;
      if ( a4 )
        v22 = ~(2 * (_BYTE)v21) & 4 | 0x32;
      else
        v22 = (v21 & 2) != 0 ? 46 : 58;
      v23 = v27;
      v24 = v22 + 1;
      if ( !a3 )
        v24 = v22;
      BitBltSysBmp(v27, v20, v28.m128i_u32[1], v24, 1);
    }
    else
    {
      v23 = v27;
      DrawFrameControl(v27, (struct tagRECT *)&v28, 3, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v23);
    if ( a4 )
      v25 = 1544;
    else
      v25 = 1537;
    SetOrClrWF(a3 != 0, (__int64)a1, v25, 1);
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    v4 = a4 != 0 ? 5 : 1;
    v12 = (v11 & 4) == 0;
  }
  else
  {
    InvertScrollHilite(a1, (const struct tagRECT *)a2);
    if ( a4 == 2 )
      v9 = 1538;
    else
      v9 = 1540;
    SetOrClrWF(a3 != 0, (__int64)a1, v9, 1);
    v10 = 3;
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    if ( a4 != 2 )
      v4 = 4;
    v12 = (v11 & 4) == 0;
  }
  if ( v12 )
    v26 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v26 = -4;
  xxxWindowEvent(0x800Au, (__int64)a1, v26, v4, v10);
}
