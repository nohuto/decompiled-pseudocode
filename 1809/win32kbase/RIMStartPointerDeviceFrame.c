/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C0123534
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimFindHoldingFrame @ 0x1C008966C (rimFindHoldingFrame.c)
 *     ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1C01229EC (-StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned int v14; // [rsp+28h] [rbp-20h]

  v6 = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x31u, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
  {
    v11 = Win32AllocPoolZInit(0x58uLL, 0x66687352u);
    HoldingFrame = v11;
    if ( !v11 )
      goto LABEL_27;
    v11[3] = *(_QWORD *)(a2 + 16);
    v12 = (_QWORD *)(a1 + 536);
    v7 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v7 + 8) != a1 + 536 )
      __fastfail(3u);
    *HoldingFrame = v7;
    HoldingFrame[1] = v12;
    *(_QWORD *)(v7 + 8) = HoldingFrame;
    *v12 = HoldingFrame;
  }
  if ( *((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[10] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[4] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[7] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( HoldingFrame[8] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  if ( a3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10);
  HoldingFrame[4] = a3;
  *((_DWORD *)HoldingFrame + 4) = 1;
  v6 = 1;
LABEL_27:
  InputTraceLogging::RIM::StartFrame((const struct RIMDEV *)a2, (const struct RIMHOLDINGFRAME *)HoldingFrame);
  v14 = v6;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x32u, (__int64)&WPP_337bdb1c4c3536b074bd792c3d4c53de_Traceguids, v14);
  return v6;
}
