/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688
 * Callers:
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x1C012B23C (DrawFrameControl.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0240C6C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240D08 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  int v4; // esi
  unsigned __int16 v9; // ax
  int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  __int64 DCEx; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int DpiForSystem; // eax
  int v19; // ebx
  int DpiDependentMetric; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  HDC v29; // rdi
  unsigned int v30; // r9d
  unsigned __int16 v31; // ax
  __int64 v32; // r8
  HDC v33; // [rsp+30h] [rbp-58h]
  __m128i v34; // [rsp+38h] [rbp-50h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v34 = *((__m128i *)a2 + 2);
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v14 = *(_DWORD *)a2;
    v33 = (HDC)DCEx;
    DpiForSystem = GetDpiForSystem(v16, v15, v17);
    v19 = v14 & 2;
    DpiDependentMetric = GetDpiDependentMetric(v19 == 0 ? 0xB : 0, DpiForSystem);
    v24 = GetDpiForSystem(v22, v21, v23);
    v25 = GetDpiDependentMetric(v19 != 0 ? 10 : 1, v24);
    v26 = (unsigned int)_mm_cvtsi128_si32(v34);
    v10 = 3;
    if ( DpiDependentMetric == _mm_cvtsi128_si32(_mm_srli_si128(v34, 8)) - (_DWORD)v26
      && v25 == v34.m128i_i32[3] - v34.m128i_i32[1] )
    {
      v27 = *(_DWORD *)a2;
      if ( a4 )
        v28 = ~(2 * (_BYTE)v27) & 4 | 0x32;
      else
        v28 = (v27 & 2) != 0 ? 46 : 58;
      v29 = v33;
      v30 = v28 + 1;
      if ( !a3 )
        v30 = v28;
      BitBltSysBmp((__int64)v33, v26, v34.m128i_u32[1], v30, 1);
    }
    else
    {
      v29 = v33;
      DrawFrameControl(v33, (struct tagRECT *)&v34, 3, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v29);
    if ( a4 )
      v31 = 1544;
    else
      v31 = 1537;
    SetOrClrWF(a3 != 0, (__int64)a1, v31, 1);
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
    v32 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v32 = 4294967292LL;
  xxxWindowEvent(0x800Au, a1, v32, v4, v10);
}
