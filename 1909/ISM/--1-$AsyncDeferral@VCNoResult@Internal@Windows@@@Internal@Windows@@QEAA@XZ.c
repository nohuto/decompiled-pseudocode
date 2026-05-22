/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180066864
 * Callers:
 *     _InputSiteElementProxy::OnUIAHitTestInputObjectChanged_::_1_::dtor$25 @ 0x18003A730 (_InputSiteElementProxy--OnUIAHitTestInputObjectChanged_--_1_--dtor$25.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x18003BAE0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$24 @ 0x18003BB20 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$24.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$4 @ 0x1800F96DA (_ContextualProcessorManager--OnHitTest_--_1_--dtor$4.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1800F9F9C (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x18011BB52 (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x18011BE4E (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x18011C34D (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)(a1 + 8));
}
