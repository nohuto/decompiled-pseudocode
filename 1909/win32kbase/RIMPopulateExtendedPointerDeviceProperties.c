/*
 * XREFs of RIMPopulateExtendedPointerDeviceProperties @ 0x1C014AA6C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C005DB14 (RIMRegOpenDeviceInstanceKey.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C014A734 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     RIMRegOpenLocalMachineKey @ 0x1C015B344 (RIMRegOpenLocalMachineKey.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rsi
  void *v6; // rbx

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    v5 = RIMRegOpenDeviceInstanceKey((struct _UNICODE_STRING *)a1, a2, a3);
    v6 = (void *)RIMRegOpenLocalMachineKey();
    PopulatePTPProperties((struct tagHID_POINTER_DEVICE_INFO *)a2, v5, v6);
    if ( v5 )
      ZwClose(v5);
    if ( v6 )
      ZwClose(v6);
  }
}
