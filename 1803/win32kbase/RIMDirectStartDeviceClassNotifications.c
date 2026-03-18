/*
 * XREFs of RIMDirectStartDeviceClassNotifications @ 0x1C00E1330
 * Callers:
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C0123380 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartDeviceClassNotifications(char *a1, __int64 a2)
{
  int v4; // esi
  _BYTE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x78u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v5[73] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    *((_QWORD *)v5 + 14) = a2;
    *((_QWORD *)v5 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 96, 0LL);
    KeLeaveCriticalRegion();
    RIMDiscoverDevicesOfInputType(v5);
    ObfDereferenceObject(v5);
  }
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x79u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v9);
  return (unsigned int)v4;
}
