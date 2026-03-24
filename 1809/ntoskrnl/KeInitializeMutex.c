/*
 * XREFs of KeInitializeMutex @ 0x1400DD340
 * Callers:
 *     EtwpInitLoggerContext @ 0x14065B12C (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14070CCA0 (KeAllocateCalloutStackEx.c)
 *     WmipDriverEntry @ 0x1409D4020 (WmipDriverEntry.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD378 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
