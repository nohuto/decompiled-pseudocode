/*
 * XREFs of ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18030D55C
 * Callers:
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180313560 (-PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::PreloadInputApp_::_1_::dtor$0 @ 0x180313634 (_TouchKeyboardExperienceManager--PreloadInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18030E544 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
