/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C00FD584
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C00E11E0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMRemoveDevOfInputType @ 0x1C00F822C (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     rimFakePnpRemoveComplete @ 0x1C00FCA1C (rimFakePnpRemoveComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCloseDev @ 0x1C00F74C0 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  void *v7; // rcx
  unsigned int v8; // edi
  NTSTATUS v9; // eax
  int v10; // eax
  void *v11; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  if ( (v2 & 8) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v2 = *(_DWORD *)(a2 + 184);
  }
  if ( (v2 & 0x1000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x18u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~8u;
  v5 = RIMCloseDev(a2);
  v7 = *(void **)(a2 + 248);
  v8 = v5;
  if ( v7 )
  {
    v9 = IoUnregisterPlugPlayNotification(v7);
    *(_QWORD *)(a2 + 248) = 0LL;
    v8 = v9;
    v10 = *(_DWORD *)(a2 + 184);
    *(_DWORD *)(a2 + 200) &= ~0x20u;
    v11 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 184) = v10 & 0xFFFFFDBF | 0x200;
    ObfDereferenceObject(v11);
  }
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v6,
    0x14u,
    0x19u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
    a1,
    a2,
    v8);
  return v8;
}
