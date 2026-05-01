/*
 * XREFs of ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180182678
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180182CD0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     _TaskbarLayoutPolicyManager::CanApplyTaskbarLayout_::_1_::dtor$0 @ 0x180182F7A (_TaskbarLayoutPolicyManager--CanApplyTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183160 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout(
        TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
