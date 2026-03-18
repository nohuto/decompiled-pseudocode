/*
 * XREFs of RIMDeviceNotify @ 0x1C0150950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     DeviceTypeToRimInputType @ 0x1C006C2A0 (DeviceTypeToRimInputType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0150AE0 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C0150C60 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C015197C (WPP_RECORDER_SF_Sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v5; // rbx
  char v6; // al
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 54, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  v5 = *(_QWORD *)(v3 + 336);
  if ( *(struct _KTHREAD **)(v5 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  RIMLockExclusive(v5 + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = RimDeviceTypeToRimInputType(v3, *(unsigned __int8 *)(v3 + 48));
    WPP_RECORDER_SF_Sd(v8, v7, v9, v10, v13, *(_QWORD *)(v3 + 216), v6);
  }
  if ( !*(_BYTE *)(v5 + 81)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(v3 + 48)) & *(_DWORD *)(v5 + 84)) != 0 )
  {
    v16 = 0;
    v14 = 0;
    v15 = 0;
    RIMGetPnpActionBitsFromGuid(v5, v3, v4 + 4, (unsigned int)&v16, (__int64)&v14, (__int64)&v15);
    if ( v16 || v14 || v15 )
      RIMSignalOnPnpNotificationAndWait(v5, v3, 0, v16, v14, v15);
  }
  *(_QWORD *)(v5 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v11, 1, 56, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, 0);
  }
  return 0LL;
}
