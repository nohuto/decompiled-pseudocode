/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C00505A0
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0051C70 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0050744 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(char *a1)
{
  int v2; // ebp
  _BYTE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int i; // edi
  int v8; // eax
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x75u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v3[81] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    for ( i = 0; i <= 2; ++i )
    {
      v8 = RIMUnRegisterForInputDeviceTypeClassNotifications(v3, i);
      v2 = v8;
    }
    *((_QWORD *)v3 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  v10 = v2;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x76u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v10);
  return (unsigned int)v2;
}
