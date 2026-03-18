/*
 * XREFs of RIMAddToActiveDevices @ 0x1C0114DD0
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C012BA30 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C012BC0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C00E7B90 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C00E7BC0 (EtwTracePointerDeviceInRangeMessageStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rsi
  _QWORD *v6; // r14
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  _QWORD *v9; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  void *v19; // rcx
  void *v20; // rcx
  int v21; // edx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (_QWORD *)(a1 + 448);
  v6 = *(_QWORD **)(a1 + 448);
  if ( *(_DWORD *)(a2 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart((struct _MCGEN_TRACE_CONTEXT *)a1);
    if ( (int)IsPostPointerDeviceInRangeMessageSupported() >= 0 )
      PostPointerDeviceInRangeMessage(a2, 0LL, 0LL);
    EtwTracePointerDeviceInRangeMessageStop(v8);
  }
  do
  {
    if ( v6 == v4 )
    {
      v10 = Win32AllocPoolZInit(0x20uLL, 0x78707352u);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        v3 = 1;
        *(_DWORD *)(v11 + 188) |= 1u;
        WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x29u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, v11);
        *v10 = a2;
        v14 = v10 + 1;
        v15 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v15 != v4 )
          __fastfail(3u);
        *v14 = v4;
        v10[2] = v15;
        *v15 = v14;
        v4[1] = v14;
        v17 = *(_DWORD *)(a1 + 464);
        if ( v17 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v13);
          v17 = *(_DWORD *)(a1 + 464);
        }
        v18 = v17 + 1;
        *(_DWORD *)(a1 + 464) = v18;
        if ( v18 == 1 )
        {
          v19 = *(void **)(a1 + 336);
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v19, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v20 = *(void **)(a1 + 344);
          if ( v20 != (void *)-1LL )
          {
            v21 = 10;
            if ( *(_DWORD *)(a1 + 352) )
              v21 = *(_DWORD *)(a1 + 352);
            DueTime.QuadPart = -10000LL * v21;
            ZwSetTimer(v20, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            *(LARGE_INTEGER *)(a1 + 376) = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v3;
    }
    v9 = v6 - 1;
    v6 = (_QWORD *)*v6;
  }
  while ( *v9 != a2 );
  v16 = *((_DWORD *)v9 + 6);
  if ( (v16 & 2) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v16 = *((_DWORD *)v9 + 6);
  }
  v3 = 1;
  if ( (v16 & 1) != 0 )
    *((_DWORD *)v9 + 6) = v16 & 0xFFFFFFFE;
  return v3;
}
