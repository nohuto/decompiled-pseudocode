/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x1402D7168
 * Callers:
 *     MiScrubProcesses @ 0x14089D350 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 392LL) != 0LL;
}
