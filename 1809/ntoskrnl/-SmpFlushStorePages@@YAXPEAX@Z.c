/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140303660
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x14085C2E4 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}
