/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0005480 (NtUserGetRawInputData.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006A60 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006E44 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserGetWindowGroupId @ 0x1C0008430 (NtUserGetWindowGroupId.c)
 *     NtUserSetActivationFilter @ 0x1C0009C20 (NtUserSetActivationFilter.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C000C2AC (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C000F974 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     _lambda_75e919a46692d6b7e31e9e50a1c7a298_::_lambda_invoker_cdecl_ @ 0x1C000F9B0 (_lambda_75e919a46692d6b7e31e9e50a1c7a298_--_lambda_invoker_cdecl_.c)
 *     NtUserSetBrokeredForeground @ 0x1C00106A0 (NtUserSetBrokeredForeground.c)
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0012CA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0016D58 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     UserJobCallout @ 0x1C0018720 (UserJobCallout.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C001DCB8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0025B1C (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     NtUserDrawIconEx @ 0x1C002D7D0 (NtUserDrawIconEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C002DB30 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDestroyCursor @ 0x1C002DD90 (NtUserDestroyCursor.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C002E44C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     NtUserSetCursorIconData @ 0x1C002EDB0 (NtUserSetCursorIconData.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserGetIconInfo @ 0x1C002F700 (NtUserGetIconInfo.c)
 *     _UnregisterClass @ 0x1C00314FC (_UnregisterClass.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00835BC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     NtUserRegisterHotKey @ 0x1C00881E0 (NtUserRegisterHotKey.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C008C884 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6240 (NtUserUnhookWinEvent.c)
 *     NtUserGetObjectInformation @ 0x1C00BEF20 (NtUserGetObjectInformation.c)
 *     NtUserSetThreadInputBlocked @ 0x1C00BF120 (NtUserSetThreadInputBlocked.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C00DABB0 (NtUserKillTimer.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUnregisterHotKey @ 0x1C00EF090 (NtUserUnregisterHotKey.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0101044 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     NtUserRegisterRawInputDevices @ 0x1C010CD00 (NtUserRegisterRawInputDevices.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     NtUserCopyAcceleratorTable @ 0x1C010FDE0 (NtUserCopyAcceleratorTable.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C0116AFC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     NtUserGetPointerDevices @ 0x1C011B450 (NtUserGetPointerDevices.c)
 *     NtUserUpdateInputContext @ 0x1C011F540 (NtUserUpdateInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C011F6F0 (NtUserAssociateInputContext.c)
 *     SuspendThreadQueue @ 0x1C01211E0 (SuspendThreadQueue.c)
 *     NtUserDestroyMenu @ 0x1C01252A0 (NtUserDestroyMenu.c)
 *     NtUserGetPointerDeviceRects @ 0x1C012CE20 (NtUserGetPointerDeviceRects.c)
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 *     NtUserBuildHimcList @ 0x1C01301E0 (NtUserBuildHimcList.c)
 *     NtUserRegisterDManipHook @ 0x1C0130920 (NtUserRegisterDManipHook.c)
 *     xxxCsDdeInitialize @ 0x1C0132700 (xxxCsDdeInitialize.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0132E50 (NtUserSetMenuDefaultItem.c)
 *     NtUserSetGestureConfig @ 0x1C0136B10 (NtUserSetGestureConfig.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0138450 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C01388F0 (NtUserRegisterTouchPadCapable.c)
 *     NtUserSetWindowStationUser @ 0x1C0139BD0 (NtUserSetWindowStationUser.c)
 *     NtUserRegisterUserApiHook @ 0x1C013C3C0 (NtUserRegisterUserApiHook.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C013ED60 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     NtUserCallHwndOpt @ 0x1C0140D40 (NtUserCallHwndOpt.c)
 *     NtUserDestroyInputContext @ 0x1C01561C0 (NtUserDestroyInputContext.c)
 *     NtUserCheckMenuItem @ 0x1C0158A90 (NtUserCheckMenuItem.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C015C210 (NtUserGetOwnerTransformedMonitorRect.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ProcessHidRawInput @ 0x1C01D82A0 (ProcessHidRawInput.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E3268 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E8E34 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     zzzAnimateFade @ 0x1C01E9D48 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01E9FA8 (zzzStartSonar.c)
 *     DestroyTask @ 0x1C01EB5C0 (DestroyTask.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0204048 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208D70 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0228FF4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     NtUserBlockInput @ 0x1C0229DC0 (NtUserBlockInput.c)
 *     NtUserClearForeground @ 0x1C022A2E0 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C022A800 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C022AAC0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C022B840 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserGetGestureConfig @ 0x1C022C530 (NtUserGetGestureConfig.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022CB40 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C022D4E0 (NtUserGetLayeredWindowAttributes.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C022DC40 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetPointerDevice @ 0x1C022DD60 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C022DE70 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C022E060 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetRawInputBuffer @ 0x1C022E470 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C022E7F0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetRawInputDeviceList @ 0x1C022ECB0 (NtUserGetRawInputDeviceList.c)
 *     NtUserGetRegisteredRawInputDevices @ 0x1C022EF10 (NtUserGetRegisteredRawInputDevices.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1C0230500 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserInjectGesture @ 0x1C0230690 (NtUserInjectGesture.c)
 *     NtUserSetCalibrationData @ 0x1C02342F0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0234630 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C02348C0 (NtUserSetDisplayMapping.c)
 *     NtUserSetFallbackForeground @ 0x1C0234A40 (NtUserSetFallbackForeground.c)
 *     NtUserSetMenuContextHelpId @ 0x1C0234ED0 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C0234FB0 (NtUserSetMenuFlagRtoL.c)
 *     NtUserSetObjectInformation @ 0x1C0235170 (NtUserSetObjectInformation.c)
 *     NtUserUnregisterUserApiHook @ 0x1C0236AF0 (NtUserUnregisterUserApiHook.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C023DC60 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C023DDAC (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C023E480 (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023E500 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     xxxHardErrorControl @ 0x1C023F06C (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // rdi

  *(_BYTE *)this = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v3 = 0;
        *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v3 << 6) + gpAtomickCheckStacks) )
          {
            if ( ++v3 >= gdwAtomicCheckLogSize )
              return this;
          }
          v4 = (unsigned __int64)v3 << 6;
          *(_DWORD *)(v4 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v4 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v4 + 8) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v4 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
  return this;
}
