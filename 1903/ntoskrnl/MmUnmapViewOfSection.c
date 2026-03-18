/*
 * XREFs of MmUnmapViewOfSection @ 0x14064A8C0
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(ULONG_PTR a1)
{
  return MiUnmapViewOfSection(a1);
}
