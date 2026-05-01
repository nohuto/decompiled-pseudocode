/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800570A0
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180057028 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005767C (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180341020 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005726C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800572D0 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180057478 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800574F8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  LONG cx; // edi
  unsigned int v8; // esi
  unsigned __int32 v9; // r14d
  int WorkAreaFromRect; // ebx
  LONG v11; // eax
  LONG v12; // ebx
  LONG cy; // r13d
  int SystemMetrics; // r12d
  int v15; // r12d
  struct tagRECT *v16; // rcx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // edi
  unsigned int v18; // edi
  signed int v19; // edi
  LONG left; // r9d
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v24; // rdx
  LONG v25; // [rsp+28h] [rbp-61h]
  struct tagSIZE v26; // [rsp+30h] [rbp-59h] BYREF
  struct tagRECT v27; // [rsp+38h] [rbp-51h]
  struct tagSIZE v28; // [rsp+48h] [rbp-41h]
  struct tagRECT *v29; // [rsp+50h] [rbp-39h]
  __int128 v30; // [rsp+58h] [rbp-31h]
  __int64 v31; // [rsp+68h] [rbp-21h]
  struct tagRECT v32; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v33; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v34; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v31 = -2LL;
  cx = a4.cx;
  *(_QWORD *)&v27.left = a3;
  v28 = a4;
  v29 = a5;
  v30 = 0uLL;
  *a5 = 0uLL;
  v8 = 0;
  v9 = 1;
  if ( !a3 )
    v9 = _InterlockedIncrement(&dword_18050FC98);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v33);
  if ( WorkAreaFromRect < 0 )
  {
    v24 = 1417LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    return (unsigned int)WorkAreaFromRect;
  }
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(this, a2, &v26);
  if ( WorkAreaFromRect < 0 )
  {
    v24 = 1420LL;
    goto LABEL_20;
  }
  v11 = v28.cx;
  v12 = v26.cx;
  if ( cx > v26.cx )
    v11 = v26.cx;
  v25 = v11;
  cy = v28.cy;
  if ( v28.cy > v26.cy )
    cy = v26.cy;
  SystemMetrics = GetSystemMetrics(32);
  v15 = GetSystemMetrics(30) + SystemMetrics;
  if ( a2 )
  {
    v34 = *a2;
    v16 = &v34;
  }
  else
  {
    *(_QWORD *)&v32.left = 0LL;
    *(_QWORD *)&v32.right = 0LL;
    v16 = &v32;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v16);
  wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService();
  v18 = (int)((unsigned __int64)(43980465120LL * ScaleFactorForRect) >> 32) >> 5;
  v19 = (v18 >> 31) + v18;
  left = v33.left;
  v21 = HIDWORD(*(_QWORD *)&v33.left);
  if ( *(_QWORD *)&v27.left )
  {
    if ( v25 + **(_DWORD **)&v27.left + v15 <= v33.right )
      left = **(_DWORD **)&v27.left;
    if ( cy + v19 + *(_DWORD *)(*(_QWORD *)&v27.left + 4LL) <= v33.bottom )
      LODWORD(v21) = *(_DWORD *)(*(_QWORD *)&v27.left + 4LL);
  }
  if ( (v12 - v25) / v15 == -1 )
    v22 = 0;
  else
    v22 = v9 % ((v12 - v25) / v15 + 1);
  v27.left = v22 * v15 + left;
  if ( (v26.cy - cy) / v19 != -1 )
    v8 = v9 % ((v26.cy - cy) / v19 + 1);
  v27.top = v19 * v8 + v21;
  v27.right = v22 * v15 + left + v25;
  v27.bottom = v27.top + cy;
  *v29 = v27;
  return 0LL;
}
