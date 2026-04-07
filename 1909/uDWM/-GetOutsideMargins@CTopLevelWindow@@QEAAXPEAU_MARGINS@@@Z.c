/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800183E8
 * Callers:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180013EE0 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EBB0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FEA0 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180089E80 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18008A4F0 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18008DC4C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014944 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     IsOpenThemeDataPresent @ 0x18004E738 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // esi
  char v5; // al
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r11d
  int v10; // esi
  int v11; // ebp
  int v12; // r10d
  int v13; // r8d
  int v14; // eax
  int v15; // eax

  v2 = *((_DWORD *)this + 146);
  *a2 = 0uLL;
  v5 = IsOpenThemeDataPresent(this, a2);
  v6 = 0;
  if ( v5 && (v2 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v7 = *((_BYTE *)this + 240) & 4 | 0x9BLL;
    v8 = *((_QWORD *)this + 90);
    v9 = *((_DWORD *)this + v7);
    v10 = *((_DWORD *)this + v7 + 1);
    v11 = *((_DWORD *)this + v7 + 3);
    if ( v8 && (*(_BYTE *)(v8 + 604) & 8) == 0 )
    {
      a2->cyTopHeight = *((_DWORD *)this + v7 + 2);
      a2->cxLeftWidth = v9;
      a2->cxRightWidth = v10;
      a2->cyBottomHeight = v11;
    }
    else
    {
      v12 = *((_DWORD *)this + 152) - v10 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      v13 = *((_DWORD *)this + 154) - v11 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
      v14 = 0;
      if ( *((_DWORD *)this + 151) - v9 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
        v14 = *((_DWORD *)this + 151) - v9 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
      a2->cxLeftWidth = v9 + v14;
      a2->cyTopHeight = *((_DWORD *)this + v7 + 2);
      v15 = 0;
      if ( v12 >= 0 )
        v15 = v12;
      a2->cxRightWidth = v10 + v15;
      if ( v13 >= 0 )
        v6 = v13;
      a2->cyBottomHeight = v11 + v6;
    }
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService();
  }
}
