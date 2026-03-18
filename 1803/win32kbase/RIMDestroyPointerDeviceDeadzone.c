/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C00E7CD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01061E8 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  RIMDeadzone *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v4 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x29u,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x2Au,
      (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
  }
  else if ( a2 < 5 && (v5 = *(RIMDeadzone **)(a1 + 8LL * a2 + 416)) != 0LL )
  {
    _mm_lfence();
    RIMDeadzone::Release(v5);
    v7 = *(_QWORD *)(a1 + 8LL * a2 + 416);
    if ( *(_DWORD *)(v7 + 4) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      v7 = *(_QWORD *)(a1 + 8LL * a2 + 416);
    }
    Win32FreePool(v7);
    *(_QWORD *)(a1 + 8LL * a2 + 416) = 0LL;
    --*(_DWORD *)(a1 + 456);
  }
  else
  {
    v4 = -1073741811;
  }
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Bu,
    (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
    v9);
  return v4;
}
