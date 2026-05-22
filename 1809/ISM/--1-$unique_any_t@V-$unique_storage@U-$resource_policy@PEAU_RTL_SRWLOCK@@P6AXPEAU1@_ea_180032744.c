/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180032744
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$0 @ 0x18012DE29 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--dtor$.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::dtor$0 @ 0x18012F70C (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$2 @ 0x18012F742 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::RegisterFor3DCompositorRunningChanged_::_1_::dtor$1 @ 0x18012F766 (_MPC3DStateHelper--RegisterFor3DCompositorRunningChanged_--_1_--dtor$1.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$23 @ 0x18012FCC6 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$23.c)
 *     _NonBamoInputDeliveryServer::Create_::_1_::dtor$0 @ 0x18013436E (_NonBamoInputDeliveryServer--Create_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::PropertyCache::SetValue_::_1_::dtor$0 @ 0x1801359C2 (_Windows--Internal--Holographic--PropertyCache--SetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$0 @ 0x1801359D4 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$2 @ 0x1801359E6 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$2.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle_::_1_::dtor$0 @ 0x180135A0A (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--CloseDriverHandle_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::NodePropertyCache::SetValue_::_1_::dtor$0 @ 0x180135A76 (_Windows--Internal--Holographic--NodePropertyCache--SetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$5 @ 0x180135BCF (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_180135BCF.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$7 @ 0x180135BE1 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_180135BE1.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$13 @ 0x180135BF3 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_180135BF3.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::dtor$0 @ 0x180135E86 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDeviceIdMapping.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::dtor$0 @ 0x180135F06 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180135F06.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
