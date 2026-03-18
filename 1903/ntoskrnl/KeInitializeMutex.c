/*
 * XREFs of KeInitializeMutex @ 0x140108C10
 * Callers:
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1407390E0 (KeAllocateCalloutStackEx.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 * Callees:
 *     KiInitializeMutant @ 0x140108C48 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}
