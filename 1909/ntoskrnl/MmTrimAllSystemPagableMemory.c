/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1402C9520
 * Callers:
 *     MmShutdownSystem @ 0x1405ABEB0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x1402C8D50 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
