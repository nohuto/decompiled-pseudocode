/*
 * XREFs of rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0138F88
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0139BA8 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     rimAbRemoveGlobalPenDeadzone @ 0x1C0138F4C (rimAbRemoveGlobalPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbRemoveGlobalPenDeadzoneIfExpired(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v5; // edx

  if ( !gDeviceArbitrationType )
    result = (_UNKNOWN **)MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 492) )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= *(_DWORD *)(a1 + 504) )
    {
      rimAbRemoveGlobalPenDeadzone(a1, a2, a3);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        return (_UNKNOWN **)WPP_RECORDER_SF_(
                              (_DWORD)gRimLog,
                              v5,
                              1,
                              11,
                              (__int64)&WPP_f6e7742174c03d6e55c103aec7673909_Traceguids);
      }
    }
  }
  return result;
}
