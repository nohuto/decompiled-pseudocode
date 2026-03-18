/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C01259D0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     rimOnPnpRemoveComplete @ 0x1C004DB18 (rimOnPnpRemoveComplete.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Du, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (__int64)&unk_1C01933C8,
    0,
    3u);
  v5 = *(_DWORD *)(a2 + 184);
  v6 = -__CFSHR__(*(_DWORD *)(a2 + 200), 6);
  *(_DWORD *)(a2 + 184) = v5 | 8;
  rimOnPnpRemoveComplete(a1, a2, v7);
  v8 = (*(_DWORD *)(a2 + 184) ^ v5) & 0x400;
  *(_DWORD *)(a2 + 200) ^= (*(_DWORD *)(a2 + 200) ^ (32 * v6)) & 0x20;
  *(_DWORD *)(a2 + 184) ^= v8;
  WPP_RECORDER_SF_qqD(v10, v9, 0x15u, 0x1Fu, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1, a2, 0);
  return 0LL;
}
