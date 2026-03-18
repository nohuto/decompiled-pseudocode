/*
 * XREFs of rimObsCheckForExistingObserverRegistration @ 0x1C0104D54
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C0104ECC (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCheckForExistingObserverRegistration(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // ebx
  char v7; // bp
  struct _LIST_ENTRY *Flink; // r9
  unsigned int v9; // r10d

  v6 = a2;
  v7 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  Flink = gObRimInputObserverList.Flink;
  v9 = 0;
  while ( Flink != &gObRimInputObserverList )
  {
    if ( (!v7 || ((__int64)Flink[6].Flink & 2) != 0)
      && v6 == HIDWORD(Flink[5].Flink)
      && (v6 != 2 || a3 == LODWORD(Flink[5].Blink) && a4 == HIDWORD(Flink[5].Blink)) )
    {
      return 1;
    }
    Flink = Flink->Flink;
  }
  return v9;
}
