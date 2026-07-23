/*
 * XREFs of PopNotifyTelemetryOsState @ 0x1406DFA98
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1400129D8 (TraceLoggingProviderEnabled.c)
 *     PopTransitionTelemetryOsState @ 0x1407466B8 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopNotifyTelemetryOsState(__int64 a1, int a2, int a3, char a4, char a5)
{
  unsigned int v8; // r10d
  int v9; // r11d
  unsigned int v11; // r10d
  __int64 v12; // rcx

  if ( TraceLoggingProviderEnabled(&pCallbackContext, 0, 0x800000000000uLL) )
  {
    if ( (unsigned int)(v9 - 4) <= 2 )
    {
      v12 = 2LL;
      LOBYTE(v8) = v9 == 5;
      v11 = v8 + 1;
    }
    else
    {
      if ( (unsigned int)(v9 - 2) > 1 )
        return v8;
      v11 = 4;
      v12 = 4 - (unsigned int)(a5 != 0);
      if ( v9 == 3 || a3 == 5 )
      {
        if ( (a4 & 8) != 0 )
        {
          v11 = 3;
        }
        else
        {
          v11 = 5;
          if ( (unsigned int)(a2 - 2) <= 2 )
            v11 = 8;
        }
      }
    }
    return (unsigned int)PopTransitionTelemetryOsState(v12, v11);
  }
  return v8;
}
