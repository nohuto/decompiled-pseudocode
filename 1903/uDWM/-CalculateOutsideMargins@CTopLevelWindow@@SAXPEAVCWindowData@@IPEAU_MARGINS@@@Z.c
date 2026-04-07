/*
 * XREFs of ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18008D014
 * Callers:
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FFE0 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180003180 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180039FB0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x18009102C (-GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CTopLevelWindow::CalculateOutsideMargins(struct CWindowData *this, __int64 a2, struct _MARGINS *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  int cxLeftWidth; // eax
  int v9; // ecx
  int cxRightWidth; // eax
  int v11; // ecx
  int v12; // ecx
  int cyTopHeight; // eax
  int v14; // ecx
  int v15; // ecx
  int cyBottomHeight; // eax
  int v17; // ecx
  __int64 v18; // rcx
  struct _MARGINS v19; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&a3->cxLeftWidth = 0LL;
  *(_QWORD *)&a3->cyTopHeight = 0LL;
  if ( CTopLevelWindow::HasRenderedBorder((unsigned int)a2, a2)
    && *((_DWORD *)this + 16) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *((_DWORD *)this + 17) >= dword_1800DBE2C
    && *((_DWORD *)this + 18) >= dword_1800DBE30
    && *((_DWORD *)this + 19) >= dword_1800DBE34
    && (*((_DWORD *)this + 26) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *((unsigned int *)this + 81)) > 0 )
  {
    *(_QWORD *)&v19.cxLeftWidth = 0LL;
    *(_QWORD *)&v19.cyTopHeight = 0LL;
    CWindowData::GetWindowFrameMargins(this, &v19);
    v7 = *((_DWORD *)this + 16);
    cxLeftWidth = v19.cxLeftWidth;
    if ( v7 > v19.cxLeftWidth )
      cxLeftWidth = *((_DWORD *)this + 16);
    v9 = v7 - cxLeftWidth;
    cxRightWidth = v19.cxRightWidth;
    a3->cxLeftWidth = v9;
    v11 = *((_DWORD *)this + 17);
    if ( v11 > cxRightWidth )
      cxRightWidth = *((_DWORD *)this + 17);
    v12 = v11 - cxRightWidth;
    cyTopHeight = v19.cyTopHeight;
    a3->cxRightWidth = v12;
    v14 = *((_DWORD *)this + 18);
    if ( v14 > cyTopHeight )
      cyTopHeight = *((_DWORD *)this + 18);
    v15 = v14 - cyTopHeight;
    cyBottomHeight = v19.cyBottomHeight;
    a3->cyTopHeight = v15;
    v17 = *((_DWORD *)this + 19);
    if ( v17 > cyBottomHeight )
      cyBottomHeight = *((_DWORD *)this + 19);
    v18 = (unsigned int)(v17 - cyBottomHeight);
    a3->cyBottomHeight = v18;
    wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService(v18, v5, v6);
  }
}
