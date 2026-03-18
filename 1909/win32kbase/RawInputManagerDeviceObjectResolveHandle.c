/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0055DE0 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C005921C (rimCreateDev.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A4E50 (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0113B00 (NtSetPointerDeviceInputSpace.c)
 *     NtUserInjectDeviceInput @ 0x1C0117180 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01175E0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0117D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01181A0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01185E0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0119A00 (NtUserSetFeatureReportResponse.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1C01346E0 (NtRIMSetExtendedDeviceProperty.c)
 *     RIMAreSiblingDevices @ 0x1C01359B0 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0136370 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C0136630 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0136CE0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0136EF0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01372D0 (RIMInjectInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0137CE0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0137EB0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C013813C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0150818 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C0157654 (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0176550 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017DA7C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C017DE10 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017F010 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0185188 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C018C5FC (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C011C630 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // di
  int v6; // edx
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char)a1;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qd((_DWORD)gRimLog, v6, 1, 10, (__int64)&WPP_39a160f2303f357c564ee8f2d3a2701d_Traceguids, v5, v7);
    }
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v7 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v7;
}
