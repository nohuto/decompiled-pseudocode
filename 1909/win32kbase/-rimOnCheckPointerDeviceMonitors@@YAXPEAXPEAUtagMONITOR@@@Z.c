/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C01338F0
 * Callers:
 *     DestroyMonitor @ 0x1C00B4610 (DestroyMonitor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  struct tagMONITOR *v2; // r14
  int v4; // eax
  int v5; // edx
  char v6; // r15
  _QWORD *v7; // rdi
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 i; // rbx
  __int64 v13; // rax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 72, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v7 + 81) )
    {
      v6 = -69;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 73, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v7 + 71));
      for ( i = v7[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1336) )
        {
          v13 = v2 ? *(_QWORD *)v2 : 0LL;
          if ( *(_QWORD *)(i + 1344) == v13 )
          {
            if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 480) + 24LL) == 6 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
            *(_QWORD *)(i + 1344) = 0LL;
            *(_DWORD *)(i + 1352) = 0;
          }
        }
      }
      v7[72] = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v7[14] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v5, 1, 74, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v6);
  }
}
