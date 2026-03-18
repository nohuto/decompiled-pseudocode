/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00EA6A4
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00EA614 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     DrawThumb2 @ 0x1C00EAF30 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00EB0B8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C00EB0F4 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C00EB144 (GreGetBkColor.c)
 *     DrawFrameControl @ 0x1C012B23C (DrawFrameControl.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  int *v16; // rdx
  int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // esi
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rbx
  unsigned int v26; // eax
  __m128i v27; // xmm6
  __m128i v28; // xmm6
  int BkColor; // [rsp+30h] [rbp-50h]
  int TextColor; // [rsp+34h] [rbp-4Ch]
  __int64 v31; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  int v34[4]; // [rsp+50h] [rbp-30h] BYREF

  memset(v34, 0, sizeof(v34));
  v8 = *((_DWORD *)a2 + 7);
  v10 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v9 = (unsigned int)(v10 >> 31);
  v11 = v8 - *((_DWORD *)a2 + 6);
  v13 = v10 / 2;
  if ( v10 / 2 > 0 && v11 > 0 )
  {
    LODWORD(v9) = v10 % 2;
    DpiForSystem = GetDpiForSystem(2LL, v9, (__int64)a3);
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v16 = v34;
    v17 = &v34[1];
    if ( v13 > DpiDependentMetric )
      v13 = DpiDependentMetric;
    if ( !a4 )
    {
      v16 = &v34[1];
      v17 = v34;
    }
    *v16 = *((_DWORD *)a2 + 6);
    *v17 = *((_DWORD *)a2 + 4);
    v16[2] = *((_DWORD *)a2 + 7);
    v17[2] = *((_DWORD *)a2 + 5);
    v31 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v13 == DpiDependentMetric )
      {
        v21 = GetDpiForSystem(v19, v18, v20);
        if ( v11 == (unsigned int)GetDpiDependentMetric(0LL, v21) )
        {
          v22 = a5;
          BitBltSysBmp(a3, v34[0], v34[1], 1);
          v23 = v34[0];
          v24 = v34[3] - v13;
LABEL_11:
          BitBltSysBmp(a3, v23, v24, 1);
LABEL_12:
          v25 = GreSelectBrush(a3, v31);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v22);
          GreSelectBrush(a3, v25);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v27 = *(__m128i *)v34;
      v22 = a5;
      v34[3] = v13 + v34[1];
      DrawFrameControl(a3);
      v34[3] = _mm_cvtsi128_si32(_mm_srli_si128(v27, 12));
      v34[1] = v34[3] - v13;
    }
    else
    {
      if ( v13 == DpiDependentMetric )
      {
        v26 = GetDpiForSystem(v19, v18, v20);
        if ( v11 == (unsigned int)GetDpiDependentMetric(1LL, v26) )
        {
          v22 = a5;
          BitBltSysBmp(a3, v34[0], v34[1], 1);
          v24 = v34[1];
          v23 = v34[2] - v13;
          goto LABEL_11;
        }
      }
      v28 = *(__m128i *)v34;
      v22 = a5;
      v34[2] = v13 + v34[0];
      DrawFrameControl(a3);
      v34[2] = _mm_srli_si128(v28, 8).m128i_u32[0];
      v34[0] = v34[2] - v13;
    }
    DrawFrameControl(a3);
    goto LABEL_12;
  }
}
