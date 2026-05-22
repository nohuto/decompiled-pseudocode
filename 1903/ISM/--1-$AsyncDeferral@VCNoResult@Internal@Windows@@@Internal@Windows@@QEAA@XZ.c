/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180066AC4
 * Callers:
 *     _InputSiteElementProxy::OnUIAHitTestInputObjectChanged_::_1_::dtor$25 @ 0x18003AC60 (_InputSiteElementProxy--OnUIAHitTestInputObjectChanged_--_1_--dtor$25.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x18003BFF0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$24 @ 0x18003C030 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$24.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$4 @ 0x1800F990A (_ContextualProcessorManager--OnHitTest_--_1_--dtor$4.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1800FA1CC (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x18011BC02 (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x18011BEFE (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x18011C3FD (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)(a1 + 8));
}
