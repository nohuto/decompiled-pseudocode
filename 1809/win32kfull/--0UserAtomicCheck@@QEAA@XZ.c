/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0002D70 (NtUserGetRawInputData.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C000468C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     NtUserGetWindowGroupId @ 0x1C0005A10 (NtUserGetWindowGroupId.c)
 *     NtUserSetActivationFilter @ 0x1C0006AE0 (NtUserSetActivationFilter.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008CB8 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C000971C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0009C90 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     _lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_ @ 0x1C0009CD0 (_lambda_0d160d279100fee8fb6f37f20079cc99_--_lambda_invoker_cdecl_.c)
 *     NtUserSetBrokeredForeground @ 0x1C0009E90 (NtUserSetBrokeredForeground.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00190F0 (xxxProcessNotifyWinEvent.c)
 *     _UnregisterClass @ 0x1C0022334 (_UnregisterClass.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserSetThreadInputBlocked @ 0x1C0041480 (NtUserSetThreadInputBlocked.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0041730 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     NtUserSetCursorIconData @ 0x1C006C880 (NtUserSetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C006CB50 (NtUserGetIconInfo.c)
 *     NtUserDestroyCursor @ 0x1C006D410 (NtUserDestroyCursor.c)
 *     NtUserDrawIconEx @ 0x1C006D5B0 (NtUserDrawIconEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C006DF00 (NtUserDeferWindowPosAndBand.c)
 *     _FindWindowEx @ 0x1C0070458 (_FindWindowEx.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C007B8B0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     NtUserRegisterHotKey @ 0x1C00A4FD0 (NtUserRegisterHotKey.c)
 *     _GetClassInfoEx @ 0x1C00AED40 (_GetClassInfoEx.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     UserJobCallout @ 0x1C00B1A90 (UserJobCallout.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6960 (NtUserUnhookWinEvent.c)
 *     SendDwmIconChange @ 0x1C00B7154 (SendDwmIconChange.c)
 *     _GetPointerDeviceRects @ 0x1C00B9184 (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceRects @ 0x1C00B9260 (NtUserGetPointerDeviceRects.c)
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00CC818 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C00CF334 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00D1B74 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00D6D48 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     NtUserUnregisterHotKey @ 0x1C00E6060 (NtUserUnregisterHotKey.c)
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     NtUserGetObjectInformation @ 0x1C00FA2A0 (NtUserGetObjectInformation.c)
 *     NtUserRegisterRawInputDevices @ 0x1C0102F70 (NtUserRegisterRawInputDevices.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0106FB0 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetPointerDevices @ 0x1C0111F60 (NtUserGetPointerDevices.c)
 *     NtUserUpdateInputContext @ 0x1C0116570 (NtUserUpdateInputContext.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01166D8 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     SuspendThreadQueue @ 0x1C01167E0 (SuspendThreadQueue.c)
 *     NtUserAssociateInputContext @ 0x1C011A220 (NtUserAssociateInputContext.c)
 *     NtUserDestroyMenu @ 0x1C011D8C0 (NtUserDestroyMenu.c)
 *     NtUserBuildHimcList @ 0x1C01246E0 (NtUserBuildHimcList.c)
 *     NtUserRegisterDManipHook @ 0x1C0125A10 (NtUserRegisterDManipHook.c)
 *     xxxCsDdeInitialize @ 0x1C0126F90 (xxxCsDdeInitialize.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0127530 (NtUserSetMenuDefaultItem.c)
 *     NtUserSetGestureConfig @ 0x1C012A940 (NtUserSetGestureConfig.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C012BAD0 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C012CBB0 (NtUserRegisterTouchPadCapable.c)
 *     NtUserSetWindowStationUser @ 0x1C012DD50 (NtUserSetWindowStationUser.c)
 *     NtUserRegisterUserApiHook @ 0x1C0130800 (NtUserRegisterUserApiHook.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     NtUserCallHwndOpt @ 0x1C0136030 (NtUserCallHwndOpt.c)
 *     NtUserDestroyInputContext @ 0x1C014FD40 (NtUserDestroyInputContext.c)
 *     NtUserCheckMenuItem @ 0x1C0152020 (NtUserCheckMenuItem.c)
 *     zzzAnimateFade @ 0x1C0152BA8 (zzzAnimateFade.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C01556E0 (NtUserGetOwnerTransformedMonitorRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ProcessHidRawInput @ 0x1C01C4EB0 (ProcessHidRawInput.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01CD1C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     EditionPostInertiaMessage @ 0x1C01CEC40 (EditionPostInertiaMessage.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01D3CCC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     zzzStartSonar @ 0x1C01D479C (zzzStartSonar.c)
 *     DestroyTask @ 0x1C01D5EA0 (DestroyTask.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01ED96C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01F2AC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0211080 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     NtUserBlockInput @ 0x1C0211D80 (NtUserBlockInput.c)
 *     NtUserClearForeground @ 0x1C0212590 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C0212A80 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C0212D20 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C02139B0 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserGetGestureConfig @ 0x1C0214770 (NtUserGetGestureConfig.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C0215700 (NtUserGetLayeredWindowAttributes.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C0215D90 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetPointerDevice @ 0x1C0215EA0 (NtUserGetPointerDevice.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0215FB0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C02161B0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetRawInputBuffer @ 0x1C02165D0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0216950 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetRawInputDeviceList @ 0x1C0216E10 (NtUserGetRawInputDeviceList.c)
 *     NtUserGetRegisteredRawInputDevices @ 0x1C0217070 (NtUserGetRegisteredRawInputDevices.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1C0218670 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserInjectGesture @ 0x1C0218920 (NtUserInjectGesture.c)
 *     NtUserSetCalibrationData @ 0x1C021C140 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C021C7D0 (NtUserSetDisplayMapping.c)
 *     NtUserSetFallbackForeground @ 0x1C021C920 (NtUserSetFallbackForeground.c)
 *     NtUserSetMenuContextHelpId @ 0x1C021CD00 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C021CDE0 (NtUserSetMenuFlagRtoL.c)
 *     NtUserSetObjectInformation @ 0x1C021CF80 (NtUserSetObjectInformation.c)
 *     NtUserUnregisterUserApiHook @ 0x1C021E7A0 (NtUserUnregisterUserApiHook.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02257BC (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C0225904 (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C0225FFC (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0226380 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
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
