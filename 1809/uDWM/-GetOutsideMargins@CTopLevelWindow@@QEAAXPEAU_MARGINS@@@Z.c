/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019190 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18001937C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180023070 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083AE0 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18008A7C8 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AFD8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // edi
  int *v5; // rdx
  int v6; // r11d
  int v7; // edi
  __int64 v8; // rax
  int v9; // ebp
  int v10; // ecx
  int v11; // r10d
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  __int16 v15; // [rsp+64h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  __int16 v17; // [rsp+6Ch] [rbp+14h]

  v2 = *((_DWORD *)this + 146);
  *a2 = 0uLL;
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v2 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v5 = (int *)((char *)this + 2 * (*((_BYTE *)this + 240) & 8 | 0x136LL));
    v6 = *v5;
    v7 = v5[1];
    v8 = *((_QWORD *)this + 90);
    v9 = v5[3];
    if ( v8 && (*(_BYTE *)(v8 + 596) & 8) == 0 )
    {
      a2->cyTopHeight = v5[2];
      a2->cxLeftWidth = v6;
      a2->cxRightWidth = v7;
      a2->cyBottomHeight = v9;
    }
    else
    {
      v10 = 0;
      v11 = *((_DWORD *)this + 152) - v7 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      v12 = *((_DWORD *)this + 154) - v9 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
      v13 = 0;
      if ( *((_DWORD *)this + 151) - *v5 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
        v13 = *((_DWORD *)this + 151) - *v5 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
      a2->cxLeftWidth = v6 + v13;
      a2->cyTopHeight = v5[2];
      v14 = 0;
      if ( v11 >= 0 )
        v14 = v11;
      a2->cxRightWidth = v7 + v14;
      if ( v12 >= 0 )
        v10 = v12;
      a2->cyBottomHeight = v9 + v10;
    }
  }
  else
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetCachedFeatureEnabledState();
    v16 = 1;
    LOBYTE(v15) = 0;
    v17 = v15;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::GetFeaturePropertyCache'::`2'::data,
      1470244LL,
      &v16,
      0LL,
      3);
  }
}
