/*
 * XREFs of atexit @ 0x1800CAD84
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800012E0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001300 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x1800013D0 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800013F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800014B0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x1800015C0 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x1800015E0 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001600 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001680 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x180001710 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings__ @ 0x180001750 (ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings__.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x180001790 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--Subscriptio_ea_180001790.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping__ @ 0x180001800 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerStateTransition.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap__ @ 0x180001830 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap__ @ 0x180001860 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap__ @ 0x180001890 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMap.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerTypeTaskHandlerMap__ @ 0x1800018C0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerTypeTaskHandler.c)
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x1800018F0 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     _dynamic_initializer_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__ @ 0x180001940 (_dynamic_initializer_for__UniqueExtendedExecutionSession--s_weakSharedExtendedExecutionSession__.c)
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001980 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for___Fac_tidy_reg__ @ 0x1800019B0 (std--_dynamic_initializer_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x1800019D0 (std--_dynamic_initializer_for__classic_locale__.c)
 *     _dynamic_initializer_for__init_atexit__ @ 0x1800019F0 (_dynamic_initializer_for__init_atexit__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180001A10 (std--_dynamic_initializer_for__initlocks___0.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A6F0 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000A7DC (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000B1F0 (-Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000B2DC (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18001FDF0 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180020248 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024C1C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007CE5C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ @ 0x180095C1C (-CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ.c)
 * Callees:
 *     _onexit_0 @ 0x1800CACF0 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
