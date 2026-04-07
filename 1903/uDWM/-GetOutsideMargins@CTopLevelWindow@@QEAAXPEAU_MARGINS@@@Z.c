/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001EDD0
 * Callers:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180013E80 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001E250 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FFE0 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18008A1E0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18008A850 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18008DFAC (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022AF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // esi
  char v5; // al
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r11d
  int v11; // esi
  int v12; // ebp
  int v13; // r10d
  int v14; // r8d
  int v15; // eax
  int v16; // eax

  v2 = *((_DWORD *)this + 146);
  *a2 = 0uLL;
  v5 = IsOpenThemeDataPresent(this, a2);
  v7 = 0;
  if ( v5 && (v2 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v8 = *((_BYTE *)this + 240) & 4 | 0x9BLL;
    v9 = *((_QWORD *)this + 90);
    v10 = *((_DWORD *)this + v8);
    v11 = *((_DWORD *)this + v8 + 1);
    v12 = *((_DWORD *)this + v8 + 3);
    if ( v9 && (*(_BYTE *)(v9 + 604) & 8) == 0 )
    {
      a2->cyTopHeight = *((_DWORD *)this + v8 + 2);
      a2->cxLeftWidth = v10;
      a2->cxRightWidth = v11;
      a2->cyBottomHeight = v12;
    }
    else
    {
      v13 = *((_DWORD *)this + 152) - v11 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      v14 = *((_DWORD *)this + 154) - v12 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
      v15 = 0;
      if ( *((_DWORD *)this + 151) - v10 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
        v15 = *((_DWORD *)this + 151) - v10 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
      a2->cxLeftWidth = v10 + v15;
      a2->cyTopHeight = *((_DWORD *)this + v8 + 2);
      v16 = 0;
      if ( v13 >= 0 )
        v16 = v13;
      a2->cxRightWidth = v11 + v16;
      if ( v14 >= 0 )
        v7 = v14;
      a2->cyBottomHeight = v12 + v7;
    }
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService(v6, 0LL);
  }
}
