/*
 * XREFs of ??1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x1801BF6A4
 * Callers:
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1801C24A0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 *     _CQuickConnectExperienceManager::ShowContactCard_::_1_::dtor$0 @ 0x1801C28FD (_CQuickConnectExperienceManager--ShowContactCard_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801C0400 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_ShowContactCard::~ExperienceManager_ShowContactCard(
        QuickConnectTelemetry::ExperienceManager_ShowContactCard *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_ShowContactCard::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
