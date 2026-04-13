/*
 * XREFs of ??1RegisterTaskHandlerMapping@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x1800294F0
 * Callers:
 *     _ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings___::_1_::dtor$1 @ 0x1800C8FB0 (_ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings___--_1_--dtor$1.c)
 *     _ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings___::_1_::dtor$3 @ 0x1800C8FC2 (_ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings___--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$1 @ 0x1800CBAD3 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerStateTransitio.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$3 @ 0x1800CBAE5 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800CBAE5.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$5 @ 0x1800CBAFB (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800CBAFB.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$1 @ 0x1800CC33A (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindM.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$3 @ 0x1800CC34C (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800CC34C.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$5 @ 0x1800CC362 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800CC362.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$1 @ 0x1800CC3C0 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerM.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$3 @ 0x1800CC3D2 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800CC3D2.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$5 @ 0x1800CC3E8 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800CC3E8.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap___::_1_::dtor$1 @ 0x1800CC5E6 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::RegisterTaskHandlerMapping::~RegisterTaskHandlerMapping(
        Windows::Services::TargetedContent::Internal::RegisterTaskHandlerMapping *this,
        __int64 a2)
{
  char *v2; // rbx
  char *v3; // rcx

  v2 = (char *)this + 8;
  v3 = (char *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
}
