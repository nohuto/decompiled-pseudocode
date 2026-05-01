/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004CC7C
 * Callers:
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18004C9C4 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x18004CB40 (-IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18004CC50 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004D688 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18004D840 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x18004DA30 (--0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C678 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::RuntimeClassInitialize @ 0x1800A05F8 (_TwinUI--ShellFeeds--ShellFeedsShellExperienceView--_FireViewEvent_--_2_--ShellExpe_ea_1800A05F8.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1801B2650 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x1801B4720 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x1801B9450 (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@She.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1801BCD20 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??$MakeAndInitialize@VTitleBarChangedEventArgs@@UITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x180229688 (--$MakeAndInitialize@VTitleBarChangedEventArgs@@UITitleBarChangedEventArgs@Holographic@Shell@Int.c)
 *     ?OnMessage@DefaultIconManager@@UEAAJI_K_J@Z @ 0x1802721F0 (-OnMessage@DefaultIconManager@@UEAAJI_K_J@Z.c)
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x18027313C (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18035D164 (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18035E8A8 (-RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *newString, HSTRING *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*a2 || *a2 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    return (unsigned int)WindowsDuplicateString(*a2, newString);
  }
  return v2;
}
