/*
 * XREFs of s_OnMeasureItem @ 0x180418250
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x180416F58 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z @ 0x180416C50 (--0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180416CBC (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180418A98 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180419890 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180419AD4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall s_OnMeasureItem(HWND hwnd, __int64 a2, char a3, unsigned int a4)
{
  signed int Error; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v8; // r14
  const WCHAR *v9; // rdx
  void *v10; // rsi
  unsigned int v11; // r13d
  __int64 v12; // rdx
  HWND WindowW; // rax
  HWND v14; // rbx
  LONG WindowLongW; // eax
  HFONT v16; // rax
  HFONT v17; // rbx
  HDC v18; // rsi
  HGDIOBJ v19; // rdi
  __int64 v20; // rdx
  double v21; // xmm0_8
  int v22; // eax
  __int64 v23; // rdx
  int ThemeTextExtentPPI; // [rsp+74h] [rbp-8Ch]
  HTHEME v27; // [rsp+78h] [rbp-88h]
  _BYTE v28[8]; // [rsp+90h] [rbp-70h] BYREF
  HDC hdc; // [rsp+98h] [rbp-68h]
  LOGFONTW lf; // [rsp+B0h] [rbp-50h] BYREF
  int pvParam; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v32[220]; // [rsp+114h] [rbp+14h] BYREF
  LOGFONTW v33; // [rsp+1F0h] [rbp+F0h]

  Error = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 24),
                             *(unsigned int *)(a2 + 8),
                             a4);
  v8 = ContextMenuDataForItem;
  if ( ContextMenuDataForItem )
  {
    if ( *((_BYTE *)ContextMenuDataForItem + 68) )
    {
      v9 = L"DarkMode_ImmersiveStart::Menu";
    }
    else
    {
      v9 = L"LightMode_ImmersiveStart::Menu";
      if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
        v9 = L"ImmersiveStart::Menu";
    }
    v27 = OpenThemeData(0LL, v9);
    v10 = v27;
    if ( v27 )
    {
      v11 = 2;
      if ( !MonitorFromWindow(hwnd, 2u) )
      {
LABEL_49:
        CloseThemeData(v10);
        return (unsigned int)Error;
      }
      if ( *((_DWORD *)v8 + 6) == 2048 )
      {
        if ( *((_BYTE *)v8 + 69) || (v12 = 7LL, (*((_BYTE *)v8 + 56) & 4) != 0) )
          v12 = 9LL;
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v8 + 15),
                                 v12,
                                 hwnd,
                                 *((unsigned int *)v8 + 16));
        goto LABEL_49;
      }
      WindowW = FindWindowW(L"#32768", 0LL);
      v14 = WindowW;
      if ( !WindowW )
      {
LABEL_39:
        v22 = *((_DWORD *)v8 + 14);
        if ( (v22 & 1) != 0 )
        {
          if ( *((_BYTE *)v8 + 69) || (v23 = 2LL, (v22 & 4) != 0) )
            v23 = 6LL;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v8 + 15),
                                    v23,
                                    hwnd,
                                    *((unsigned int *)v8 + 16));
          v22 = *((_DWORD *)v8 + 14);
        }
        if ( (v22 & 2) != 0 )
        {
          if ( *((_BYTE *)v8 + 69) || (v22 & 4) != 0 )
            v11 = 6;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v8 + 15),
                                    v11,
                                    hwnd,
                                    *((unsigned int *)v8 + 16));
        }
        goto LABEL_49;
      }
      WindowLongW = GetWindowLongW(WindowW, -20);
      if ( a3 && (WindowLongW & 0x400000) == 0 )
        SetWindowLongW(v14, -20, WindowLongW | 0x400000);
      Microsoft::WRL::Wrappers::ClientDC::ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v28, v14);
      if ( !hdc
        || (memset_0(v32, 0, 0x1F4uLL), pvParam = 504, !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0))
        && (Error = ResultFromKnownLastError(), Error < 0) )
      {
LABEL_38:
        Microsoft::WRL::Wrappers::ClientDC::~ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v28);
        goto LABEL_39;
      }
      if ( GetThemeFont(v27, 0LL, 14, 0, 210, &lf) < 0 )
      {
        lf = v33;
      }
      else
      {
        if ( v33.lfHeight <= 0 )
        {
          if ( v33.lfHeight >= lf.lfHeight )
            goto LABEL_27;
        }
        else if ( v33.lfHeight <= lf.lfHeight )
        {
          goto LABEL_27;
        }
        lf.lfHeight = v33.lfHeight;
      }
LABEL_27:
      v16 = CreateFontIndirectW(&lf);
      v17 = v16;
      if ( v16 )
      {
        v18 = hdc;
        v19 = SelectObject(hdc, v16);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v8);
        ThemeTextExtentPPI = DPIToPPIHelpers::GetThemeTextExtentPPI(
                               hwnd,
                               *((unsigned int *)v8 + 15),
                               (char *)v8 + 64,
                               v27,
                               hdc);
        SelectObject(v18, v19);
        DeleteObject(v17);
        Error = ThemeTextExtentPPI;
        if ( ThemeTextExtentPPI >= 0 )
        {
          *(_DWORD *)(a2 + 12) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)v8 + 15),
                                   93LL,
                                   hwnd,
                                   *((unsigned int *)v8 + 16));
          if ( (*((_BYTE *)v8 + 56) & 4) != 0 )
          {
            v20 = 36LL;
          }
          else
          {
            if ( *((_BYTE *)v8 + 69) )
              v21 = DOUBLE_24_0;
            else
              v21 = DOUBLE_14_0;
            v20 = (unsigned int)(int)v21;
          }
          *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)v8 + 15),
                                   v20,
                                   hwnd,
                                   *((unsigned int *)v8 + 16));
        }
        v10 = v27;
      }
      else
      {
        Error = -2147467259;
      }
      goto LABEL_38;
    }
  }
  return (unsigned int)Error;
}
