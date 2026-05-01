/*
 * XREFs of ??1OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0CA0
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x1802C51E4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     _KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange_::_1_::dtor$0 @ 0x1802C54ED (_KeyboardHosting--TabTipAdapter--OnShellRequestedStateChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B577C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::~OnShellHotKeyActivity(
        TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
