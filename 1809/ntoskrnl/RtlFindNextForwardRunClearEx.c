/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x1402EEC00
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14057A230 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x14057A3C4 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E1BA0 (MiDeleteLeakedSessionPool.c)
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return RtlFindNextForwardRunClearCappedEx(a1, a2, (__int64)a3, a3);
}
