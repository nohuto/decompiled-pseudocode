/*
 * XREFs of ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1803A8D2C
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803A94B0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x180363FE0 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

__int64 __fastcall GDIHelpers::AddBackgroundForIcon(
        HANDLE h,
        int *a2,
        LONG *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  HDC CompatibleDC; // rax
  unsigned int LastError; // r12d
  HDC v11; // rdi
  HDC v12; // rax
  HDC v13; // rbx
  const char *v14; // r9
  HBITMAP v15; // rax
  struct tagSIZE v16; // rsi
  HGDIOBJ v17; // r15
  LONG v18; // eax
  const struct tagRECT *v19; // r8
  int cy; // r11d
  int cx; // r9d
  HGDIOBJ ha; // [rsp+78h] [rbp-71h]
  void *ppvBits; // [rsp+80h] [rbp-69h] BYREF
  _BYTE pv[4]; // [rsp+88h] [rbp-61h] BYREF
  int wSrc; // [rsp+8Ch] [rbp-5Dh]
  int hSrc; // [rsp+90h] [rbp-59h]
  RECT rcSrc; // [rsp+A8h] [rbp-41h] BYREF
  BITMAPINFO pbmi; // [rsp+B8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  CompatibleDC = CreateCompatibleDC(0LL);
  LastError = 0;
  v11 = CompatibleDC;
  if ( CompatibleDC )
  {
    v12 = CreateCompatibleDC(CompatibleDC);
    v13 = v12;
    if ( v12 )
    {
      ha = SelectObject(v12, h);
      if ( GetObjectW(h, 32, pv) )
      {
        pbmi.bmiHeader.biSize = 44;
        memset_0(&pbmi.bmiHeader.biWidth, 0, 0x28uLL);
        pbmi.bmiHeader.biWidth = *a3;
        pbmi.bmiHeader.biHeight = a3[1];
        *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
        v15 = CreateDIBSection(v11, &pbmi, 0, &ppvBits, 0LL, 0);
        v16 = (struct tagSIZE)v15;
        if ( v15 )
        {
          v17 = SelectObject(v11, v15);
          rcSrc.left = (*a3 - a4->cx) / 2;
          v18 = (a3[1] - a4->cy) / 2;
          rcSrc.right = a4->cx + rcSrc.left;
          rcSrc.top = v18;
          rcSrc.bottom = a4->cy + v18;
          GDIHelpers::FillRectARGB(v11, &rcSrc, v19, *a2);
          cy = hSrc;
          cx = wSrc;
          if ( a5->cx < wSrc )
            cx = a5->cx;
          if ( a5->cy < hSrc )
            cy = a5->cy;
          GdiAlphaBlend(v11, (*a3 - cx) / 2, (a3[1] - cy) / 2, cx, cy, v13, 0, 0, wSrc, hSrc, (BLENDFUNCTION)33488896);
          *a6 = v16;
          SelectObject(v11, v17);
        }
        else
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18D,
            (__int64)"shell\\inc\\gdihelpers.h",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x181,
                      (__int64)"shell\\inc\\gdihelpers.h",
                      v14);
      }
      SelectObject(v13, ha);
      DeleteDC(v13);
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"shell\\inc\\gdihelpers.h",
        (const char *)0x8007000ELL);
    }
    DeleteDC(v11);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"shell\\inc\\gdihelpers.h",
      (const char *)0x8007000ELL);
  }
  return LastError;
}
