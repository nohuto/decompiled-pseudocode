/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C0104ECC
 * Callers:
 *     rimObsAddInputObserver @ 0x1C0104A1C (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01059F8 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     rimObsCheckForExistingObserverRegistration @ 0x1C0104D54 (rimObsCheckForExistingObserverRegistration.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v6; // edi
  char v7; // si
  unsigned int v8; // ebx

  v6 = a2;
  v7 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v8 = 0;
  if ( v7 )
  {
    if ( (unsigned int)rimObsCheckForExistingObserverRegistration(0LL, v6, a3, a4) )
      return (unsigned int)-1073741823;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( (unsigned int)rimObsCheckForExistingObserverRegistration(a1, v6, a3, a4) )
      return (unsigned int)-1073741823;
  }
  return v8;
}
