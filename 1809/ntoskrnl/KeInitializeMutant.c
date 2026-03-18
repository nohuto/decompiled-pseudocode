/*
 * XREFs of KeInitializeMutant @ 0x1400DD340
 * Callers:
 *     NtCreateMutant @ 0x14065B3E0 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD358 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
