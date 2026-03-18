/*
 * XREFs of KeInitializeMutant @ 0x1400FD050
 * Callers:
 *     NtCreateMutant @ 0x1406AA680 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400FD068 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
