/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406FA134
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140144AA0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x140144AC8 (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}
