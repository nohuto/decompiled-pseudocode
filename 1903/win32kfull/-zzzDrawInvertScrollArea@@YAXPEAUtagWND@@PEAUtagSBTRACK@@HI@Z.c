/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8
 * Callers:
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0243620 (xxxTrackBox.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C024128C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0241328 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // r15d
  unsigned __int16 v9; // ax
  int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  __int64 DCEx; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int DpiForSystem; // eax
  int v20; // ebx
  int DpiDependentMetric; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  HDC v31; // rdi
  unsigned int v32; // r9d
  unsigned __int16 v33; // ax
  __int64 v34; // r8
  HDC v35; // [rsp+30h] [rbp-58h]
  __m128i v36; // [rsp+38h] [rbp-50h] BYREF

  v4 = 2;
  v5 = a4;
  v6 = a3;
  if ( (unsigned int)a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2, (__int64)a2, a3, a4);
      *(_DWORD *)a2 &= ~8u;
    }
    v36 = *((__m128i *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v14 = *(_DWORD *)a2;
    v35 = (HDC)DCEx;
    DpiForSystem = GetDpiForSystem(v16, v15, v17, v18);
    v20 = v14 & 2;
    DpiDependentMetric = GetDpiDependentMetric(v20 == 0 ? 0xB : 0, DpiForSystem);
    v26 = GetDpiForSystem(v23, v22, v24, v25);
    v27 = GetDpiDependentMetric(v20 != 0 ? 10 : 1, v26);
    v28 = (unsigned int)_mm_cvtsi128_si32(v36);
    v10 = 3;
    if ( DpiDependentMetric == _mm_cvtsi128_si32(_mm_srli_si128(v36, 8)) - (_DWORD)v28
      && v27 == v36.m128i_i32[3] - v36.m128i_i32[1] )
    {
      v29 = *(_DWORD *)a2;
      if ( v5 )
        v30 = ~(2 * (_BYTE)v29) & 4 | 0x32;
      else
        v30 = (v29 & 2) != 0 ? 46 : 58;
      v31 = v35;
      v32 = v30 + 1;
      if ( !v6 )
        v32 = v30;
      BitBltSysBmp(v35, v28, v36.m128i_u32[1], v32, 1);
    }
    else
    {
      v31 = v35;
      DrawFrameControl(v35, (struct tagRECT *)&v36, 3u, (v5 != 0) | (v6 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v31);
    if ( v5 )
      v33 = 1544;
    else
      v33 = 1537;
    SetOrClrWF(v6 != 0, (__int64)a1, v33, 1);
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    v4 = v5 != 0 ? 5 : 1;
    v12 = (v11 & 4) == 0;
  }
  else
  {
    InvertScrollHilite(a1, (const struct tagRECT *)a2);
    if ( v5 == 2 )
      v9 = 1538;
    else
      v9 = 1540;
    SetOrClrWF(v6 != 0, (__int64)a1, v9, 1);
    v10 = 3;
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    if ( v5 != 2 )
      v4 = 4;
    v12 = (v11 & 4) == 0;
  }
  if ( v12 )
    v34 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v34 = 4294967292LL;
  xxxWindowEvent(0x800Au, a1, v34, v4, v10);
}
