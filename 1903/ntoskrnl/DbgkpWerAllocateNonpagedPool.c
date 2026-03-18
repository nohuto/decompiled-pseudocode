/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x140281DBC
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14084C768 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}
