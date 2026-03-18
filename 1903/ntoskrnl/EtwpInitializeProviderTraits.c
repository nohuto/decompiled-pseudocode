/*
 * XREFs of EtwpInitializeProviderTraits @ 0x14076AFC8
 * Callers:
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14009ADD0 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
