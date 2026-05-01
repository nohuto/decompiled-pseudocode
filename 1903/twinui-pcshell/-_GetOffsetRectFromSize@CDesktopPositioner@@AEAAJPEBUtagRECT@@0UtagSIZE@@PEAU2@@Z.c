/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x180056070
 * Callers:
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800554E0 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180056A44 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803A5F60 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180054A1C (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180055A18 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x180056984 (-GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180056A0C (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  unsigned int v7; // esi
  unsigned __int32 v8; // r14d
  int WorkAreaFromRect; // ebx
  LONG cx; // r13d
  LONG cy; // eax
  LONG v12; // ebx
  int SystemMetrics; // r12d
  int v14; // r12d
  struct tagRECT *v15; // rcx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // edi
  int DefaultTitlebarHeightInLogicalPixels; // eax
  LONG left; // r10d
  __int64 v19; // r9
  int v20; // edi
  unsigned int v21; // edx
  __int64 v23; // rdx
  LONG v25; // [rsp+20h] [rbp-51h]
  struct tagSIZE v26; // [rsp+28h] [rbp-49h] BYREF
  struct tagRECT v27; // [rsp+30h] [rbp-41h]
  struct tagRECT *v28; // [rsp+40h] [rbp-31h]
  __int128 v29; // [rsp+48h] [rbp-29h]
  struct tagRECT v30; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT v31; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT v32; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  *(_QWORD *)&v27.left = a3;
  v29 = 0uLL;
  v7 = 0;
  v28 = a5;
  v8 = 1;
  *a5 = 0uLL;
  if ( !a3 )
    v8 = _InterlockedIncrement(&dword_18059A020);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v31);
  if ( WorkAreaFromRect < 0 )
  {
    v23 = 1380LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect,
      a4.cx);
    return (unsigned int)WorkAreaFromRect;
  }
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(this, a2, &v26);
  if ( WorkAreaFromRect < 0 )
  {
    v23 = 1383LL;
    goto LABEL_20;
  }
  cx = a4.cx;
  cy = a4.cy;
  v12 = v26.cx;
  if ( a4.cx > v26.cx )
    cx = v26.cx;
  if ( a4.cy > v26.cy )
    cy = v26.cy;
  v25 = cy;
  SystemMetrics = GetSystemMetrics(32);
  v14 = GetSystemMetrics(30) + SystemMetrics;
  if ( a2 )
  {
    v15 = &v32;
    v32 = *a2;
  }
  else
  {
    v15 = &v30;
    *(_QWORD *)&v30.left = 0LL;
    *(_QWORD *)&v30.right = 0LL;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v15);
  DefaultTitlebarHeightInLogicalPixels = GetDefaultTitlebarHeightInLogicalPixels();
  left = v31.left;
  v19 = HIDWORD(*(_QWORD *)&v31.left);
  v20 = ScaleFactorForRect * DefaultTitlebarHeightInLogicalPixels / 100;
  if ( *(_QWORD *)&v27.left )
  {
    if ( cx + **(_DWORD **)&v27.left + v14 <= v31.right )
      left = **(_DWORD **)&v27.left;
    if ( v25 + *(_DWORD *)(*(_QWORD *)&v27.left + 4LL) + v20 <= v31.bottom )
      LODWORD(v19) = *(_DWORD *)(*(_QWORD *)&v27.left + 4LL);
  }
  if ( (v12 - cx) / v14 == -1 )
    v21 = 0;
  else
    v21 = v8 % ((v12 - cx) / v14 + 1);
  v27.left = v21 * v14 + left;
  if ( (v26.cy - v25) / v20 != -1 )
    v7 = v8 % ((v26.cy - v25) / v20 + 1);
  v27.right = v21 * v14 + left + cx;
  v27.top = v20 * v7 + v19;
  v27.bottom = v27.top + v25;
  *v28 = v27;
  return 0LL;
}
