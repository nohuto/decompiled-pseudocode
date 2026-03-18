/*
 * XREFs of ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C00D8BA0 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 *     EditionDevicePnpNotification @ 0x1C010CAB0 (EditionDevicePnpNotification.c)
 *     EditionRimDeviceReadNotification @ 0x1C01D42B0 (EditionRimDeviceReadNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01D45B0 (Win32kRIMDevChangeCallback.c)
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C022CEB0 (NtUserGetInteractiveControlDeviceInfo.c)
 *     NtUserGetInteractiveControlInfo @ 0x1C022D020 (NtUserGetInteractiveControlInfo.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C022D1C0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserInteractiveControlQueryUsage @ 0x1C0230CA0 (NtUserInteractiveControlQueryUsage.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C0233F20 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C0234B30 (NtUserSetInteractiveControlFocus.c)
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C0234C50 (NtUserSetInteractiveCtrlRotationAngle.c)
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023E744 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023E76C (-SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C023E7A0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1C0253140 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0253394 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02537A8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C02538F0 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253BC4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0254164 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C02545E4 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0254690 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0254D00 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0254E0C (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0254EA4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C0255BC8 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C0255E74 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C02561E8 (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C025625C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C0256300 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 * Callees:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C00D8E14 (--0InteractiveControlManager@@AEAA@XZ.c)
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
