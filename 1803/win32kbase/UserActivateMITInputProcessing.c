/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C0130CD4
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C00B3860 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0120C14 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0122434 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0122A38 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C01241A0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     IOCPDispatcher_Destroy @ 0x1C0124890 (IOCPDispatcher_Destroy.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C01333CC (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ApiSetEditionActivateMitInput @ 0x1C013D598 (ApiSetEditionActivateMitInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(
        int (*a1)(struct _InputHitTestRequest *, struct _InputHitTestResult *),
        _QWORD *a2)
{
  struct IOCPDispatcher **v4; // rcx
  unsigned int v5; // ebx
  bool v6; // di
  __int64 v7; // rbp
  __int64 v8; // rdx
  CInputThread *v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall **v11)(); // rsi
  CBaseInput **v12; // rsi
  __int64 v13; // rbp

  v4 = (struct IOCPDispatcher **)WPP_GLOBAL_Control;
  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xAu,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  if ( gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
  *a2 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance(v4) < 0 )
    goto LABEL_6;
  v7 = *((_QWORD *)gpIOCPDispatcher + 344);
  v6 = v7 != 0;
  if ( !v7 )
  {
LABEL_17:
    if ( v6 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( (unsigned int)ApiSetEditionActivateMitInput() )
  {
    v6 = 1;
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    CInputThread::ActivateInputProcessing(v9);
    InputExtensibilityCallout::OnInputThreadStateChanged(v10, 0);
    v11 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange((__int64)v11[3], 0);
      v11 += 6;
    }
    while ( v11 != (__int64 (__fastcall **)())&gpeqErrorLow );
    CSpatialProcessor::_spfnInputHitTestCallback = a1;
    v12 = &qword_1C019A5A8;
    *a2 = v7;
    v13 = 3LL;
    do
    {
      if ( *((_DWORD *)v12 - 2) == 2 )
        CBaseInput::Read(*v12);
      v12 += 6;
      --v13;
    }
    while ( v13 );
    goto LABEL_17;
  }
LABEL_6:
  v6 = 0;
LABEL_18:
  IOCPDispatcher_Destroy();
  WPP_RECORDER_SF_(
    (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
    2u,
    2u,
    0xBu,
    (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
LABEL_19:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xCu,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  LOBYTE(v5) = v6;
  return v5;
}
