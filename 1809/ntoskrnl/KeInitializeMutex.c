/*
 * XREFs of KeInitializeMutex @ 0x1400DD3C0
 * Callers:
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14070DF40 (KeAllocateCalloutStackEx.c)
 *     WmipDriverEntry @ 0x1409D5020 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
