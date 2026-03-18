/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C007A558
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C007A4D0 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C007AA60 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C007BD70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C007C164 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ApiSetEditionActivateMitInput @ 0x1C007C338 (ApiSetEditionActivateMitInput.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C008EA2C (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x1C00917FC (rimScheduleUserModeRimPnpRegistration.c)
 *     IOCPDispatcher_Destroy @ 0x1C0091DF0 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0091E18 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(
        int (*a1)(struct _InputHitTestRequest *, struct _InputHitTestResult *),
        _QWORD *a2)
{
  struct IOCPDispatcher **v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rbp
  bool v7; // di
  CInputThread *v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall **v10)(); // rsi
  CBaseInput **v11; // rsi
  __int64 v12; // rbp

  v4 = (struct IOCPDispatcher **)WPP_GLOBAL_Control;
  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xAu,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    MicrosoftTelemetryAssertTriggeredMsgKM("How come we already have IOCP Dispatcher?");
  *a2 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance(v4) >= 0 )
  {
    v6 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 344);
    v7 = v6 != 0;
    if ( !v6 )
      goto LABEL_16;
    if ( (unsigned int)ApiSetEditionActivateMitInput() )
    {
      v7 = 1;
      if ( gbNoMoreDITHitTest )
        MicrosoftTelemetryAssertTriggeredMsgKM("Expect gbNoMoreDITHitTest to be reset at this time. Must be FAILSE");
      CInputThread::ActivateInputProcessing(v8);
      InputExtensibilityCallout::OnInputThreadStateChanged(v9, 0LL);
      v10 = s_rgSensorMap;
      do
      {
        CBaseInput::HandleInputThreadStateChange(v10[3], 0LL);
        v10 += 6;
      }
      while ( v10 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
      rimScheduleUserModeRimPnpRegistration();
      CSpatialProcessor::_spfnInputHitTestCallback = a1;
      v11 = &qword_1C01C3018;
      *a2 = v6;
      v12 = 3LL;
      do
      {
        if ( *((_DWORD *)v11 - 2) == 2 )
          CBaseInput::Read(*v11);
        v11 += 6;
        --v12;
      }
      while ( v12 );
LABEL_16:
      if ( v7 )
        goto LABEL_17;
      goto LABEL_21;
    }
  }
  v7 = 0;
LABEL_21:
  IOCPDispatcher_Destroy();
  WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0xBu, (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
LABEL_17:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xCu,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  LOBYTE(v5) = v7;
  return v5;
}
