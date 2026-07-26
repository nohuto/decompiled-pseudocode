/*
 * XREFs of ??1KRegKey@@QEAA@XZ @ 0x1C00099E4
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4 (netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___.c)
 *     _lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator() @ 0x1C00B32B4 (_lambda_07fad1521ccbf9dcf92f4e848ce013d0_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall KRegKey::~KRegKey(KRegKey *this)
{
  void *m_ptr; // rcx

  m_ptr = this->m_ptr;
  if ( m_ptr )
    ZwClose(m_ptr);
}
