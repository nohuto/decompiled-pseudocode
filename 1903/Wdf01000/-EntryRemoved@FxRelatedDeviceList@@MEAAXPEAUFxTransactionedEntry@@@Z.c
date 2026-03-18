/*
 * XREFs of ?EntryRemoved@FxRelatedDeviceList@@MEAAXPEAUFxTransactionedEntry@@@Z @ 0x1C0095940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRelatedDeviceList::EntryRemoved(FxRelatedDeviceList *this, FxTransactionedEntry *Entry)
{
  if ( LODWORD(Entry[1].m_ListLink.Blink) == 2 )
    ++this->m_NeedReportMissing;
}
