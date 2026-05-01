/*
 * XREFs of ??1OnPreloadClipboardViewActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4AC8
 * Callers:
 *     ?PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B9910 (-PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::PreloadClipboardView_::_1_::dtor$0 @ 0x1802B99C5 (_TouchKeyboardExperienceManager--PreloadClipboardView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B577C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadClipboardViewActivity::~OnPreloadClipboardViewActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadClipboardViewActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadClipboardViewActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
