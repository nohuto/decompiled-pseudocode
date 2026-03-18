/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0106138 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C0106B08 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0106C88 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C0106CC4 (GreGetTextColor.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  __int64 v7; // kr00_8
  int v10; // esi
  int v11; // r14d
  unsigned int DpiForSystem; // eax
  __int64 v13; // r8
  int DpiDependentMetric; // r12d
  int *v15; // rdx
  int *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // esi
  int v20; // edx
  int v21; // r8d
  __m128i v22; // xmm6
  unsigned int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // r8
  __m128i v26; // xmm6
  __int64 v27; // rbx
  int v28; // [rsp+38h] [rbp-61h]
  int TextColor; // [rsp+3Ch] [rbp-5Dh]
  __int64 v30; // [rsp+40h] [rbp-59h]
  HBRUSH ColorObjects; // [rsp+48h] [rbp-51h]
  _QWORD v33[6]; // [rsp+58h] [rbp-41h] BYREF
  int v34[4]; // [rsp+88h] [rbp-11h] BYREF

  v7 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v10 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v11 = ((int)v7 - HIDWORD(v7)) >> 1;
  if ( v11 > 0 && v10 > 0 )
  {
    DpiForSystem = GetDpiForSystem();
    v28 = -1;
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem, v13);
    DCOBJ::DCOBJ((DCOBJ *)v33, a3);
    if ( v33[0] )
      v28 = *(_DWORD *)(*(_QWORD *)(v33[0] + 976LL) + 180LL);
    DCOBJ::~DCOBJ((DCOBJ *)v33);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v15 = v34;
    v16 = &v34[1];
    if ( v11 > DpiDependentMetric )
      v11 = DpiDependentMetric;
    if ( !a4 )
    {
      v15 = &v34[1];
      v16 = v34;
    }
    *v15 = *((_DWORD *)a2 + 6);
    *v16 = *((_DWORD *)a2 + 4);
    v15[2] = *((_DWORD *)a2 + 7);
    v16[2] = *((_DWORD *)a2 + 5);
    v30 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v11 == DpiDependentMetric )
      {
        v17 = GetDpiForSystem();
        if ( v10 == (unsigned int)GetDpiDependentMetric(0LL, v17, v18) )
        {
          v19 = a5;
          BitBltSysBmp(a3, v34[0], v34[1], 1);
          v20 = v34[0];
          v21 = v34[3] - v11;
LABEL_17:
          BitBltSysBmp(a3, v20, v21, 1);
LABEL_20:
          v27 = GreSelectBrush(a3, v30);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v19);
          GreSelectBrush(a3, v27);
          GreSetBkColor(a3, v28);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v22 = *(__m128i *)v34;
      v19 = a5;
      v34[3] = v11 + v34[1];
      DrawFrameControl(a3, (struct tagRECT *)v34, 3u, (a5 & 1) << 8);
      v34[3] = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
      v34[1] = v34[3] - v11;
      v23 = ((a5 & 2) << 7) | 1;
    }
    else
    {
      if ( v11 == DpiDependentMetric )
      {
        v24 = GetDpiForSystem();
        if ( v10 == (unsigned int)GetDpiDependentMetric(1LL, v24, v25) )
        {
          v19 = a5;
          BitBltSysBmp(a3, v34[0], v34[1], 1);
          v21 = v34[1];
          v20 = v34[2] - v11;
          goto LABEL_17;
        }
      }
      v26 = *(__m128i *)v34;
      v19 = a5;
      v34[2] = v11 + v34[0];
      DrawFrameControl(a3, (struct tagRECT *)v34, 3u, ((a5 & 1) << 8) | 2);
      v34[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
      v34[0] = v34[2] - v11;
      v23 = ((a5 & 2) << 7) | 3;
    }
    DrawFrameControl(a3, (struct tagRECT *)v34, 3u, v23);
    goto LABEL_20;
  }
}
