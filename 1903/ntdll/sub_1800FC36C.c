/*
 * XREFs of sub_1800FC36C @ 0x1800FC36C
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800FC0B0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

bool sub_1800FC36C()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
