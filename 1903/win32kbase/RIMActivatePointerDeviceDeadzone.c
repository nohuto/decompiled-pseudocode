/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C013C3A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C015A7F8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // ebx
  __int64 v6; // rbp
  unsigned int v7; // ebx
  _DWORD *v8; // rdi

  v3 = a3;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 36, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v7 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v7;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 37, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  else if ( v4 < 5 && (_mm_lfence(), v6 = v4, v7 = 0, (v8 = *(_DWORD **)(a1 + 8 * v6 + 416)) != 0LL) )
  {
    if ( v8[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( v8[4] )
      v8[10] = v3;
    else
      v7 = -1073741823;
    RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8 * v6 + 416), v3);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, a2, 1, 38, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids, v7);
  }
  return v7;
}
