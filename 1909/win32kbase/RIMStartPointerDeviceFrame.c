/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C014D3B0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C013C730 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C013F2DC (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0153A0C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0153BFC (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01540B8 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     rimFindHoldingFrame @ 0x1C005C344 (rimFindHoldingFrame.c)
 *     ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1C014C678 (-StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  int v13; // edx

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 49, (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
  }
  HoldingFrame = rimFindHoldingFrame(a1, v4);
  if ( !HoldingFrame )
  {
    v11 = Win32AllocPoolZInit(0x58uLL, 1718121298LL);
    HoldingFrame = v11;
    if ( !v11 )
      goto LABEL_29;
    v11[3] = *(_QWORD *)(v4 + 16);
    v12 = (_QWORD *)(a1 + 536);
    v8 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v8 + 8) != a1 + 536 )
      __fastfail(3u);
    *HoldingFrame = v8;
    HoldingFrame[1] = v12;
    *(_QWORD *)(v8 + 8) = HoldingFrame;
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
  *((_DWORD *)HoldingFrame + 4) = 1;
  v6 = 1;
  HoldingFrame[4] = a3;
LABEL_29:
  InputTraceLogging::RIM::StartFrame((const struct RIMDEV *)v4, (const struct RIMHOLDINGFRAME *)HoldingFrame);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v13, 1, 50, (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids, v6);
  }
  return v6;
}
