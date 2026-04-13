/*
 * XREFs of ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004BC3C
 * Callers:
 *     __lambda_b7df6605325939df64e4896ead66165a_::operator()_::_1_::dtor$3 @ 0x1800CB20F (__lambda_b7df6605325939df64e4896ead66165a_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004F728 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::~ActionInvokedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvokedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
