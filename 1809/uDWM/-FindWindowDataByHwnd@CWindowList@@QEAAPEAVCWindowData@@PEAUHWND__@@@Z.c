/*
 * XREFs of ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180023254
 * Callers:
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002AD0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000BD5C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000BED4 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800231B4 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180024130 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002D284 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18002FC70 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800301D8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x180030238 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180031E70 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180038E74 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18008A980 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009081C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CWindowList::FindWindowDataByHwnd(CWindowList *this, HWND a2)
{
  char *v2; // rbx
  struct _RTL_GENERIC_TABLE *v4; // rsi
  _QWORD *v5; // rax
  char *v6; // rcx
  char *i; // rax
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RestartKey = 0LL;
  if ( a2 )
  {
    v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
LABEL_3:
    while ( 1 )
    {
      v5 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
      if ( !v5 || v2 )
        break;
      v6 = (char *)(v5 + 10);
      for ( i = (char *)v5[10]; i != v6; i = *(char **)i )
      {
        if ( *((HWND *)i + 5) == a2 )
        {
          v2 = i;
          goto LABEL_3;
        }
      }
    }
  }
  return (struct CWindowData *)v2;
}
