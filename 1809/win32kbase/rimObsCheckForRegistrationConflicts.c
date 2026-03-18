/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C012CAEC
 * Callers:
 *     rimObsAddInputObserver @ 0x1C012C614 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C012D6EC (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     rimObsCheckForExistingObserverRegistration @ 0x1C012C964 (rimObsCheckForExistingObserverRegistration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // edi
  char v7; // si
  unsigned int v8; // ebx

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v8 = 0;
  if ( v7 )
  {
    if ( (unsigned int)rimObsCheckForExistingObserverRegistration(0LL, v6, v5, a4) )
      return (unsigned int)-1073741823;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( (unsigned int)rimObsCheckForExistingObserverRegistration(a1, v6, v5, a4) )
      return (unsigned int)-1073741823;
  }
  return v8;
}
