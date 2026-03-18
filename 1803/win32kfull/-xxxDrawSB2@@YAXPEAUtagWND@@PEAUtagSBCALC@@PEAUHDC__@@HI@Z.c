/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608
 * Callers:
 *     xxxDrawScrollBar @ 0x1C012F578 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     DrawThumb2 @ 0x1C012F804 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F984 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C012F9C0 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C012FA0C (GreGetBkColor.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v9; // esi
  int v10; // r14d
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // r12d
  struct tagRECT *v13; // rdx
  struct tagRECT *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  LONG v17; // edx
  unsigned int v18; // r9d
  LONG v19; // r8d
  __int64 v20; // rbx
  __m128i v21; // xmm6
  unsigned int v22; // r9d
  unsigned int v23; // eax
  __m128i v24; // xmm6
  int BkColor; // [rsp+30h] [rbp-50h]
  int TextColor; // [rsp+34h] [rbp-4Ch]
  __int64 v27; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  __m128i v30; // [rsp+50h] [rbp-30h] BYREF

  v9 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v10 = (*((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4)) / 2;
  if ( v10 > 0 && v9 > 0 )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v13 = (struct tagRECT *)&v30;
    v14 = (struct tagRECT *)((char *)v30.m128i_i64 + 4);
    if ( v10 > DpiDependentMetric )
      v10 = DpiDependentMetric;
    if ( !a4 )
    {
      v13 = (struct tagRECT *)((char *)v30.m128i_i64 + 4);
      v14 = (struct tagRECT *)&v30;
    }
    v13->left = *((_DWORD *)a2 + 6);
    v14->left = *((_DWORD *)a2 + 4);
    v13->right = *((_DWORD *)a2 + 7);
    v14->right = *((_DWORD *)a2 + 5);
    v27 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4840LL));
    if ( a4 )
    {
      if ( v10 == DpiDependentMetric )
      {
        v15 = GetDpiForSystem();
        if ( v9 == (unsigned int)GetDpiDependentMetric(0LL, v15) )
        {
          v16 = a5;
          BitBltSysBmp(a3, v30.m128i_u32[0], v30.m128i_u32[1], (a5 & 1) != 0 ? 49 : 46, 1);
          v17 = v30.m128i_i32[0];
          v18 = (a5 & 2) != 0 ? 53 : 50;
          v19 = v30.m128i_i32[3] - v10;
LABEL_11:
          BitBltSysBmp(a3, v17, v19, v18, 1);
LABEL_12:
          v20 = GreSelectBrush(a3, v27);
          DrawThumb2(a1, a2, a3, ColorObjects, a4, v16);
          GreSelectBrush(a3, v20);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v21 = v30;
      v16 = a5;
      v30.m128i_i32[3] = v10 + v30.m128i_i32[1];
      DrawFrameControl(a3, (struct tagRECT *)&v30, 3, (a5 & 1) << 8);
      v30.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
      v30.m128i_i32[1] = v30.m128i_i32[3] - v10;
      v22 = ((a5 & 2) << 7) | 1;
    }
    else
    {
      if ( v10 == DpiDependentMetric )
      {
        v23 = GetDpiForSystem();
        if ( v9 == (unsigned int)GetDpiDependentMetric(1LL, v23) )
        {
          v16 = a5;
          BitBltSysBmp(a3, v30.m128i_u32[0], v30.m128i_u32[1], (a5 & 1) != 0 ? 61 : 58, 1);
          v19 = v30.m128i_i32[1];
          v18 = (a5 & 2) != 0 ? 57 : 54;
          v17 = v30.m128i_i32[2] - v10;
          goto LABEL_11;
        }
      }
      v24 = v30;
      v16 = a5;
      v30.m128i_i32[2] = v10 + v30.m128i_i32[0];
      DrawFrameControl(a3, (struct tagRECT *)&v30, 3, ((a5 & 1) << 8) | 2);
      v30.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
      v30.m128i_i32[0] = v30.m128i_i32[2] - v10;
      v22 = ((a5 & 2) << 7) | 3;
    }
    DrawFrameControl(a3, (struct tagRECT *)&v30, 3, v22);
    goto LABEL_12;
  }
}
