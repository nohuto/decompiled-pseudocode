/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C0125AD8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C0091218 (RIMCloseDev.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a2 + 184);
  if ( (v3 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(a2 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x17u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~2u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (__int64)&unk_1C01933C8,
    0,
    3u);
  v6 = RIMCloseDev(a2);
  WPP_RECORDER_SF_qqD(v8, v7, 0x15u, 0x19u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1, a2, v6);
  return v6;
}
