/*
 * XREFs of atexit @ 0x18012B9E8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001280 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800012A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__ISMStatics::s_viewHierarchy__ @ 0x180001310 (_dynamic_initializer_for__ISMStatics--s_viewHierarchy__.c)
 *     _dynamic_initializer_for__ISMStatics::s_inputSystemBamoConnection__ @ 0x180001330 (_dynamic_initializer_for__ISMStatics--s_inputSystemBamoConnection__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001350 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001410 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001520 (_dynamic_initializer_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x1800015C0 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 *     _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180001640 (_dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     _dynamic_initializer_for__MPCManager::s_instance__ @ 0x1800016B0 (_dynamic_initializer_for__MPCManager--s_instance__.c)
 *     _dynamic_initializer_for__TestCommandHost::m_instance__ @ 0x1800016D0 (_dynamic_initializer_for__TestCommandHost--m_instance__.c)
 *     _dynamic_initializer_for__EdgyConnection::s_spThis__ @ 0x180001870 (_dynamic_initializer_for__EdgyConnection--s_spThis__.c)
 *     _dynamic_initializer_for__MPCManagerClient::s_creationLock__ @ 0x1800018A0 (_dynamic_initializer_for__MPCManagerClient--s_creationLock__.c)
 *     _dynamic_initializer_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x1800018D0 (_dynamic_initializer_for__MPCSixDofProcessor--s_registryWatcher__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_lockSingleton__ @ 0x180001950 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraph.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::s_wpSingleton__ @ 0x180001980 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_180001980.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::m_wpDestructorFinishedEvent__ @ 0x1800019A0 (_dynamic_initializer_for__Microsoft--WRL--Singleton_Windows--Internal--Holographic-_ea_1800019A0.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x18002217C (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18002F8F4 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18003840C (-Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x1800605FC (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180068C14 (-Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x180078FDC (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800A49E8 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800AE148 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18012C9F0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18012B990 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
