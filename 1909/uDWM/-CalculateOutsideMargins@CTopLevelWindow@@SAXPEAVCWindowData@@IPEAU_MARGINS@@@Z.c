/*
 * XREFs of ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18008CCB4
 * Callers:
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FEA0 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800042BC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180039540 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x180090CCC (-GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CTopLevelWindow::CalculateOutsideMargins(struct CWindowData *this, __int64 a2, struct _MARGINS *a3)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  int cxLeftWidth; // eax
  int v10; // ecx
  int cxRightWidth; // eax
  int v12; // ecx
  int v13; // ecx
  int cyTopHeight; // eax
  int v15; // ecx
  int v16; // ecx
  int cyBottomHeight; // eax
  int v18; // ecx
  __int64 v19; // rcx
  struct _MARGINS v20; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&a3->cxLeftWidth = 0LL;
  *(_QWORD *)&a3->cyTopHeight = 0LL;
  if ( CTopLevelWindow::HasRenderedBorder((unsigned int)a2, a2)
    && *((_DWORD *)this + 16) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *((_DWORD *)this + 17) >= dword_1800DBE2C
    && *((_DWORD *)this + 18) >= dword_1800DBE30
    && *((_DWORD *)this + 19) >= dword_1800DBE34
    && (*((_DWORD *)this + 26) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *((unsigned int *)this + 81), v5) > 0 )
  {
    *(_QWORD *)&v20.cxLeftWidth = 0LL;
    *(_QWORD *)&v20.cyTopHeight = 0LL;
    CWindowData::GetWindowFrameMargins(this, &v20);
    v8 = *((_DWORD *)this + 16);
    cxLeftWidth = v20.cxLeftWidth;
    if ( v8 > v20.cxLeftWidth )
      cxLeftWidth = *((_DWORD *)this + 16);
    v10 = v8 - cxLeftWidth;
    cxRightWidth = v20.cxRightWidth;
    a3->cxLeftWidth = v10;
    v12 = *((_DWORD *)this + 17);
    if ( v12 > cxRightWidth )
      cxRightWidth = *((_DWORD *)this + 17);
    v13 = v12 - cxRightWidth;
    cyTopHeight = v20.cyTopHeight;
    a3->cxRightWidth = v13;
    v15 = *((_DWORD *)this + 18);
    if ( v15 > cyTopHeight )
      cyTopHeight = *((_DWORD *)this + 18);
    v16 = v15 - cyTopHeight;
    cyBottomHeight = v20.cyBottomHeight;
    a3->cyTopHeight = v16;
    v18 = *((_DWORD *)this + 19);
    if ( v18 > cyBottomHeight )
      cyBottomHeight = *((_DWORD *)this + 19);
    v19 = (unsigned int)(v18 - cyBottomHeight);
    a3->cyBottomHeight = v19;
    wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsageToService(v19, v6, v7);
  }
}
