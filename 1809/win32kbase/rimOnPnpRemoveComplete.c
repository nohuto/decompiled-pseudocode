/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C004DB18
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C004EA00 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1C00892D4 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     rimFakePnpRemoveComplete @ 0x1C01259D0 (rimFakePnpRemoveComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0049D94 (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C0091218 (RIMCloseDev.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  void *v8; // rcx
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  int v11; // eax
  void *v12; // rcx

  v3 = *(_DWORD *)(a2 + 184);
  if ( (v3 & 8) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_DWORD *)(a2 + 184);
  }
  if ( (v3 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x1Au, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~8u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  v6 = RIMCloseDev(a2);
  v8 = *(void **)(a2 + 248);
  v9 = v6;
  if ( v8 )
  {
    v10 = IoUnregisterPlugPlayNotification(v8);
    *(_QWORD *)(a2 + 248) = 0LL;
    v9 = v10;
    v11 = *(_DWORD *)(a2 + 184);
    *(_DWORD *)(a2 + 200) &= ~0x20u;
    v12 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 184) = v11 & 0xFFFFFB7F | 0x400;
    ObfDereferenceObject(v12);
  }
  WPP_RECORDER_SF_qqD(
    (__int64)v8,
    v7,
    0x15u,
    0x1Cu,
    (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
    a1,
    a2,
    v9);
  return v9;
}
