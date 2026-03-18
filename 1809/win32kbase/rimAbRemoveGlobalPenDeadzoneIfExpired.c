/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C01106B8
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C011067C (rimAbRemoveGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !gDeviceArbitrationType )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 504) )
    {
      rimAbRemoveGlobalPenDeadzone(a1, a2, a3);
      return WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0xBu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
    }
  }
  return result;
}
