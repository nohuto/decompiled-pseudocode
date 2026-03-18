/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140A22D68
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A3D880 (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A3D8E0 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A3D9E0 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 */

__int64 PopDripsWatchdogInitialize()
{
  __int64 result; // rax

  ExInitializeResourceLite(&PopDripsWatchdogContext);
  if ( !PopPlatformAoAc )
    goto LABEL_2;
  result = PopDripsWatchdogInitializeActions();
  if ( (int)result >= 0 )
  {
    result = PopDripsWatchdogInitializeCallbackTimer();
    if ( (int)result >= 0 )
    {
      result = PopDripsWatchdogInitializeDiagnosticTimer();
      if ( (int)result >= 0 )
      {
        dword_1404425C8 |= 2u;
LABEL_2:
        dword_1404425C8 |= 1u;
        return 0LL;
      }
    }
  }
  return result;
}
