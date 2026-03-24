/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1402B4320
 * Callers:
 *     MmShutdownSystem @ 0x14057BEF0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x1402B3B90 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
