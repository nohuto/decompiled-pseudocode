/*
 * XREFs of rimObsCheckForExistingObserverRegistration @ 0x1C01576EC
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C015787C (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCheckForExistingObserverRegistration(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // esi
  int v6; // ebx
  char v7; // bp
  struct _LIST_ENTRY *Flink; // r9
  unsigned int v9; // r10d

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  Flink = gObRimInputObserverList.Flink;
  v9 = 0;
  while ( Flink != &gObRimInputObserverList )
  {
    if ( (!v7 || ((__int64)Flink[6].Blink & 2) != 0)
      && v6 == HIDWORD(Flink[5].Blink)
      && (v6 != 2 || v5 == LODWORD(Flink[6].Flink) && a4 == HIDWORD(Flink[6].Flink)) )
    {
      return 1;
    }
    Flink = Flink->Flink;
  }
  return v9;
}
