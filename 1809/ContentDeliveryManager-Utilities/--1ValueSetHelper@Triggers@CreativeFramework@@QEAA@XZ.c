/*
 * XREFs of ??1ValueSetHelper@Triggers@CreativeFramework@@QEAA@XZ @ 0x18002B374
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$3 @ 0x1800C9264 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerState_::_1_::dtor$5 @ 0x1800CC8AA (_Windows--Services--TargetedContent--Internal--SetTriggerState_--_1_--dtor$5.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$11 @ 0x1800CC9B8 (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$11.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerRegistration_::_1_::dtor$4 @ 0x1800CCEAF (_Windows--Services--TargetedContent--Internal--SetTriggerRegistration_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CreativeFramework::Triggers::ValueSetHelper::~ValueSetHelper(
        CreativeFramework::Triggers::ValueSetHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
