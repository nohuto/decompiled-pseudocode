/*
 * XREFs of PALLOCMEM2 @ 0x1C0025778
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00026CC (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0003D40 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 *     DrvEnumDisplaySettings @ 0x1C00144F0 (DrvEnumDisplaySettings.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001554C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C00158D0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0017730 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     HmgFreeDcAttr @ 0x1C0023B9C (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C0023C68 (HmgAllocateDcAttr.c)
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C003E5A0 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0040944 (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0040A94 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0049F04 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     LogDiagCDS @ 0x1C004BF0C (LogDiagCDS.c)
 *     LogDiagSDC @ 0x1C004C614 (LogDiagSDC.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C004D448 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0052A70 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C00534C0 (DrvBuildDevmodeList.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0053D54 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadImage @ 0x1C00542D0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C0054570 (MakeSystemRelativePath.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00546B0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0055DD4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvGetDisplayDriverNames @ 0x1C0056A30 (DrvGetDisplayDriverNames.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0056B74 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00572C0 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ldevLoadInternal @ 0x1C0057D70 (ldevLoadInternal.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005F588 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0061710 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C0061870 (-GetLanguageID@@YAGXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00668FC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C006B0CC (HmgAllocateObjectAttr.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C007D050 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C0085AF0 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C0088E98 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008CFD4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0091900 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C0092920 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0098000 (GreSfmCleanupPresentHistory.c)
 *     DrvInitConsole @ 0x1C00997E8 (DrvInitConsole.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     NtGdiPolyPolyDraw @ 0x1C009F8E0 (NtGdiPolyPolyDraw.c)
 *     newpathalloc @ 0x1C009FF80 (newpathalloc.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00A14A0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A2C80 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00AA460 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00F5E40 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00F8E70 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00F8F28 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00F8FCC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00FECE0 (NtHWCursorUpdatePointer.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0101D60 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     DrvSetVideoParameters @ 0x1C01054CC (DrvSetVideoParameters.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0107C08 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C0109044 (MakeSystemDriversRelativePath.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void *__fastcall PALLOCMEM2(size_t Size, __int64 a2, int a3)
{
  void *v3; // rbx
  size_t v5; // rdi
  void *v6; // rax

  v3 = 0LL;
  if ( (_DWORD)Size )
  {
    v5 = (unsigned int)Size;
    v6 = (void *)Win32AllocPool((unsigned int)Size, a2);
    v3 = v6;
    if ( v6 )
    {
      if ( a3 )
        memset(v6, 0, v5);
    }
  }
  return v3;
}
