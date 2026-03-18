/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C00E1420
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0122CD0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00FB4D4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(char *a1)
{
  int v2; // ebp
  _BYTE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int i; // edi
  int v7; // eax
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x76u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v3[73] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    for ( i = 0; i <= 2; ++i )
    {
      v7 = RIMUnRegisterForInputDeviceTypeClassNotifications(v3, i);
      v2 = v7;
    }
    *((_QWORD *)v3 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  v9 = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x77u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v9);
  return (unsigned int)v2;
}
