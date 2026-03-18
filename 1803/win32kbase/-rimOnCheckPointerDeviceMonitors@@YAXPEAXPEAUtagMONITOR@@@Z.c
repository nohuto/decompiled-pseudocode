/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C00DF034
 * Callers:
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  int v4; // r14d
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x49u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x4Au,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 69));
      for ( i = v5[51]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 848) && *(struct tagMONITOR **)(i + 856) == a2 )
        {
          if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 480) + 24LL) == 6 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
          *(_QWORD *)(i + 856) = 0LL;
          *(_DWORD *)(i + 864) = 0;
        }
      }
      v5[70] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 69, 0LL);
      KeLeaveCriticalRegion();
    }
    v5[13] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x4Bu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v4);
}
