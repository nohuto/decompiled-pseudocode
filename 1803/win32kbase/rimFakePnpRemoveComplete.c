/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C00FCA1C
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     rimOnPnpRemoveComplete @ 0x1C00FD584 (rimOnPnpRemoveComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rdx

  if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x1Au,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v4 = *(_DWORD *)(a2 + 184);
  v5 = -__CFSHR__(*(_DWORD *)(a2 + 200), 6);
  *(_DWORD *)(a2 + 184) = v4 | 8;
  rimOnPnpRemoveComplete(a1, a2);
  v6 = (*(_DWORD *)(a2 + 184) ^ v4) & 0x200;
  *(_DWORD *)(a2 + 200) ^= (*(_DWORD *)(a2 + 200) ^ (32 * v5)) & 0x20;
  *(_DWORD *)(a2 + 184) ^= v6;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    0x14u,
    0x1Bu,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
    a1,
    a2,
    0);
  return 0LL;
}
