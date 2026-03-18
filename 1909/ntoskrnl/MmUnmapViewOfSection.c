/*
 * XREFs of MmUnmapViewOfSection @ 0x14065E540
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(ULONG_PTR a1)
{
  return MiUnmapViewOfSection(a1);
}
