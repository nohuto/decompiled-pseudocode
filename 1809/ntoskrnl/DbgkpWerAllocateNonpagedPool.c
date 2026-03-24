/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x14026E2B4
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140812D18 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
