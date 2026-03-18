/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0005480 (NtUserGetRawInputData.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006A60 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006E44 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserGetWindowGroupId @ 0x1C0008430 (NtUserGetWindowGroupId.c)
 *     NtUserSetActivationFilter @ 0x1C0009C10 (NtUserSetActivationFilter.c)
 *     NtUserSetBrokeredForeground @ 0x1C000B230 (NtUserSetBrokeredForeground.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C000B97C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C000E874 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     _lambda_75e919a46692d6b7e31e9e50a1c7a298_::_lambda_invoker_cdecl_ @ 0x1C000E8B0 (_lambda_75e919a46692d6b7e31e9e50a1c7a298_--_lambda_invoker_cdecl_.c)
 *     NtUserRegisterUserApiHook @ 0x1C000F1C0 (NtUserRegisterUserApiHook.c)
 *     NtUserSetGestureConfig @ 0x1C000F580 (NtUserSetGestureConfig.c)
 *     NtUserRegisterDManipHook @ 0x1C000F800 (NtUserRegisterDManipHook.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0011034 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C0011538 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001C5CC (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C001DB48 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     _GetClassInfoEx @ 0x1C001EB84 (_GetClassInfoEx.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0021320 (NtUserCopyAcceleratorTable.c)
 *     NtUserDrawIconEx @ 0x1C0022EF0 (NtUserDrawIconEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0023250 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDestroyCursor @ 0x1C00234B0 (NtUserDestroyCursor.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0023B6C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     NtUserSetCursorIconData @ 0x1C0024370 (NtUserSetCursorIconData.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserGetIconInfo @ 0x1C0024CC0 (NtUserGetIconInfo.c)
 *     _UnregisterClass @ 0x1C0026ABC (_UnregisterClass.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C002BF8C (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     xxxProcessNotifyWinEvent @ 0x1C004E6B8 (xxxProcessNotifyWinEvent.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserUnhookWinEvent @ 0x1C0056FF0 (NtUserUnhookWinEvent.c)
 *     NtUserGetObjectInformation @ 0x1C0060600 (NtUserGetObjectInformation.c)
 *     NtUserSetThreadInputBlocked @ 0x1C0060800 (NtUserSetThreadInputBlocked.c)
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     FreeTimer @ 0x1C007A780 (FreeTimer.c)
 *     NtUserKillTimer @ 0x1C007A8A0 (NtUserKillTimer.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     NtUserRegisterHotKey @ 0x1C0088070 (NtUserRegisterHotKey.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserUnregisterHotKey @ 0x1C00CFE90 (NtUserUnregisterHotKey.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00E7080 (NtUserRegisterRawInputDevices.c)
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 *     UserJobCallout @ 0x1C00EF070 (UserJobCallout.c)
 *     NtUserGetPointerDevices @ 0x1C00F5440 (NtUserGetPointerDevices.c)
 *     NtUserUpdateInputContext @ 0x1C00FA220 (NtUserUpdateInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C00FA320 (NtUserAssociateInputContext.c)
 *     SuspendThreadQueue @ 0x1C00FC040 (SuspendThreadQueue.c)
 *     NtUserDestroyMenu @ 0x1C0101A20 (NtUserDestroyMenu.c)
 *     NtUserGetPointerDeviceRects @ 0x1C01080B0 (NtUserGetPointerDeviceRects.c)
 *     _GetPointerDeviceRects @ 0x1C01081CC (_GetPointerDeviceRects.c)
 *     NtUserBuildHimcList @ 0x1C010AD30 (NtUserBuildHimcList.c)
 *     xxxCsDdeInitialize @ 0x1C010D200 (xxxCsDdeInitialize.c)
 *     NtUserSetMenuDefaultItem @ 0x1C010D950 (NtUserSetMenuDefaultItem.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0112450 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C01128F0 (NtUserRegisterTouchPadCapable.c)
 *     NtUserSetWindowStationUser @ 0x1C0113BD0 (NtUserSetWindowStationUser.c)
 *     NtUserCallHwndOpt @ 0x1C011B4C0 (NtUserCallHwndOpt.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C012AFC4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C013032C (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C01357E0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0136198 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C013A314 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     NtUserDestroyInputContext @ 0x1C0156F80 (NtUserDestroyInputContext.c)
 *     NtUserCheckMenuItem @ 0x1C0159A40 (NtUserCheckMenuItem.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C015D1C0 (NtUserGetOwnerTransformedMonitorRect.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D39F8 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ProcessHidRawInput @ 0x1C01D8120 (ProcessHidRawInput.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1588 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E30E8 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E8CB4 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     zzzAnimateFade @ 0x1C01E9BC8 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01E9E28 (zzzStartSonar.c)
 *     DestroyTask @ 0x1C01EB440 (DestroyTask.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0203D98 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208AC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C02289D4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     NtUserBlockInput @ 0x1C02297A0 (NtUserBlockInput.c)
 *     NtUserClearForeground @ 0x1C0229CC0 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C022A1E0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C022A4A0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C022B220 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserGetGestureConfig @ 0x1C022BF10 (NtUserGetGestureConfig.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022C520 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C022CEC0 (NtUserGetLayeredWindowAttributes.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C022D620 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetPointerDevice @ 0x1C022D740 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C022D850 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C022DA40 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetRawInputBuffer @ 0x1C022DE50 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C022E1D0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetRawInputDeviceList @ 0x1C022E690 (NtUserGetRawInputDeviceList.c)
 *     NtUserGetRegisteredRawInputDevices @ 0x1C022E8F0 (NtUserGetRegisteredRawInputDevices.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1C022FEE0 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserInjectGesture @ 0x1C0230070 (NtUserInjectGesture.c)
 *     NtUserSetCalibrationData @ 0x1C0233CD0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0234010 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C02342A0 (NtUserSetDisplayMapping.c)
 *     NtUserSetFallbackForeground @ 0x1C0234420 (NtUserSetFallbackForeground.c)
 *     NtUserSetMenuContextHelpId @ 0x1C02348B0 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C0234990 (NtUserSetMenuFlagRtoL.c)
 *     NtUserSetObjectInformation @ 0x1C0234B50 (NtUserSetObjectInformation.c)
 *     NtUserUnregisterUserApiHook @ 0x1C02364D0 (NtUserUnregisterUserApiHook.c)
 *     xxxCompositedPaint @ 0x1C023B074 (xxxCompositedPaint.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C023D640 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C023D78C (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C023DE60 (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023DEE0 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E200 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     xxxHardErrorControl @ 0x1C023EA4C (xxxHardErrorControl.c)
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
