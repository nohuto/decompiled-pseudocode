/*
 * XREFs of KeInitializeMutex @ 0x1400FD030
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406AA3B4 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14073B370 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     PopDiagInitialize @ 0x140A06520 (PopDiagInitialize.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400FD068 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
