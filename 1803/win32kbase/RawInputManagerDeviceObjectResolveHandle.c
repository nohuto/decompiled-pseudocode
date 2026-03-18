/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10
 * Callers:
 *     NtUserRemoveInjectionDevice @ 0x1C00B8C60 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B9430 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C00E0980 (RIMAreSiblingDevices.c)
 *     RIMCompleteSecondaryRimReads @ 0x1C00E0B30 (RIMCompleteSecondaryRimReads.c)
 *     RIMDeviceIoControl @ 0x1C00E0E20 (RIMDeviceIoControl.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00E1F70 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C00E2200 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00E2840 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C00E29F0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C00E2DB0 (RIMInjectInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C00E4610 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C00E53B0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00E5724 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C00F3D70 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00F3FE0 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00F4600 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00F481C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00F4980 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00F4BCC (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C00F6174 (RIMIDE_InjectGenericHidInput.c)
 *     rimCreateDev @ 0x1C00F86B0 (rimCreateDev.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C0104CC4 (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0122730 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C013201C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C013327C (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00BCA68 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v9; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v6 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 2 )
    {
      *a4 = Object;
    }
    else
    {
      v7 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v9 = v6;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0xAu,
      (__int64)&WPP_e2b98ef7a50e35107cac108973e3e770_Traceguids,
      a1,
      v9);
  }
  return v7;
}
