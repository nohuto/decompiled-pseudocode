/*
 * XREFs of MiGetVadPageSize @ 0x1402E5620
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x14064C0CC (MiCheckSecuredVad.c)
 *     MmSetGraphicsPtes @ 0x140889F60 (MmSetGraphicsPtes.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
