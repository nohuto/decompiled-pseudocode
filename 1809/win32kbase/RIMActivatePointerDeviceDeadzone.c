/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C0111300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C012D828 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  unsigned int v10; // ebx
  _DWORD *v11; // rdi
  unsigned int v13; // [rsp+28h] [rbp-20h]

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x23u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v10 = -1073741811;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x24u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  }
  else if ( a2 < 5 && (_mm_lfence(), v9 = a2, v10 = 0, (v11 = *(_DWORD **)(a1 + 8 * v9 + 416)) != 0LL) )
  {
    if ( v11[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    if ( v11[4] )
      v11[10] = a3;
    else
      v10 = -1073741823;
    RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8 * v9 + 416), a3);
  }
  else
  {
    v10 = -1073741811;
  }
  v13 = v10;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x25u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids, v13);
  return v10;
}
