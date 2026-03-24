/*
 * XREFs of KeInitializeMutant @ 0x1400DD360
 * Callers:
 *     NtCreateMutant @ 0x14065B3C0 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD378 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
