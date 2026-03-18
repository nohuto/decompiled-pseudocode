/*
 * XREFs of MmUnmapViewOfSection @ 0x140616D50
 * Callers:
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1406171B0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(ULONG_PTR a1)
{
  return MiUnmapViewOfSection(a1);
}
