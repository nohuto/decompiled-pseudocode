/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x1402B1790
 * Callers:
 *     MiScrubProcesses @ 0x140860E20 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 344LL) != 0LL;
}
