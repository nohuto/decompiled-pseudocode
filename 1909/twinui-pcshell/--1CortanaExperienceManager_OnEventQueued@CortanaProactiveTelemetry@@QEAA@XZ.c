/*
 * XREFs of ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18019C438
 * Callers:
 *     _CortanaDesktopExperienceView::OnViewEventQueued_::_1_::dtor$0 @ 0x1800E7684 (_CortanaDesktopExperienceView--OnViewEventQueued_--_1_--dtor$0.c)
 *     _CortanaSharedExperienceManager::_OnViewEvent_::_1_::dtor$0 @ 0x1800E76BA (_CortanaSharedExperienceManager--_OnViewEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180043914 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
