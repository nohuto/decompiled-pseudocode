/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C00F9344
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0101028 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimFindHoldingFrame @ 0x1C0058948 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int v13; // [rsp+28h] [rbp-20h]

  v6 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x31u,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
  {
    v10 = Win32AllocPoolZInit(0x58uLL, 0x66687352u);
    HoldingFrame = v10;
    if ( !v10 )
      goto LABEL_27;
    v10[3] = *(_QWORD *)(a2 + 16);
    v11 = (_QWORD *)(a1 + 520);
    v7 = *(_QWORD *)(a1 + 520);
    if ( *(_QWORD *)(v7 + 8) != a1 + 520 )
      __fastfail(3u);
    *HoldingFrame = v7;
    HoldingFrame[1] = v11;
    *(_QWORD *)(v7 + 8) = HoldingFrame;
    *v11 = HoldingFrame;
  }
  if ( *((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( *((_DWORD *)HoldingFrame + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( HoldingFrame[10] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( HoldingFrame[4] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( HoldingFrame[7] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( HoldingFrame[8] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( a3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  HoldingFrame[4] = a3;
  *((_DWORD *)HoldingFrame + 4) = 1;
  v6 = 1;
LABEL_27:
  v13 = v6;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x32u,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids,
    v13);
  return v6;
}
