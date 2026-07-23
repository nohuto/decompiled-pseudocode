/*
 * XREFs of KeInitializeMutant @ 0x1400DD3E0
 * Callers:
 *     NtCreateMutant @ 0x14065C580 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
