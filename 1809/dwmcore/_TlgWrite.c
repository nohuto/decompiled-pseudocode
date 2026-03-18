/*
 * XREFs of _TlgWrite @ 0x180083FFC
 * Callers:
 *     ?HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180017D10 (-HitTestInteraction@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180019648 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180019810 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x18001AA50 (-TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z.c)
 *     ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B3C0 (-GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18001B9EC (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18002B010 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x18002BF04 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18002BFA4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ??1CPropertySet@@UEAA@XZ @ 0x18004E844 (--1CPropertySet@@UEAA@XZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180058C20 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18005F050 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x18006DF88 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073914 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180073FB8 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180075370 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800817EC (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180081B80 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     _lambda_8e28f867b71c5b412c422ba9f3efd952_::operator() @ 0x180083BD4 (_lambda_8e28f867b71c5b412c422ba9f3efd952_--operator().c)
 *     _anonymous_namespace_::FireFatFramesAlarm @ 0x180083E90 (_anonymous_namespace_--FireFatFramesAlarm.c)
 *     ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x180084A6C (-SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180084B40 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008AD10 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800A0374 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800BCBCC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF370 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18014D594 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014E1D4 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x18018AD70 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x18018B104 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18018C420 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180195A44 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019CD84 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18019CFF0 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019D1E0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x18019D310 (-UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18019EEF8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A20EC (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A2300 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801A6340 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801A6E8C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801A83AC (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801A9160 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ??$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQuaternion@@@Z @ 0x1801B0BEC (--$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQ.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1801D64C8 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801D67D0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801D7C50 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1801DF790 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x1801DF9D0 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x1801DFE04 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801DFED8 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1801E83E0 (-Accelerate@CGravityBounceAccelerator@@UEAAMPEAUIntegrationState@@M@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1801E93F4 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1801E9580 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801EA3C0 (-DequeuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB8D8 (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801EBFDC (-QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EC5E0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1801EC958 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1801ECAA8 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801ED050 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801ED488 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801ED874 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801EDC24 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1801EE5E4 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801EE900 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801EF390 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXI_K@Z @ 0x1801EFD98 (-CaptureCurrentManipulation@CInteractionProcessor@@QEAAXI_K@Z.c)
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801F0240 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimi.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x1801F061C (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801F0894 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801F0D94 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801F1D4C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x1801F206C (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F242C (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801F29F0 (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801F34F4 (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 *     ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x1801F3BB0 (-GetGlobalMotion@CInteractionContextWrapper@@UEAA-AUInteractionMotion@@XZ.c)
 *     ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x1801F3DD0 (-GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z.c)
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801F40A4 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801F4360 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 *     ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801F49B0 (-ResetOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 *     ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x1801F4A50 (-StopInteraction@CInteractionContextWrapper@@UEAAJXZ.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801F4E30 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1801F5310 (-BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z.c)
 *     ?EndInteraction@CManipulationTelemetryData@@UEAAXPEBUIManipulationResource@@@Z @ 0x1801F55C0 (-EndInteraction@CManipulationTelemetryData@@UEAAXPEBUIManipulationResource@@@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1801F56E0 (-SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801F59E0 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1801F6968 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801F7CF0 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801F80D0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801F8708 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801F90E8 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x18020A9E0 (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x18020AA58 (-DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ.c)
 *     ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z @ 0x18020AAD0 (-DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z.c)
 *     ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x18020AB84 (-DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z @ 0x18020AC1C (-DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x18020ACB4 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x18020AD70 (-DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z.c)
 *     ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x18020AE08 (-DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z.c)
 *     ?DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z @ 0x18020AEC0 (-DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z @ 0x18020AF58 (-DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x18020B35C (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x18020B3D4 (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x18020BA1C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z @ 0x18020D8FC (-DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180222134 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
