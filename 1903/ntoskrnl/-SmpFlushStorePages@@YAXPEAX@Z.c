/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1401406D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406F4600 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}
