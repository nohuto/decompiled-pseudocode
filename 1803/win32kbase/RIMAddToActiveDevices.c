/*
 * XREFs of RIMAddToActiveDevices @ 0x1C00EA1F8
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C00AC3C0 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C00AC3F0 (EtwTracePointerDeviceInRangeMessageStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *v3; // rsi
  LARGE_INTEGER *QuadPart; // r14
  __int64 v7; // rcx
  LARGE_INTEGER *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER **v12; // rax
  LARGE_INTEGER **v13; // rdx
  DWORD v14; // eax
  DWORD LowPart; // eax
  DWORD v16; // eax
  void *v17; // rcx
  void *v18; // rcx
  int v19; // edx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a1 + 54;
  QuadPart = (LARGE_INTEGER *)a1[54].QuadPart;
  if ( *(_DWORD *)(a2 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart((__int64)a1);
    if ( (int)IsPostPointerDeviceInRangeMessageSupported() >= 0 )
      PostPointerDeviceInRangeMessage(a2, 0LL, 0LL);
    EtwTracePointerDeviceInRangeMessageStop(v7);
  }
  do
  {
    if ( QuadPart == v3 )
    {
      v9 = Win32AllocPoolZInit(0x20uLL, 0x78707352u);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        v2 = 1;
        *(_DWORD *)(v10 + 188) |= 1u;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0x27u,
          (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
          v10);
        *v9 = a2;
        v12 = (LARGE_INTEGER **)(v9 + 1);
        v13 = (LARGE_INTEGER **)v3[1].QuadPart;
        if ( *v13 != v3 )
          __fastfail(3u);
        *v12 = v3;
        v9[2] = v13;
        *v13 = (LARGE_INTEGER *)v12;
        v3[1].QuadPart = (LONGLONG)v12;
        LowPart = a1[56].LowPart;
        if ( LowPart == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v13);
          LowPart = a1[56].LowPart;
        }
        v16 = LowPart + 1;
        a1[56].LowPart = v16;
        if ( v16 == 1 )
        {
          v17 = (void *)a1[41].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v17, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v18 = (void *)a1[42].QuadPart;
          if ( v18 != (void *)-1LL )
          {
            v19 = 10;
            if ( a1[43].LowPart )
              v19 = a1[43].LowPart;
            DueTime.QuadPart = -10000LL * v19;
            ZwSetTimer(v18, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[46] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v2;
    }
    v8 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v8->QuadPart != a2 );
  v14 = v8[3].LowPart;
  if ( (v14 & 2) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v14 = v8[3].LowPart;
  }
  v2 = 1;
  if ( (v14 & 1) != 0 )
    v8[3].LowPart = v14 & 0xFFFFFFFE;
  return v2;
}
