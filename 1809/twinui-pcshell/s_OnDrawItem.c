/*
 * XREFs of s_OnDrawItem @ 0x1803B50DC
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x1803B4758 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     floorf_0 @ 0x18009B2B3 (floorf_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x18036F5B0 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1803B4488 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1803B44F0 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x1803B46F0 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_DrawGlyph @ 0x1803B4840 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x1803B4AE0 (s_DrawThemeTextPPIAware.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x1803B629C (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1803B71D4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall s_OnDrawItem(HWND hwnd, __int64 a2, __int64 a3, unsigned int a4)
{
  int ScaleFactorForWindow; // ebx
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rsi
  const WCHAR *v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // r12d
  __int64 v12; // rdx
  int v13; // edi
  HDC v14; // rdx
  HGDIOBJ *v15; // r13
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r13d
  HTHEME v24; // rdi
  int v25; // r12d
  bool v26; // zf
  int v27; // r8d
  int v28; // r9d
  int *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // eax
  HDC v34; // r9
  COLORREF v35; // edx
  int v36; // eax
  int Error; // eax
  int v38; // r8d
  int v39; // r9d
  int *v40; // rax
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // r13d
  int v44; // eax
  int v45; // eax
  int v46; // r12d
  int v47; // edi
  SHSTOCKICONID v48; // ecx
  int v49; // edi
  void *v50; // rdi
  int v51; // eax
  int v52; // r12d
  int v53; // ebx
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // r8d
  int v57; // ecx
  int v58; // r12d
  HDC v59; // r13
  HDC v60; // rcx
  BOOL v61; // eax
  int v62; // edi
  HDC v63; // rcx
  int v64; // r12d
  __int64 v65; // r9
  __int64 v66; // rcx
  int v67; // edi
  int v68; // r8d
  int v69; // r9d
  int *v70; // rax
  __int64 v71; // r9
  __int64 v72; // rcx
  int v73; // ebx
  int v74; // eax
  HDC v75; // r9
  COLORREF v76; // edx
  int v77; // ecx
  unsigned int v78; // eax
  __int64 v79; // r9
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  float v84; // xmm0_4
  HDC v85; // rdx
  __int16 pClipRect; // [rsp+28h] [rbp-D8h]
  int pClipRecta; // [rsp+28h] [rbp-D8h]
  UINT diFlags; // [rsp+40h] [rbp-C0h]
  char v90; // [rsp+60h] [rbp-A0h]
  int nDenominator; // [rsp+64h] [rbp-9Ch] BYREF
  int yTop; // [rsp+68h] [rbp-98h]
  int yoriginDest; // [rsp+6Ch] [rbp-94h]
  int iStateId; // [rsp+70h] [rbp-90h]
  HDC hdc[2]; // [rsp+80h] [rbp-80h] BYREF
  int v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+94h] [rbp-6Ch] BYREF
  HTHEME hTheme; // [rsp+98h] [rbp-68h]
  COLORREF pColor; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE pv[4]; // [rsp+A8h] [rbp-58h] BYREF
  int nNumber; // [rsp+ACh] [rbp-54h]
  int hSrc; // [rsp+B0h] [rbp-50h]
  SHSTOCKICONINFO psii; // [rsp+D0h] [rbp-30h] BYREF
  HGDIOBJ h[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v105[46]; // [rsp+300h] [rbp+200h] BYREF
  __int16 v106; // [rsp+32Eh] [rbp+22Eh]
  int v107; // [rsp+330h] [rbp+230h]

  ScaleFactorForWindow = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 56),
                             *(unsigned int *)(a2 + 8),
                             a4);
  if ( ContextMenuDataForItem )
  {
    if ( MonitorFromWindow(hwnd, 2u) )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(hwnd, &v97);
      if ( ScaleFactorForWindow >= 0 )
      {
        v8 = L"ImmersiveStartDark::Menu";
        if ( !*((_BYTE *)ContextMenuDataForItem + 68) )
          v8 = L"ImmersiveStart::Menu";
        hTheme = OpenThemeData(0LL, v8);
        if ( hTheme )
        {
          v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          v10 = 6;
          v11 = *(_DWORD *)(a2 + 16);
          if ( (v9 & 1) != 0 )
          {
            if ( *((_BYTE *)ContextMenuDataForItem + 68) || (v12 = 2LL, (v9 & 4) != 0) )
              v12 = 6LL;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v12,
                                      hwnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
            v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          }
          if ( (v9 & 2) != 0 )
          {
            if ( !*((_BYTE *)ContextMenuDataForItem + 68) && (v9 & 4) == 0 )
              v10 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v10,
                                      hwnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
          }
          if ( (v11 & 4) != 0 )
          {
            if ( (v11 & 1) != 0 && *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
              v13 = 4;
            else
              v13 = 3;
          }
          else if ( (v11 & 1) == 0
                 || !*(_QWORD *)ContextMenuDataForItem
                 || (v13 = 2, !**(_WORD **)ContextMenuDataForItem) )
          {
            v13 = 1;
          }
          v14 = *(HDC *)(a2 + 32);
          v15 = (HGDIOBJ *)(a2 + 40);
          iStateId = v13;
          ScaleFactorForWindow = DrawThemeBackground(hTheme, v14, 14, v13, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_86;
          if ( *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
          {
            if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
            {
              v16 = *((unsigned int *)ContextMenuDataForItem + 16);
              v17 = *((unsigned int *)ContextMenuDataForItem + 15);
              v18 = *(_DWORD *)v15;
              v19 = *(_DWORD *)(a2 + 48);
              HIDWORD(hdc[0]) = *(_DWORD *)(a2 + 44);
              HIDWORD(hdc[1]) = *(_DWORD *)(a2 + 52);
              v20 = DPIToPPIHelpers::ScaleByType(v17, 32LL, hwnd, v16);
              v21 = *((unsigned int *)ContextMenuDataForItem + 16);
              v22 = *((unsigned int *)ContextMenuDataForItem + 15);
              LODWORD(hdc[0]) = v18 + v20;
              v23 = iStateId;
              LODWORD(hdc[1]) = v19 - DPIToPPIHelpers::ScaleByType(v22, 17LL, hwnd, v21);
              v24 = hTheme;
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(
                                       hTheme,
                                       (unsigned int)iStateId,
                                       (__int64)hwnd,
                                       a2,
                                       (__int64)ContextMenuDataForItem,
                                       (int *)hdc);
              if ( ScaleFactorForWindow < 0 )
                goto LABEL_86;
              v96 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
              v25 = v11 & 8;
              if ( !v25 || *((_QWORD *)ContextMenuDataForItem + 5) )
              {
                if ( *((_DWORD *)ContextMenuDataForItem + 7) == -1 )
                {
                  v50 = (void *)*((_QWORD *)ContextMenuDataForItem + 4);
                  if ( v50
                    || v25 && (v50 = (void *)*((_QWORD *)ContextMenuDataForItem + 5)) != 0LL
                    || (v50 = (void *)*((_QWORD *)ContextMenuDataForItem + 6)) != 0LL )
                  {
                    ScaleFactorForWindow = -2147467259;
                    if ( !GetObjectW(v50, 32, pv) )
                      goto LABEL_86;
                    Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                      (Microsoft::WRL::Wrappers::CompatibleDC *)hdc,
                      *(HDC *)(a2 + 32));
                    if ( hdc[1] || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
                    {
                      v51 = DPIToPPIHelpers::ScaleByType(
                              *((unsigned int *)ContextMenuDataForItem + 15),
                              16LL,
                              hwnd,
                              *((unsigned int *)ContextMenuDataForItem + 16));
                      v52 = hSrc;
                      v53 = nNumber;
                      v90 = 0;
                      if ( hSrc > v51 || nNumber > v51 )
                      {
                        yTop = *((_DWORD *)ContextMenuDataForItem + 16);
                        SHComputeDPI(0LL, &nDenominator, 0LL);
                        if ( nDenominator > yTop )
                        {
                          v90 = 1;
                          v53 = MulDiv(v53, yTop, nDenominator);
                          v52 = MulDiv(v52, yTop, nDenominator);
                        }
                      }
                      v54 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v55 = *((unsigned int *)ContextMenuDataForItem + 15);
                      nDenominator = *(_DWORD *)(a2 + 44);
                      yoriginDest = v52 + nDenominator;
                      v56 = DPIToPPIHelpers::ScaleByType(v55, 16LL, hwnd, v54);
                      if ( v56 > v53 )
                      {
                        v90 = 1;
                        v56 = 2 * v56 - v53;
                      }
                      v57 = (v96 - v52) / 2;
                      v58 = v57 + yoriginDest;
                      yTop = v56 / 2;
                      yoriginDest = v57 + nDenominator;
                      pColor = 0;
                      GetThemeColor(hTheme, 14, v23, 3803, &pColor);
                      v59 = hdc[1];
                      h[0] = SelectObject(hdc[1], v50);
                      if ( GetObjectW(v50, 104, v105) == 104 && v106 == 32 && !v107 )
                      {
                        v60 = *(HDC *)(a2 + 32);
                        nDenominator = 33488896;
                        v61 = GdiAlphaBlend(
                                v60,
                                yTop,
                                yoriginDest,
                                v53,
                                v58 - yoriginDest,
                                hdc[1],
                                0,
                                0,
                                nNumber,
                                hSrc,
                                (BLENDFUNCTION)33488896);
                      }
                      else
                      {
                        v62 = yoriginDest;
                        v63 = *(HDC *)(a2 + 32);
                        v64 = v58 - yoriginDest;
                        if ( v90 )
                        {
                          SetStretchBltMode(v63, 3);
                          v61 = StretchBlt(
                                  *(HDC *)(a2 + 32),
                                  yTop,
                                  v62,
                                  v53,
                                  v64,
                                  hdc[1],
                                  0,
                                  0,
                                  nNumber,
                                  hSrc,
                                  0xCC0020u);
                        }
                        else
                        {
                          v61 = BitBlt(v63, yTop, yoriginDest, v53, v64, hdc[1], 0, 0, 0xCC0020u);
                        }
                      }
                      if ( v61 )
                        ScaleFactorForWindow = 0;
                      else
                        ScaleFactorForWindow = ResultFromKnownLastError();
                      SelectObject(v59, h[0]);
                    }
                    Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                  }
                  goto LABEL_75;
                }
                v26 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                *(__m128i *)h = _mm_load_si128((const __m128i *)&_xmm);
                if ( v26 )
                {
                  v38 = v97;
                  v39 = 100;
                }
                else
                {
                  v38 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v39 = 96;
                }
                v40 = Geometry::CRect::MulDiv((int *)hdc, (int *)h, v38, v39);
                v41 = *((unsigned int *)ContextMenuDataForItem + 16);
                v42 = *((unsigned int *)ContextMenuDataForItem + 15);
                *(_OWORD *)h = *(_OWORD *)v40;
                v43 = *(_DWORD *)(a2 + 44) + HIDWORD(h[1]);
                yoriginDest = *(_DWORD *)(a2 + 44) + HIDWORD(h[0]);
                v44 = DPIToPPIHelpers::ScaleByType(v42, 16LL, hwnd, v41);
                yTop = yoriginDest + v96 / 2 - v44 / 2;
                if ( *((_DWORD *)ContextMenuDataForItem + 15) )
                {
                  v47 = (int)h[1];
                  v46 = (int)h[0];
                }
                else
                {
                  v45 = (int)DPIToPPIHelpers::ScaleByType(
                               0LL,
                               16LL,
                               hwnd,
                               *((unsigned int *)ContextMenuDataForItem + 16))
                      / 2;
                  v46 = v45 + LODWORD(h[0]);
                  v47 = v45 + LODWORD(h[1]);
                }
                memset_0(&psii, 0, sizeof(psii));
                v48 = *((_DWORD *)ContextMenuDataForItem + 7);
                psii.cbSize = 544;
                v49 = v47 - v46;
                if ( SHGetStockIconInfo(v48, (v49 < 24) + 256, &psii) < 0 )
                {
LABEL_75:
                  if ( ScaleFactorForWindow >= 0 )
                  {
LABEL_76:
                    if ( (*((_BYTE *)ContextMenuDataForItem + 24) & 0x10) != 0 )
                    {
                      v65 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v66 = *((unsigned int *)ContextMenuDataForItem + 15);
                      *(__m128i *)h = _mm_load_si128((const __m128i *)&_xmm);
                      v67 = *(_DWORD *)(a2 + 48) - DPIToPPIHelpers::ScaleByType(v66, 28LL, hwnd, v65);
                      if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                      {
                        v68 = v97;
                        v69 = 100;
                      }
                      else
                      {
                        v68 = *((_DWORD *)ContextMenuDataForItem + 16);
                        v69 = 96;
                      }
                      v70 = Geometry::CRect::MulDiv((int *)hdc, (int *)h, v68, v69);
                      v71 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v72 = *((unsigned int *)ContextMenuDataForItem + 15);
                      v73 = *(_DWORD *)(a2 + 44);
                      *(_OWORD *)h = *(_OWORD *)v70;
                      LODWORD(h[0]) += v67;
                      LODWORD(h[1]) += v67;
                      v74 = DPIToPPIHelpers::ScaleByType(v72, 16LL, hwnd, v71);
                      v75 = *(HDC *)(a2 + 32);
                      v76 = *((_DWORD *)ContextMenuDataForItem + 16);
                      v77 = v96 / 2 - v74 / 2 + v73;
                      HIDWORD(h[0]) += v77;
                      v78 = *((_DWORD *)ContextMenuDataForItem + 15);
                      HIDWORD(h[1]) += v77;
                      pClipRecta = *((_DWORD *)ContextMenuDataForItem + 6);
                      *(_OWORD *)hdc = *(_OWORD *)h;
                      ScaleFactorForWindow = s_DrawGlyph(
                                               hwnd,
                                               v76,
                                               hTheme,
                                               v75,
                                               16,
                                               pClipRecta,
                                               iStateId,
                                               (struct tagRECT *)hdc,
                                               v78);
                    }
                  }
LABEL_86:
                  ExcludeClipRect(
                    *(HDC *)(a2 + 32),
                    *(_DWORD *)(a2 + 40),
                    *(_DWORD *)(a2 + 44),
                    *(_DWORD *)(a2 + 48),
                    *(_DWORD *)(a2 + 52));
                  CloseThemeData(hTheme);
                  return (unsigned int)ScaleFactorForWindow;
                }
                if ( DrawIconEx(*(HDC *)(a2 + 32), v46, yTop, psii.hIcon, v49, v43 - yoriginDest, 0, 0LL, 3u) )
                {
                  ScaleFactorForWindow = 0;
                  goto LABEL_76;
                }
                Error = ResultFromKnownLastError();
              }
              else
              {
                v26 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                *(__m128i *)h = _mm_load_si128((const __m128i *)&_xmm);
                if ( v26 )
                {
                  v27 = v97;
                  v28 = 100;
                }
                else
                {
                  v27 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v28 = 96;
                }
                v29 = Geometry::CRect::MulDiv((int *)hdc, (int *)h, v27, v28);
                v30 = *((unsigned int *)ContextMenuDataForItem + 16);
                v31 = *((unsigned int *)ContextMenuDataForItem + 15);
                v32 = *(_DWORD *)(a2 + 44);
                *(_OWORD *)h = *(_OWORD *)v29;
                v33 = DPIToPPIHelpers::ScaleByType(v31, 16LL, hwnd, v30);
                v34 = *(HDC *)(a2 + 32);
                v35 = *((_DWORD *)ContextMenuDataForItem + 16);
                v36 = v96 / 2 - v33 / 2;
                HIDWORD(h[1]) += v32 + v36;
                diFlags = *((_DWORD *)ContextMenuDataForItem + 15);
                HIDWORD(h[0]) += v32 + v36;
                pClipRect = *((_DWORD *)ContextMenuDataForItem + 6);
                *(_OWORD *)hdc = *(_OWORD *)h;
                Error = s_DrawGlyph(hwnd, v35, v24, v34, 11, pClipRect, iStateId, (struct tagRECT *)hdc, diFlags);
              }
              ScaleFactorForWindow = Error;
              goto LABEL_75;
            }
          }
          else if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
          {
            goto LABEL_86;
          }
          v79 = *((unsigned int *)ContextMenuDataForItem + 16);
          v80 = *((unsigned int *)ContextMenuDataForItem + 15);
          h[0] = *v15;
          h[1] = *(HGDIOBJ *)(a2 + 48);
          v81 = DPIToPPIHelpers::ScaleByType(v80, 8LL, hwnd, v79);
          LODWORD(h[0]) += v81;
          LODWORD(h[1]) -= v81;
          if ( *((_BYTE *)ContextMenuDataForItem + 68)
            || (v82 = 7LL, (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0) )
          {
            v82 = 9LL;
          }
          v83 = DPIToPPIHelpers::ScaleByType(
                  *((unsigned int *)ContextMenuDataForItem + 15),
                  v82,
                  hwnd,
                  *((unsigned int *)ContextMenuDataForItem + 16));
          v84 = floorf_0((double)(v83 - 5) * 0.5);
          --HIDWORD(h[1]);
          v85 = *(HDC *)(a2 + 32);
          HIDWORD(h[0]) += (int)v84;
          DrawThemeBackground(hTheme, v85, 15, v13, (LPCRECT)h, 0LL);
          goto LABEL_86;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
