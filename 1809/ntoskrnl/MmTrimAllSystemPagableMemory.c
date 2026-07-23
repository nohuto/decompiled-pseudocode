/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1402B4510
 * Callers:
 *     MmShutdownSystem @ 0x14057CEF0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x1402B3D80 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
