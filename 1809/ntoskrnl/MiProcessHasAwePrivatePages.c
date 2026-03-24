/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x1402B15A0
 * Callers:
 *     MiScrubProcesses @ 0x14085FBC0 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 344LL) != 0LL;
}
