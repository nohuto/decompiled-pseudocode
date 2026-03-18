/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C0139FE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0158CEC (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  RIMDeadzone *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 42, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 43, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
  }
  else if ( v2 < 5 && (v5 = *(RIMDeadzone **)(a1 + 8LL * v2 + 416)) != 0LL )
  {
    _mm_lfence();
    RIMDeadzone::Release(v5);
    v8 = *(_QWORD *)(a1 + 8LL * v2 + 416);
    if ( *(_DWORD *)(v8 + 4) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v6, v7);
      v8 = *(_QWORD *)(a1 + 8LL * v2 + 416);
    }
    Win32FreePool(v8);
    *(_QWORD *)(a1 + 8LL * v2 + 416) = 0LL;
    --*(_DWORD *)(a1 + 456);
  }
  else
  {
    v4 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, a2, 1, 44, (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids, v4);
  }
  return v4;
}
