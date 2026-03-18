/*
 * XREFs of RIMDeviceNotify @ 0x1C00FAB00
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C00FAE34 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00FB238 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C00FBEE0 (WPP_RECORDER_SF_Sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceNotify(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  char v7; // al
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x32u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v6 = *(_QWORD *)(a2 + 336);
  if ( *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  RIMLockExclusive(v6 + 96);
  v7 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  WPP_RECORDER_SF_Sd(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v12, *(_QWORD *)(a2 + 216), v7);
  if ( !*(_BYTE *)(v6 + 73)
    && ((unsigned int)DeviceTypeToRimInputType(*(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(v6 + 76)) != 0 )
  {
    v16 = 0;
    v14 = 0;
    v15 = 0;
    RIMGetPnpActionBitsFromGuid(v6, a2, a1 + 4, (unsigned int)&v16, (__int64)&v14, (__int64)&v15);
    if ( v16 || v14 || v15 )
      RIMSignalOnPnpNotificationAndWait(v6, a2, 0, v16, v14, v15);
  }
  *(_QWORD *)(v6 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v6 + 96, 0LL);
  KeLeaveCriticalRegion();
  LODWORD(v13) = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x34u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
    v13);
  return 0LL;
}
