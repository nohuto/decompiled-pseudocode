/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14026E4A4
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140813F18 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
