/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C0125BAC
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  void *v8; // rcx
  NTSTATUS v9; // eax
  void *v10; // rcx

  v3 = *(_DWORD *)(a2 + 184);
  if ( (v3 & 4) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(a2 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x20u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~4u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (__int64)&unk_1C01933C8,
    0,
    3u);
  v8 = *(void **)(a2 + 248);
  if ( v8 )
  {
    v9 = IoUnregisterPlugPlayNotification(v8);
    v10 = *(void **)(a2 + 32);
    v6 = v9;
    *(_QWORD *)(a2 + 248) = 0LL;
    ObfDereferenceObject(v10);
  }
  WPP_RECORDER_SF_qqD(
    (__int64)v8,
    v7,
    0x15u,
    0x22u,
    (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
    a1,
    a2,
    v6);
  return v6;
}
