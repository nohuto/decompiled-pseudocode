/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00E6DD8
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C00E6D9C (rimAbRemoveGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !gDeviceArbitrationType )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_DWORD *)(a1 + 476) )
  {
    result = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 488) )
    {
      rimAbRemoveGlobalPenDeadzone(a1, a2);
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               0x15u,
               0xBu,
               (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
    }
  }
  return result;
}
