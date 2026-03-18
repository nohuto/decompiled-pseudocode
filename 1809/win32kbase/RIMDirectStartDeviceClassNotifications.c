/*
 * XREFs of RIMDirectStartDeviceClassNotifications @ 0x1C00A57F0
 * Callers:
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00A57B0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C004EB30 (RIMDiscoverDevicesOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStartDeviceClassNotifications(char *a1, __int64 a2)
{
  int v4; // esi
  _BYTE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x77u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v5[81] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    *((_QWORD *)v5 + 15) = a2;
    *((_QWORD *)v5 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
    KeLeaveCriticalRegion();
    RIMDiscoverDevicesOfInputType(v5);
    ObfDereferenceObject(v5);
  }
  v10 = v4;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x78u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v10);
  return (unsigned int)v4;
}
