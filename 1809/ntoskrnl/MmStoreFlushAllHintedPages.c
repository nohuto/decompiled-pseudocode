/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x14085D544
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140303850 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x1402B8224 (MiFlushAllHintedStorePages.c)
 */

__int64 __fastcall MmStoreFlushAllHintedPages(__int64 a1, __int64 a2, __int64 a3)
{
  return MiFlushAllHintedStorePages(a1, a2, a3);
}
