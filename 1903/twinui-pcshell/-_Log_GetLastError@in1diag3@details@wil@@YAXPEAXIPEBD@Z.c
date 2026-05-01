/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011F55C
 * Callers:
 *     _lambda_f4cd92f2d8fec744b3434a8e4552d084_::operator() @ 0x18003A974 (_lambda_f4cd92f2d8fec744b3434a8e4552d084_--operator().c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18004FBD0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x180068BC0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x180070A14 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18011CF90 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017AA70 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180188330 (-OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180193070 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D6E0 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A31A0 (-OnViewUncloaking@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180221C90 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18022223C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180222420 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18023D140 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetProcessStartTime@@YA_JPEAX@Z @ 0x180286330 (-GetProcessStartTime@@YA_JPEAX@Z.c)
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180292AD0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180299018 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x1802FE7E8 (--0FocusHoldingTank@@QEAA@XZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x1802FEA58 (--1FocusHoldingTank@@QEAA@XZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803189F8 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180319748 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x18034516C (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180358E24 (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x180372580 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180103374 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(this, a2, a3, a4, v4, retaddr, 2);
}
