/*
 * XREFs of ??1CortanaExperienceManager_Dismiss@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801CE960
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801CF9E0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     _CortanaDesktopExperienceView::MinimizeToBoxMode_::_1_::dtor$0 @ 0x1801CFB96 (_CortanaDesktopExperienceView--MinimizeToBoxMode_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180052B00 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::~CortanaExperienceManager_Dismiss(
        CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_Dismiss::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
