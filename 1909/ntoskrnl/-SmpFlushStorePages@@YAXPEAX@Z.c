/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140144AA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406FA134 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}
