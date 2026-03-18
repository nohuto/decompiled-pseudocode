/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406F4600
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1401406D0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x1401406F8 (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}
