/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C0056A80
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0054E10 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0058258 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(__int64 a1)
{
  int v2; // edx
  int v3; // ebx
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int i; // esi
  int v9; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 115, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( v4[81] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    for ( i = 0; i <= 2; ++i )
    {
      v9 = RIMUnRegisterForInputDeviceTypeClassNotifications(v4, i);
      v3 = v9;
    }
    *((_QWORD *)v4 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v2, 1, 116, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v3);
  }
  return (unsigned int)v3;
}
