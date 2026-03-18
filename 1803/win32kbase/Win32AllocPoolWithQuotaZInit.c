/*
 * XREFs of Win32AllocPoolWithQuotaZInit @ 0x1C0019270
 * Callers:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00010EC (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000136C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00013E8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?Create@CVisualTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00016E0 (-Create@CVisualTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ?Create@CSharedReadInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0001AE8 (-Create@CSharedReadInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 *     ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0001BD0 (-Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV1.c)
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0003CF8 (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0005680 (-SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0005AA8 (-Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C00061A4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C000756C (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0009970 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C000A950 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000AAF4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0010088 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0010F20 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0013F78 (-Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C0014120 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0016548 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00175D8 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     SetHandleFlag @ 0x1C003C0D0 (SetHandleFlag.c)
 *     NtUserQueryDisplayConfig @ 0x1C00415E0 (NtUserQueryDisplayConfig.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0046FB8 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     NtUserToUnicodeEx @ 0x1C005B5F0 (NtUserToUnicodeEx.c)
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0061DBC (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0061F90 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00B2C4C (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C00B2D4C (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00B44D0 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00B5D30 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSystemParametersInfo @ 0x1C00BA130 (NtUserSystemParametersInfo.c)
 *     InjectLegacyISMTouch @ 0x1C0132140 (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01323A4 (SynthesizeMitTouchInput.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C01464D4 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C0147300 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0147640 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014DFD0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0150220 (-SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C01531C8 (-Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z.c)
 *     ?Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015717C (-Create@CSharedReadCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@.c)
 *     ?Create@CSharedWriteCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0157320 (-Create@CSharedWriteCaptureControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2.c)
 *     ?Create@CSharedReadVisualReferenceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E10C (-Create@CSharedReadVisualReferenceMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PE.c)
 *     ?Create@CSharedVisualReferenceControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E1BC (-Create@CSharedVisualReferenceControllerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 *     ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E3CC (-Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 *     ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E470 (-Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEA.c)
 *     ?Create@CSharedReadPrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E77C (-Create@CSharedReadPrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEA.c)
 *     ?Create@CSharedWritePrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E82C (-Create@CSharedWritePrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PE.c)
 *     ?Create@CSharedReadScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015EA70 (-Create@CSharedReadScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@.c)
 *     ?Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015EB3C (-Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?Create@CSharedReadAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015ED0C (-Create@CSharedReadAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@P.c)
 *     ?Create@CSharedReadDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015EE4C (-Create@CSharedReadDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAP.c)
 *     ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015EEFC (-Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEA.c)
 *     ?Create@CSharedReadRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015F12C (-Create@CSharedReadRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource.c)
 *     ?Create@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015F1DC (-Create@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 *     ?Create@CSharedHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015F3AC (-Create@CSharedHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemResourc.c)
 *     ?Create@CSharedReadHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015F478 (-Create@CSharedReadHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemRes.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void *__fastcall Win32AllocPoolWithQuotaZInit(size_t Size, unsigned int a2)
{
  void *v4; // rbx

  if ( (int)IsWin32AllocPoolWithQuotaImplSupported() < 0 )
    v4 = 0LL;
  else
    v4 = (void *)Win32AllocPoolWithQuotaImpl(41LL, Size, a2);
  if ( v4 )
    memset(v4, 0, Size);
  return v4;
}
