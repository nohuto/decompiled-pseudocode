/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C00FD3E8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCloseDev @ 0x1C00F74C0 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00FC1AC (WPP_RECORDER_SF_qqD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx

  v2 = *(_DWORD *)(a2 + 184);
  if ( (v2 & 2) == 0 )
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
    0x16u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~2u;
  v5 = RIMCloseDev(a2);
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v6,
    0x14u,
    0x17u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
    a1,
    a2,
    v5);
  return v5;
}
