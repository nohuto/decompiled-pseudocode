/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x1402D6EC8
 * Callers:
 *     MiScrubProcesses @ 0x14089CB70 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 392LL) != 0LL;
}
