/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02291FC
 * Callers:
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C022A9E0 (xxxTrackBox.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0228810 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02288AC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  int v4; // esi
  unsigned __int16 v9; // ax
  unsigned int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  __int64 DCEx; // rax
  int v14; // ebx
  unsigned int DpiForSystem; // eax
  int v16; // ebx
  __int64 v17; // r8
  int DpiDependentMetric; // edi
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  HDC v25; // rdi
  unsigned int v26; // r9d
  unsigned __int16 v27; // ax
  unsigned int v28; // r8d
  HDC v29; // [rsp+30h] [rbp-58h]
  __m128i v30; // [rsp+38h] [rbp-50h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v30 = *((__m128i *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v14 = *(_DWORD *)a2;
    v29 = (HDC)DCEx;
    DpiForSystem = GetDpiForSystem();
    v16 = v14 & 2;
    DpiDependentMetric = GetDpiDependentMetric(v16 == 0 ? 0xB : 0, DpiForSystem, v17);
    v19 = GetDpiForSystem();
    v21 = GetDpiDependentMetric(v16 != 0 ? 10 : 1, v19, v20);
    v22 = _mm_cvtsi128_si32(v30);
    v10 = 3;
    if ( DpiDependentMetric == _mm_cvtsi128_si32(_mm_srli_si128(v30, 8)) - v22
      && v21 == v30.m128i_i32[3] - v30.m128i_i32[1] )
    {
      v23 = *(_DWORD *)a2;
      if ( a4 )
        v24 = ~(2 * (_BYTE)v23) & 4 | 0x32;
      else
        v24 = (v23 & 2) != 0 ? 46 : 58;
      v25 = v29;
      v26 = v24 + 1;
      if ( !a3 )
        v26 = v24;
      BitBltSysBmp(v29, v22, v30.m128i_i32[1], v26, 1);
    }
    else
    {
      v25 = v29;
      DrawFrameControl(v29, (struct tagRECT *)&v30, 3u, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v25);
    if ( a4 )
      v27 = 1544;
    else
      v27 = 1537;
    SetOrClrWF(a3 != 0, (__int64)a1, v27, 1);
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
    v28 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v28 = -4;
  xxxWindowEvent(0x800Au, (__int64)a1, v28, v4, v10);
}
