/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1402C97C0
 * Callers:
 *     MmShutdownSystem @ 0x1405ABED0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x1402C8FF0 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
