/*
 * XREFs of ??1OnPreloadClipboardViewActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C980
 * Callers:
 *     ?PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180332CA0 (-PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::PreloadClipboardView_::_1_::dtor$0 @ 0x180332D55 (_TouchKeyboardExperienceManager--PreloadClipboardView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DA04 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadClipboardViewActivity::~OnPreloadClipboardViewActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadClipboardViewActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadClipboardViewActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
