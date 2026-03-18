/*
 * XREFs of KeInitializeMutant @ 0x140108C30
 * Callers:
 *     NtCreateMutant @ 0x1406B6E80 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x140108C48 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
