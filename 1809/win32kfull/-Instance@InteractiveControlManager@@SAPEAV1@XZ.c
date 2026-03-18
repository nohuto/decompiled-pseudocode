/*
 * XREFs of ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     EditionDevicePnpNotification @ 0x1C0102C50 (EditionDevicePnpNotification.c)
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0123890 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 *     EditionRimDeviceReadNotification @ 0x1C01C0510 (EditionRimDeviceReadNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C02150D0 (NtUserGetInteractiveControlDeviceInfo.c)
 *     NtUserGetInteractiveControlInfo @ 0x1C0215240 (NtUserGetInteractiveControlInfo.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C02153E0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserInteractiveControlQueryUsage @ 0x1C0218DE0 (NtUserInteractiveControlQueryUsage.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C021BDB0 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C021CA10 (NtUserSetInteractiveControlFocus.c)
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C021CB10 (NtUserSetInteractiveCtrlRotationAngle.c)
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C02262A4 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C02262CC (-SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C0226300 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1C023A4A0 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023A6EC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023AAFC (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C023AC44 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023AF18 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023B488 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C023B908 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023B9B4 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023C004 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023C110 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C023C1A8 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C023CEC0 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C023D168 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C023D4DC (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C023D550 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C023D5F8 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 * Callees:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0123AEC (--0InteractiveControlManager@@AEAA@XZ.c)
 */

struct InteractiveControlManager *InteractiveControlManager::Instance(void)
{
  InteractiveControlManager *v0; // rax

  if ( !InteractiveControlManager::s_pInstance )
  {
    v0 = (InteractiveControlManager *)Win32AllocPool(320LL, 1819440195LL);
    if ( v0 )
      InteractiveControlManager::s_pInstance = InteractiveControlManager::InteractiveControlManager(v0);
  }
  return InteractiveControlManager::s_pInstance;
}
