/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1C00E7A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x1C0105B1C (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  _DWORD *v10; // rdi
  unsigned int v12; // [rsp+28h] [rbp-20h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x23u,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v9 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x24u,
      (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  }
  else if ( a2 < 5 && (_mm_lfence(), v8 = a2, v9 = 0, (v10 = *(_DWORD **)(a1 + 8 * v8 + 416)) != 0LL) )
  {
    if ( v10[2] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    if ( v10[4] )
      v10[10] = a3;
    else
      v9 = -1073741823;
    RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8 * v8 + 416), a3);
  }
  else
  {
    v9 = -1073741811;
  }
  v12 = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x25u,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
    v12);
  return v9;
}
