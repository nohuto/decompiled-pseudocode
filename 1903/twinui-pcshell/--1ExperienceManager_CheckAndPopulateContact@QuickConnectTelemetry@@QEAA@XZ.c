/*
 * XREFs of ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1801A0680
 * Callers:
 *     _lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_ @ 0x1801A04D4 (_lambda_417362b0a1391b76000680eec230619f_--__lambda_417362b0a1391b76000680eec230619f_.c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_ @ 0x1801A0504 (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--__lambda_f8d696b2e2b9ef5ca7bb243e22227a17_.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801A0CDC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     _CQuickConnectExperienceManager::CheckAndPopulateContact_::_1_::dtor$0 @ 0x1801A107B (_CQuickConnectExperienceManager--CheckAndPopulateContact_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A1510 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact(
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
