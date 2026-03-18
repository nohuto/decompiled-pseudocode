/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C00FD4A8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  void *v7; // rcx
  NTSTATUS v8; // eax
  void *v9; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  if ( (v2 & 4) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v2 = *(_DWORD *)(a2 + 184);
  }
  if ( (v2 & 0x1000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x1Cu,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v7 = *(void **)(a2 + 248);
  *(_DWORD *)(a2 + 184) &= ~4u;
  if ( v7 )
  {
    v8 = IoUnregisterPlugPlayNotification(v7);
    v9 = *(void **)(a2 + 32);
    v5 = v8;
    *(_QWORD *)(a2 + 248) = 0LL;
    ObfDereferenceObject(v9);
  }
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v6,
    0x14u,
    0x1Du,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
    a1,
    a2,
    v5);
  return v5;
}
