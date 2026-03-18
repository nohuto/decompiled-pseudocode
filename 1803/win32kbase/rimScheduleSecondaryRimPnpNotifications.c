/*
 * XREFs of rimScheduleSecondaryRimPnpNotifications @ 0x1C00FDA44
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimScheduleSecondaryRimPnpNotifications(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x37u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  if ( !*(_DWORD *)(a2 + 852) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 876));
  ZwSetEvent(*(HANDLE *)(a1 + 376), 0LL);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x38u,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
}
