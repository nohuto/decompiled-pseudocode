/*
 * XREFs of ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C0095980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019AA0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

__int64 __fastcall FxRelatedDeviceList::ProcessAdd(FxRelatedDeviceList *this, FxTransactionedEntry *NewEntry)
{
  _LIST_ENTRY *Flink; // rax
  FxRelatedDeviceList *v3; // r10
  _LIST_ENTRY *v4; // rdx
  FxTransactionedEntry *NextEntryLocked; // rcx
  __int64 v6; // r9

  Flink = this->m_TransactionHead.Flink;
  v3 = this;
  if ( Flink == &this->m_TransactionHead )
  {
LABEL_5:
    NextEntryLocked = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v3, NextEntryLocked);
      if ( !NextEntryLocked )
        break;
      if ( NextEntryLocked[1].m_ListLink.Flink == *(_LIST_ENTRY **)(v6 + 48) )
        return 3221226026LL;
    }
  }
  else
  {
    v4 = NewEntry[1].m_ListLink.Flink;
    while ( Flink[3].Flink != v4 )
    {
      Flink = Flink->Flink;
      if ( Flink == &this->m_TransactionHead )
        goto LABEL_5;
    }
    if ( LODWORD(Flink[2].Flink) == 2 )
      return 3221226026LL;
  }
  return 0LL;
}
