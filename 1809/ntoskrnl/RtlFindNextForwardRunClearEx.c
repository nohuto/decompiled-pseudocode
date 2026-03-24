/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x1402EEA10
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140579230 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405793C4 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E0900 (MiDeleteLeakedSessionPool.c)
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B120 (RtlFindNextForwardRunClearCappedEx.c)
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
