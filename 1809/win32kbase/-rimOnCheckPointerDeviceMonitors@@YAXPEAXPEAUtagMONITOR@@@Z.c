/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C010BCDC
 * Callers:
 *     DestroyMonitor @ 0x1C0063C60 (DestroyMonitor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  int v4; // r14d
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 i; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x49u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v5 + 81) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x4Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 71));
      for ( i = v5[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1192) && *(struct tagMONITOR **)(i + 1200) == a2 )
        {
          if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 480) + 24LL) == 6 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
          *(_QWORD *)(i + 1200) = 0LL;
          *(_DWORD *)(i + 1208) = 0;
        }
      }
      v5[72] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 71, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x4Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v4);
}
