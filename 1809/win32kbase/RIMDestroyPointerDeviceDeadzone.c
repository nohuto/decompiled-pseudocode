/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C0111560
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C012DEF4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  RIMDeadzone *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v10; // [rsp+28h] [rbp-10h]

  v4 = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x29u, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Au, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
  }
  else if ( a2 < 5 && (v5 = *(RIMDeadzone **)(a1 + 8LL * a2 + 416)) != 0LL )
  {
    _mm_lfence();
    RIMDeadzone::Release(v5);
    v8 = *(_QWORD *)(a1 + 8LL * a2 + 416);
    if ( *(_DWORD *)(v8 + 4) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v6, v7);
      v8 = *(_QWORD *)(a1 + 8LL * a2 + 416);
    }
    Win32FreePool(v8);
    *(_QWORD *)(a1 + 8LL * a2 + 416) = 0LL;
    --*(_DWORD *)(a1 + 456);
  }
  else
  {
    v4 = -1073741811;
  }
  v10 = v4;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x2Bu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids, v10);
  return v4;
}
