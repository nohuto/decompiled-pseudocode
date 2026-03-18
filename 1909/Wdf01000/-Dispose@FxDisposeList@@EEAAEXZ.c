/*
 * XREFs of ?Dispose@FxDisposeList@@EEAAEXZ @ 0x1C0056DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxDisposeList::Dispose(FxDisposeList *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx

  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  return 1;
}
