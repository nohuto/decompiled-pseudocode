/*
 * XREFs of s_DrawGlyph @ 0x180417040
 * Callers:
 *     s_OnDrawItem @ 0x1804178A4 (s_OnDrawItem.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180050800 (-IsHighContrast@@YAHXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180103E78 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180419AD4 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall s_DrawGlyph(
        HWND a1,
        COLORREF a2,
        void *a3,
        HDC a4,
        int a5,
        __int16 a6,
        int iStateId,
        struct tagRECT *a8,
        unsigned int a9)
{
  unsigned int v9; // ebx
  char v10; // r15
  UINT v13; // r13d
  int Error; // edi
  struct HWND__ *p_hWnd; // r14
  int v16; // eax
  LONG v17; // eax
  HFONT v18; // rbx
  BOOL v19; // r12d
  COLORREF v20; // eax
  COLORREF v21; // r15d
  HGDIOBJ v22; // r12
  COLORREF v24; // [rsp+30h] [rbp-A1h] BYREF
  int v25; // [rsp+34h] [rbp-9Dh] BYREF
  struct HWND__ hWnd; // [rsp+38h] [rbp-99h] BYREF
  int v27; // [rsp+3Ch] [rbp-95h] BYREF
  int v28; // [rsp+40h] [rbp-91h] BYREF
  COLORREF pColor; // [rsp+44h] [rbp-8Dh] BYREF
  int mode; // [rsp+48h] [rbp-89h]
  HTHEME hTheme; // [rsp+50h] [rbp-81h]
  LPRECT lprc; // [rsp+58h] [rbp-79h]
  LOGFONTW lf; // [rsp+60h] [rbp-71h] BYREF

  v9 = -13;
  v10 = 0;
  hTheme = a3;
  v24 = a2;
  v13 = 37;
  lprc = a8;
  hWnd.unused = 59669;
  Error = -2147023728;
  v25 = 57575;
  v27 = 59244;
  v28 = 59243;
  if ( a5 == 11 )
  {
    p_hWnd = (struct HWND__ *)&v25;
    if ( (a6 & 0x200) != 0 )
      p_hWnd = &hWnd;
    v9 = (a6 & 0x200) != 0 ? -16 : -13;
  }
  else
  {
    if ( a5 != 16 )
      return (unsigned int)Error;
    p_hWnd = (struct HWND__ *)&v27;
    v10 = 1;
    v16 = GetWindowLongW(a1, -20) & 0x400000;
    if ( v16 )
      p_hWnd = (struct HWND__ *)&v28;
    v13 = v16 != 0 ? 131109 : 37;
  }
  memset_0(&lf, 0, sizeof(lf));
  v17 = DPIToPPIHelpers::ScaleByType(a9, v9, a1, v24);
  if ( v10 && (v17 & 1) == 0 )
    --v17;
  lf.lfHeight = v17;
  lf.lfWeight = 400;
  lf.lfCharSet = 1;
  lf.lfQuality = 5;
  Error = StringCchCopyW(lf.lfFaceName, 0x20uLL, (size_t *)L"Segoe MDL2 Assets");
  if ( Error >= 0 )
  {
    v18 = CreateFontIndirectW(&lf);
    if ( v18 )
    {
      Error = 0;
      v19 = (unsigned int)IsHighContrast() && ((iStateId - 2) & 0xFFFFFFFD) == 0;
      mode = SetBkMode(a4, 1);
      GetThemeColor(hTheme, 9, 0, 3802, &pColor);
      v20 = 0;
      if ( BYTE2(pColor) + 5 * BYTE1(pColor) + 2 * (unsigned int)(unsigned __int8)pColor <= 0x400 )
        v20 = 0xFFFFFF;
      v24 = v20;
      if ( v19 )
      {
        GetThemeColor(hTheme, 14, iStateId, 3803, &v24);
        v20 = v24;
      }
      v21 = SetTextColor(a4, v20);
      v22 = SelectObject(a4, v18);
      if ( !DrawTextW(a4, (LPCWSTR)p_hWnd, 1, lprc, v13) )
        Error = ResultFromKnownLastError();
      SetTextColor(a4, v21);
      SetBkMode(a4, mode);
      SelectObject(a4, v22);
      DeleteObject(v18);
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)Error;
}
