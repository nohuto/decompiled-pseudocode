/*
 * XREFs of ??1KRegKey@@QEAA@XZ @ 0x1C00FC2EC
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___ @ 0x1C00F9008 (netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___.c)
 *     _lambda_74aaa7089007ee3601df5827111bc2b5_::operator() @ 0x1C00F912C (_lambda_74aaa7089007ee3601df5827111bc2b5_--operator().c)
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
