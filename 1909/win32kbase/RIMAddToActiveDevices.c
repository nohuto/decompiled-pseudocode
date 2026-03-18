/*
 * XREFs of RIMAddToActiveDevices @ 0x1C013AF04
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0156818 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0156A14 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C019DF3C (ApiSetPostPointerDeviceInRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rsi
  LARGE_INTEGER *QuadPart; // r14
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LARGE_INTEGER *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r14
  __int64 v14; // rax
  LARGE_INTEGER **v15; // rax
  LARGE_INTEGER **v16; // rcx
  DWORD v17; // eax
  DWORD LowPart; // eax
  DWORD v19; // eax
  void *v20; // rcx
  void *v21; // rcx
  int v22; // edx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1 + 56;
  QuadPart = (LARGE_INTEGER *)a1[56].QuadPart;
  v5 = 0;
  ApiSetPostPointerDeviceInRangeMessage(a2);
  do
  {
    if ( QuadPart == v2 )
    {
      v13 = Win32AllocPoolZInit(0x20uLL, 2020635474LL);
      if ( v13 )
      {
        v14 = *(_QWORD *)(a2 + 16);
        v5 = 1;
        *(_DWORD *)(v14 + 188) |= 1u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v11, 1, 40, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids, v14);
        }
        *v13 = a2;
        v15 = (LARGE_INTEGER **)(v13 + 1);
        v16 = (LARGE_INTEGER **)v2[1].QuadPart;
        if ( *v16 != v2 )
          __fastfail(3u);
        *v15 = v2;
        v13[2] = v16;
        *v16 = (LARGE_INTEGER *)v15;
        v2[1].QuadPart = (LONGLONG)v15;
        LowPart = a1[58].LowPart;
        if ( LowPart == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v11, v12);
          LowPart = a1[58].LowPart;
        }
        v19 = LowPart + 1;
        a1[58].LowPart = v19;
        if ( v19 == 1 )
        {
          v20 = (void *)a1[42].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v20, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v21 = (void *)a1[43].QuadPart;
          if ( v21 != (void *)-1LL )
          {
            v22 = 10;
            if ( a1[44].LowPart )
              v22 = a1[44].LowPart;
            DueTime.QuadPart = -10000LL * v22;
            ZwSetTimer(v21, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[47] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v5;
    }
    v10 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v10->QuadPart != a2 );
  v17 = v10[3].LowPart;
  if ( (v17 & 2) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v17 = v10[3].LowPart;
  }
  v5 = 1;
  if ( (v17 & 1) != 0 )
    v10[3].LowPart = v17 & 0xFFFFFFFE;
  return v5;
}
