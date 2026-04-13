/*
 * XREFs of _TlgWrite @ 0x180001200
 * Callers:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180006474 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180006714 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18000A7F0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180015004 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     ?OnErrorReported@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@UEAAX_NAEBUFailureInfo@wil@@@Z @ 0x18001F920 (-OnErrorReported@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@UEAAX_NAEBUFai.c)
 *     ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x180024C70 (-StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180025204 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x1800253B0 (-StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18002581C (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x1800259C0 (-StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@M.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x180025E2C (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18002D6A0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAA.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002DCF0 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_Tl.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18002DEA0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002E4C0 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18002FDE4 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180034AAC (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180034C48 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180034E00 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180035CC8 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180035D1C (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18003C520 (-StopActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgrou.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x18003C8E8 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18003C9E0 (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800402F0 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@MEAAXXZ @ 0x1800444B0 (-StopActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mobi.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x1800449F4 (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x180044BE0 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 *     ?NotifyFailure@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800488F0 (-NotifyFailure@-$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAA.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004A220 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 *     ??$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18004A428 (--$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?StopActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18004B8A0 (-StopActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004BC68 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StopActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18004BE20 (-StopActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004C1E8 (-StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StopActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18004C3A0 (-StopActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMan.c)
 *     ?StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004C768 (-StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ?StopActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18004C920 (-StopActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004CCE8 (-StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StopActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18004CEA0 (-StopActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x18004D268 (-StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004F5D4 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18004F8B0 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_18004F8B0.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004FE7C (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180050564 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?StopActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180060490 (-StopActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x1800608D4 (-StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x180060A34 (-Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StopActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180060F20 (-StopActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 *     ?StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180061364 (-StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x1800614C4 (-Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ?StopActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180061970 (-StopActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Ba.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180061E7C (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 *     ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x180062044 (-Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800653E0 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_1800653E0.c)
 *     ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180065BDC (-ReportStopActivity@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 *     ??$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W0PEBD@Z @ 0x180066438 (--$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerMa.c)
 *     ??$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x180066A58 (--$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegi.c)
 *     ??$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x180067068 (--$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerR.c)
 *     ??$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000AEAEPEBD@Z @ 0x180067678 (--$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManage.c)
 *     ??$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W1PEBD@Z @ 0x18006888C (--$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelem.c)
 *     ?StopActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180076F60 (-StopActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x1800773F4 (-StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180077598 (-Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StopActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180077A40 (-StopActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180077ED4 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180078078 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800795B0 (-NotifyFailure@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeli_ea_1800795B0.c)
 *     ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x18007B590 (-StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18007BB04 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18007BC18 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007CAF0 (-NotifyFailure@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007D110 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007D494 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x18007D9E8 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x180082368 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 *     ?StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18009C2A0 (-StopActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x18009C8AC (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A0180 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAA.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A07C4 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_Tl.c)
 *     ??$LayoutAndItemsRetrieved@_NII@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEA_N$$QEAI1@Z @ 0x1800A1220 (--$LayoutAndItemsRetrieved@_NII@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework.c)
 *     ??$TargetedContentTilesExtracted@IAEBQEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAIAEBQEB_W@Z @ 0x1800A12E4 (--$TargetedContentTilesExtracted@IAEBQEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@Creati.c)
 *     ??$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAI$$QEAPEB_W@Z @ 0x1800A139C (--$TargetedContentTilesExtracted@IPEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeF.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800A1500 (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800A8A18 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x1800A8FA4 (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, pActivityId, pRelatedActivityId, cData, pData);
}
