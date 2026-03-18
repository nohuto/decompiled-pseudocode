/*
 * XREFs of RIMDeviceNotify @ 0x1C0124330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0124494 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01245D0 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C01253F0 (WPP_RECORDER_SF_Sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceNotify(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  char v8; // al
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x36u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  v7 = *(_QWORD *)(a2 + 336);
  if ( *(struct _KTHREAD **)(v7 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  RIMLockExclusive(v7 + 104);
  v8 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  WPP_RECORDER_SF_Sd(v10, v9, v11, v12, v14, *(_QWORD *)(a2 + 216), v8);
  if ( !*(_BYTE *)(v7 + 81)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(v7 + 84)) != 0 )
  {
    v18 = 0;
    v16 = 0;
    v17 = 0;
    RIMGetPnpActionBitsFromGuid(v7, a2, a1 + 4, (unsigned int)&v18, (__int64)&v16, (__int64)&v17);
    if ( v18 || v16 || v17 )
      RIMSignalOnPnpNotificationAndWait(v7, a2, 0, v18, v16, v17);
  }
  *(_QWORD *)(v7 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v15) = 0;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x38u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v15);
  return 0LL;
}
