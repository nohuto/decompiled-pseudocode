/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004E648
 * Callers:
 *     _SpectrumListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x180095AF4 (_SpectrumListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     ?StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F18A0 (-StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Intern.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StartListeningToSpatialObjects_::_1_::dtor$0 @ 0x1800F1B0E (_Windows--Internal--SpatialInteractions--SpatialInteractionEyeGazeObjectDevice--StartListeningTo.c)
 *     ?Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180153514 (-Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle_::_1_::dtor$5 @ 0x180153AD4 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--CloseDriverHandle_--_1_--dtor$5.c)
 *     _Windows::Internal::Holographic::NodePropertyCache::GetValue_::_1_::dtor$1 @ 0x180158526 (_Windows--Internal--Holographic--NodePropertyCache--GetValue_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::PropertyCache::GetValue_::_1_::dtor$1 @ 0x180158734 (_Windows--Internal--Holographic--PropertyCache--GetValue_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$6 @ 0x18015B2BF (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
