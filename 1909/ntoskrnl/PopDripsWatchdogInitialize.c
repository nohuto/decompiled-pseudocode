/*
 * XREFs of PopDripsWatchdogInitialize @ 0x140A22E48
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A3D650 (PopDripsWatchdogInitializeActions.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A3D6B0 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A3D7B0 (PopDripsWatchdogInitializeDiagnosticTimer.c)
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
        dword_140442568 |= 2u;
LABEL_2:
        dword_140442568 |= 1u;
        return 0LL;
      }
    }
  }
  return result;
}
