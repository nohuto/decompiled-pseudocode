/*
 * XREFs of s_OnDrawItem @ 0x1804178A4
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x180416F58 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     floorf_0 @ 0x1800B0F33 (floorf_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x1803D5460 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x180416C88 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180416CF0 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x180416EF0 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_DrawGlyph @ 0x180417040 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x1804172E0 (s_DrawThemeTextPPIAware.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180418A98 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180419AD4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
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
  int *v15; // r13
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r12d
  bool v24; // zf
  int v25; // r8d
  int v26; // r9d
  int *v27; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // eax
  HDC v32; // r9
  COLORREF v33; // edx
  int v34; // eax
  int Error; // eax
  int v36; // r8d
  int v37; // r9d
  int *v38; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // r12d
  int v45; // edi
  SHSTOCKICONID v46; // ecx
  int v47; // edi
  void *v48; // rdi
  int v49; // eax
  int v50; // r12d
  int v51; // ebx
  __int64 v52; // r9
  __int64 v53; // rcx
  int v54; // r8d
  int v55; // ecx
  int v56; // r12d
  HDC v57; // rcx
  BOOL v58; // eax
  int v59; // edi
  HDC v60; // rcx
  int v61; // r12d
  __int64 v62; // r9
  __int64 v63; // rcx
  int v64; // edi
  int v65; // r8d
  int v66; // r9d
  int *v67; // rax
  __int64 v68; // r9
  __int64 v69; // rcx
  int v70; // ebx
  int v71; // eax
  HDC v72; // r9
  COLORREF v73; // edx
  int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // r9
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  int v80; // eax
  float v81; // xmm0_4
  HDC v82; // rdx
  __int16 pClipRect; // [rsp+28h] [rbp-D8h]
  int pClipRecta; // [rsp+28h] [rbp-D8h]
  UINT diFlags; // [rsp+40h] [rbp-C0h]
  char v87; // [rsp+60h] [rbp-A0h]
  int nDenominator; // [rsp+64h] [rbp-9Ch] BYREF
  int yTop; // [rsp+68h] [rbp-98h]
  int iStateId; // [rsp+6Ch] [rbp-94h]
  int yoriginDest; // [rsp+70h] [rbp-90h]
  HDC hdc[2]; // [rsp+80h] [rbp-80h] BYREF
  int v93; // [rsp+90h] [rbp-70h]
  int v94; // [rsp+94h] [rbp-6Ch] BYREF
  HTHEME hTheme; // [rsp+98h] [rbp-68h]
  COLORREF pColor[2]; // [rsp+A0h] [rbp-60h] BYREF
  HGDIOBJ h; // [rsp+A8h] [rbp-58h]
  _BYTE pv[4]; // [rsp+B0h] [rbp-50h] BYREF
  int nNumber; // [rsp+B4h] [rbp-4Ch]
  int hSrc; // [rsp+B8h] [rbp-48h]
  SHSTOCKICONINFO psii; // [rsp+D0h] [rbp-30h] BYREF
  HDC pRect[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE v103[46]; // [rsp+300h] [rbp+200h] BYREF
  __int16 v104; // [rsp+32Eh] [rbp+22Eh]
  int v105; // [rsp+330h] [rbp+230h]

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
      ScaleFactorForWindow = GetScaleFactorForWindow(hwnd, &v94);
      if ( ScaleFactorForWindow >= 0 )
      {
        if ( *((_BYTE *)ContextMenuDataForItem + 68) )
        {
          v8 = L"DarkMode_ImmersiveStart::Menu";
        }
        else
        {
          v8 = L"LightMode_ImmersiveStart::Menu";
          if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
            v8 = L"ImmersiveStart::Menu";
        }
        hTheme = OpenThemeData(0LL, v8);
        if ( hTheme )
        {
          v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          v10 = 6;
          v11 = *(_DWORD *)(a2 + 16);
          if ( (v9 & 1) != 0 )
          {
            if ( *((_BYTE *)ContextMenuDataForItem + 69) || (v12 = 2LL, (v9 & 4) != 0) )
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
            if ( !*((_BYTE *)ContextMenuDataForItem + 69) && (v9 & 4) == 0 )
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
          v15 = (int *)(a2 + 40);
          iStateId = v13;
          ScaleFactorForWindow = DrawThemeBackground(hTheme, v14, 14, v13, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_88;
          if ( *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
          {
            if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
            {
              v16 = *((unsigned int *)ContextMenuDataForItem + 16);
              v17 = *((unsigned int *)ContextMenuDataForItem + 15);
              v18 = *v15;
              v19 = *(_DWORD *)(a2 + 48);
              HIDWORD(hdc[0]) = *(_DWORD *)(a2 + 44);
              HIDWORD(hdc[1]) = *(_DWORD *)(a2 + 52);
              v20 = DPIToPPIHelpers::ScaleByType(v17, 32LL, hwnd, v16);
              v21 = *((unsigned int *)ContextMenuDataForItem + 16);
              v22 = *((unsigned int *)ContextMenuDataForItem + 15);
              LODWORD(hdc[0]) = v18 + v20;
              LODWORD(hdc[1]) = v19 - DPIToPPIHelpers::ScaleByType(v22, 17LL, hwnd, v21);
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(
                                       hTheme,
                                       (unsigned int)iStateId,
                                       (__int64)hwnd,
                                       a2,
                                       (__int64)ContextMenuDataForItem,
                                       (__m128i *)hdc);
              if ( ScaleFactorForWindow < 0 )
                goto LABEL_88;
              v93 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
              v23 = v11 & 8;
              if ( !v23 || *((_QWORD *)ContextMenuDataForItem + 5) )
              {
                if ( *((_DWORD *)ContextMenuDataForItem + 7) == -1 )
                {
                  v48 = (void *)*((_QWORD *)ContextMenuDataForItem + 4);
                  if ( v48
                    || v23 && (v48 = (void *)*((_QWORD *)ContextMenuDataForItem + 5)) != 0LL
                    || (v48 = (void *)*((_QWORD *)ContextMenuDataForItem + 6)) != 0LL )
                  {
                    ScaleFactorForWindow = -2147467259;
                    if ( !GetObjectW(v48, 32, pv) )
                      goto LABEL_88;
                    Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                      (Microsoft::WRL::Wrappers::CompatibleDC *)hdc,
                      *(HDC *)(a2 + 32));
                    if ( hdc[1] || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
                    {
                      v49 = DPIToPPIHelpers::ScaleByType(
                              *((unsigned int *)ContextMenuDataForItem + 15),
                              16LL,
                              hwnd,
                              *((unsigned int *)ContextMenuDataForItem + 16));
                      v50 = hSrc;
                      v51 = nNumber;
                      v87 = 0;
                      if ( hSrc > v49 || nNumber > v49 )
                      {
                        yTop = *((_DWORD *)ContextMenuDataForItem + 16);
                        SHComputeDPI(0LL, &nDenominator, 0LL);
                        if ( nDenominator > yTop )
                        {
                          v87 = 1;
                          v51 = MulDiv(v51, yTop, nDenominator);
                          v50 = MulDiv(v50, yTop, nDenominator);
                        }
                      }
                      v52 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v53 = *((unsigned int *)ContextMenuDataForItem + 15);
                      nDenominator = *(_DWORD *)(a2 + 44);
                      yoriginDest = v50 + nDenominator;
                      v54 = DPIToPPIHelpers::ScaleByType(v53, 16LL, hwnd, v52);
                      if ( v54 > v51 )
                      {
                        v87 = 1;
                        v54 = 2 * v54 - v51;
                      }
                      v55 = (v93 - v50) / 2;
                      v56 = v55 + yoriginDest;
                      yTop = v54 / 2;
                      yoriginDest = v55 + nDenominator;
                      pColor[0] = 0;
                      GetThemeColor(hTheme, 14, iStateId, 3803, pColor);
                      pRect[0] = hdc[1];
                      h = SelectObject(hdc[1], v48);
                      if ( GetObjectW(v48, 104, v103) == 104 && v104 == 32 && !v105 )
                      {
                        v57 = *(HDC *)(a2 + 32);
                        nDenominator = 33488896;
                        v58 = GdiAlphaBlend(
                                v57,
                                yTop,
                                yoriginDest,
                                v51,
                                v56 - yoriginDest,
                                hdc[1],
                                0,
                                0,
                                nNumber,
                                hSrc,
                                (BLENDFUNCTION)33488896);
                      }
                      else
                      {
                        v59 = yoriginDest;
                        v60 = *(HDC *)(a2 + 32);
                        v61 = v56 - yoriginDest;
                        if ( v87 )
                        {
                          SetStretchBltMode(v60, 3);
                          v58 = StretchBlt(
                                  *(HDC *)(a2 + 32),
                                  yTop,
                                  v59,
                                  v51,
                                  v61,
                                  hdc[1],
                                  0,
                                  0,
                                  nNumber,
                                  hSrc,
                                  0xCC0020u);
                        }
                        else
                        {
                          v58 = BitBlt(v60, yTop, yoriginDest, v51, v61, hdc[1], 0, 0, 0xCC0020u);
                        }
                      }
                      if ( v58 )
                        ScaleFactorForWindow = 0;
                      else
                        ScaleFactorForWindow = ResultFromKnownLastError();
                      SelectObject(pRect[0], h);
                    }
                    Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                  }
                  goto LABEL_77;
                }
                v24 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                if ( v24 )
                {
                  v36 = v94;
                  v37 = 100;
                }
                else
                {
                  v36 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v37 = 96;
                }
                v38 = Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v36, v37);
                v39 = *((unsigned int *)ContextMenuDataForItem + 16);
                v40 = *((unsigned int *)ContextMenuDataForItem + 15);
                *(_OWORD *)pRect = *(_OWORD *)v38;
                v41 = *(_DWORD *)(a2 + 44) + HIDWORD(pRect[0]);
                *(_QWORD *)pColor = (unsigned int)(*(_DWORD *)(a2 + 44) + HIDWORD(pRect[1]));
                yoriginDest = v41;
                v42 = DPIToPPIHelpers::ScaleByType(v40, 16LL, hwnd, v39);
                yTop = v41 + v93 / 2 - v42 / 2;
                if ( *((_DWORD *)ContextMenuDataForItem + 15) )
                {
                  v45 = (int)pRect[1];
                  v44 = (int)pRect[0];
                }
                else
                {
                  v43 = (int)DPIToPPIHelpers::ScaleByType(
                               0LL,
                               16LL,
                               hwnd,
                               *((unsigned int *)ContextMenuDataForItem + 16))
                      / 2;
                  v44 = v43 + LODWORD(pRect[0]);
                  v45 = v43 + LODWORD(pRect[1]);
                }
                memset_0(&psii.cbSize + 1, 0, 0x21CuLL);
                v46 = *((_DWORD *)ContextMenuDataForItem + 7);
                psii.cbSize = 544;
                v47 = v45 - v44;
                if ( SHGetStockIconInfo(v46, (v47 < 24) + 256, &psii) < 0 )
                {
LABEL_77:
                  if ( ScaleFactorForWindow >= 0 )
                  {
LABEL_78:
                    if ( (*((_BYTE *)ContextMenuDataForItem + 24) & 0x10) != 0 )
                    {
                      v62 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v63 = *((unsigned int *)ContextMenuDataForItem + 15);
                      *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                      v64 = *(_DWORD *)(a2 + 48) - DPIToPPIHelpers::ScaleByType(v63, 28LL, hwnd, v62);
                      if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                      {
                        v65 = v94;
                        v66 = 100;
                      }
                      else
                      {
                        v65 = *((_DWORD *)ContextMenuDataForItem + 16);
                        v66 = 96;
                      }
                      v67 = Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v65, v66);
                      v68 = *((unsigned int *)ContextMenuDataForItem + 16);
                      v69 = *((unsigned int *)ContextMenuDataForItem + 15);
                      v70 = *(_DWORD *)(a2 + 44);
                      *(_OWORD *)pRect = *(_OWORD *)v67;
                      LODWORD(pRect[0]) += v64;
                      LODWORD(pRect[1]) += v64;
                      v71 = DPIToPPIHelpers::ScaleByType(v69, 16LL, hwnd, v68);
                      v72 = *(HDC *)(a2 + 32);
                      v73 = *((_DWORD *)ContextMenuDataForItem + 16);
                      v74 = v93 / 2 - v71 / 2 + v70;
                      HIDWORD(pRect[0]) += v74;
                      v75 = *((_DWORD *)ContextMenuDataForItem + 15);
                      HIDWORD(pRect[1]) += v74;
                      pClipRecta = *((_DWORD *)ContextMenuDataForItem + 6);
                      *(_OWORD *)hdc = *(_OWORD *)pRect;
                      ScaleFactorForWindow = s_DrawGlyph(
                                               hwnd,
                                               v73,
                                               hTheme,
                                               v72,
                                               16,
                                               pClipRecta,
                                               iStateId,
                                               (struct tagRECT *)hdc,
                                               v75);
                    }
                  }
LABEL_88:
                  ExcludeClipRect(
                    *(HDC *)(a2 + 32),
                    *v15,
                    *(_DWORD *)(a2 + 44),
                    *(_DWORD *)(a2 + 48),
                    *(_DWORD *)(a2 + 52));
                  CloseThemeData(hTheme);
                  return (unsigned int)ScaleFactorForWindow;
                }
                if ( DrawIconEx(*(HDC *)(a2 + 32), v44, yTop, psii.hIcon, v47, pColor[0] - yoriginDest, 0, 0LL, 3u) )
                {
                  ScaleFactorForWindow = 0;
                  goto LABEL_78;
                }
                Error = ResultFromKnownLastError();
              }
              else
              {
                v24 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                if ( v24 )
                {
                  v25 = v94;
                  v26 = 100;
                }
                else
                {
                  v25 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v26 = 96;
                }
                v27 = Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v25, v26);
                v28 = *((unsigned int *)ContextMenuDataForItem + 16);
                v29 = *((unsigned int *)ContextMenuDataForItem + 15);
                v30 = *(_DWORD *)(a2 + 44);
                *(_OWORD *)pRect = *(_OWORD *)v27;
                v31 = DPIToPPIHelpers::ScaleByType(v29, 16LL, hwnd, v28);
                v32 = *(HDC *)(a2 + 32);
                v33 = *((_DWORD *)ContextMenuDataForItem + 16);
                v34 = v93 / 2 - v31 / 2;
                HIDWORD(pRect[1]) += v30 + v34;
                diFlags = *((_DWORD *)ContextMenuDataForItem + 15);
                HIDWORD(pRect[0]) += v30 + v34;
                pClipRect = *((_DWORD *)ContextMenuDataForItem + 6);
                *(_OWORD *)hdc = *(_OWORD *)pRect;
                Error = s_DrawGlyph(hwnd, v33, hTheme, v32, 11, pClipRect, iStateId, (struct tagRECT *)hdc, diFlags);
              }
              ScaleFactorForWindow = Error;
              goto LABEL_77;
            }
          }
          else if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
          {
            goto LABEL_88;
          }
          v76 = *((unsigned int *)ContextMenuDataForItem + 16);
          v77 = *((unsigned int *)ContextMenuDataForItem + 15);
          pRect[0] = *(HDC *)v15;
          pRect[1] = *(HDC *)(a2 + 48);
          v78 = DPIToPPIHelpers::ScaleByType(v77, 8LL, hwnd, v76);
          LODWORD(pRect[0]) += v78;
          LODWORD(pRect[1]) -= v78;
          if ( *((_BYTE *)ContextMenuDataForItem + 69)
            || (v79 = 7LL, (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0) )
          {
            v79 = 9LL;
          }
          v80 = DPIToPPIHelpers::ScaleByType(
                  *((unsigned int *)ContextMenuDataForItem + 15),
                  v79,
                  hwnd,
                  *((unsigned int *)ContextMenuDataForItem + 16));
          v81 = floorf_0((double)(v80 - 5) * 0.5);
          --HIDWORD(pRect[1]);
          v82 = *(HDC *)(a2 + 32);
          HIDWORD(pRect[0]) += (int)v81;
          DrawThemeBackground(hTheme, v82, 15, v13, (LPCRECT)pRect, 0LL);
          goto LABEL_88;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
