/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C000B548
 * Callers:
 *     xxxDrawScrollBar @ 0x1C000B4B8 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C000BDD0 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C000BF58 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C000BF94 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C000BFE4 (GreGetBkColor.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v8; // esi
  __int64 v9; // rdx
  int v10; // kr00_4
  int v11; // esi
  int v13; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // r12d
  __m128i *v16; // rdx
  __m128i *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v23; // eax
  __m128i v24; // xmm6
  __m128i v25; // xmm6
  __int64 v26; // [rsp+30h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  __m128i v30; // [rsp+50h] [rbp-30h] BYREF

  v30 = 0uLL;
  v8 = *((_DWORD *)a2 + 7);
  v10 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v9 = (unsigned int)(v10 >> 31);
  v11 = v8 - *((_DWORD *)a2 + 6);
  v13 = v10 / 2;
  if ( v10 / 2 > 0 && v11 > 0 )
  {
    LODWORD(v9) = v10 % 2;
    DpiForSystem = GetDpiForSystem(2LL, v9);
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    LODWORD(v26) = GreGetBkColor(a3);
    HIDWORD(v26) = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v16 = &v30;
    v17 = (__m128i *)((char *)v30.m128i_i64 + 4);
    if ( v13 > DpiDependentMetric )
      v13 = DpiDependentMetric;
    if ( !a4 )
    {
      v16 = (__m128i *)((char *)v30.m128i_i64 + 4);
      v17 = &v30;
    }
    v16->m128i_i32[0] = *((_DWORD *)a2 + 6);
    v17->m128i_i32[0] = *((_DWORD *)a2 + 4);
    v16->m128i_i32[2] = *((_DWORD *)a2 + 7);
    v17->m128i_i32[2] = *((_DWORD *)a2 + 5);
    v27 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v13 == DpiDependentMetric )
      {
        v20 = GetDpiForSystem(v19, v18);
        if ( v11 == (unsigned int)GetDpiDependentMetric(0LL, v20) )
        {
LABEL_10:
          v21 = a5;
          BitBltSysBmp(a3, 1);
          BitBltSysBmp(a3, 1);
LABEL_11:
          v22 = GreSelectBrush(a3, v27);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v21, v26);
          GreSelectBrush(a3, v22);
          GreSetBkColor(a3);
          GreSetTextColor(a3);
          return;
        }
      }
      v24 = v30;
      v21 = a5;
      v30.m128i_i32[3] = v13 + v30.m128i_i32[1];
      DrawFrameControl(a3);
      v30.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v24, 12));
      v30.m128i_i32[1] = v30.m128i_i32[3] - v13;
    }
    else
    {
      if ( v13 == DpiDependentMetric )
      {
        v23 = GetDpiForSystem(v19, v18);
        if ( v11 == (unsigned int)GetDpiDependentMetric(1LL, v23) )
          goto LABEL_10;
      }
      v25 = v30;
      v21 = a5;
      v30.m128i_i32[2] = v13 + v30.m128i_i32[0];
      DrawFrameControl(a3);
      v30.m128i_i32[2] = _mm_srli_si128(v25, 8).m128i_u32[0];
      v30.m128i_i32[0] = v30.m128i_i32[2] - v13;
    }
    DrawFrameControl(a3);
    goto LABEL_11;
  }
}
