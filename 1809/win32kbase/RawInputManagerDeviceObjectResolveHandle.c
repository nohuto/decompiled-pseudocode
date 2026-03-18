/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0
 * Callers:
 *     RIMDeviceIoControl @ 0x1C004E580 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C0050F60 (rimCreateDev.c)
 *     ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0091D3C (-IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C00EE140 (NtSetPointerDeviceInputSpace.c)
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00F1030 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00F17E0 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C010D350 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C010DC20 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C010DEB0 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C010E500 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C010E6C0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C010EAC0 (RIMInjectInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C010F3C0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C010F560 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C010F79C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C011E7E8 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C011EA60 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C011F0A4 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C011F2F8 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C011F47C (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C011F6B8 (RIMIDEInjectMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0120DB4 (RIMIDE_InjectGenericHidInput.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0126518 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C012689C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C012C8CC (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0149870 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C015611C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // di
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char)a1;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v6 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_qd(gRimLog, v7, 22, 10, (__int64)&WPP_bae4fadeb32a30189686f4767a45fc1b_Traceguids, v5, v6);
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v8 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return v8;
}
