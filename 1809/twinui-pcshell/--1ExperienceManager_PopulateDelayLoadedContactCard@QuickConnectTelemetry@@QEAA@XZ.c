/*
 * XREFs of ??1ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x180171608
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x180174030 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 *     _CQuickConnectExperienceManager::PopulateDelayLoadedContactCard_::_1_::dtor$0 @ 0x18017413D (_CQuickConnectExperienceManager--PopulateDelayLoadedContactCard_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180172390 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::~ExperienceManager_PopulateDelayLoadedContactCard(
        QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
