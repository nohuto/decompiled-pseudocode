/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C009CB08
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C009CA80 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0059D10 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0093834 (-ActivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C009CE14 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C009D244 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ApiSetEditionActivateMitInput @ 0x1C009D42C (ApiSetEditionActivateMitInput.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x1C00A4280 (rimScheduleUserModeRimPnpRegistration.c)
 *     IOCPDispatcher_Destroy @ 0x1C00A4A60 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00A4A88 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(struct IOCPDispatcher **a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  int (*v4)(struct _InputHitTestRequest *, struct _InputHitTestResult *); // rbp
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdx
  CInputThread *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 (__fastcall **v11)(); // rdi
  int v12; // edx
  CBaseInput **v13; // rdi
  __int64 v14; // rbp
  char v15; // si
  int v17; // edx

  v3 = a2;
  v4 = (int (*)(struct _InputHitTestRequest *, struct _InputHitTestResult *))a1;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (struct IOCPDispatcher **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        2,
        10,
        (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
    }
  }
  if ( gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *v3 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance(a1) >= 0
    && (v6 = *((_QWORD *)gpIOCPDispatcher + 344)) != 0
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    CInputThread::ActivateInputProcessing(v8);
    InputExtensibilityCallout::OnInputThreadStateChanged(v10, 0LL);
    v11 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange(v11[3], 0LL);
      v11 += 6;
    }
    while ( v11 != (__int64 (__fastcall **)())&gTouchPadMonitor );
    rimScheduleUserModeRimPnpRegistration();
    CSpatialProcessor::_spfnInputHitTestCallback = v4;
    v13 = &qword_1C0208018;
    v14 = 3LL;
    *v3 = v6;
    v15 = 1;
    do
    {
      if ( *((_DWORD *)v13 - 2) == 2 )
        CBaseInput::Read(*v13);
      v13 += 6;
      --v14;
    }
    while ( v14 );
  }
  else
  {
    IOCPDispatcher_Destroy();
    v15 = 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v17, 3, 11, (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      2,
      12,
      (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
LABEL_20:
  LOBYTE(v5) = v15 != 0;
  return v5;
}
