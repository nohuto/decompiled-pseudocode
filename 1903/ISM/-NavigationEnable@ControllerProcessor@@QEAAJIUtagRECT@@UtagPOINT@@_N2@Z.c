/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800767BC
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180072988 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x1800738B8 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180078810 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180073CAC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078AFC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( IsEdition(8778LL) )
  {
    wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::ReportUsageToService(v8, v7, v9);
  }
  else
  {
    *((_DWORD *)this + 558) = a2;
    ControllerProcessor::UpdateNavigationState(this, 0LL, a3);
  }
  return 0LL;
}
