/*
 * XREFs of ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C00A01E4
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0009E80 (ndisQueuedCheckForHang.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(AutoAcquireMiniportSpinLock *this)
{
  if ( this->m_oldIrql == 254 )
  {
    this->m_miniport->LockThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&this->m_miniport->Lock);
  }
  else
  {
    if ( this->m_oldIrql == 255 )
      return;
    this->m_miniport->LockThread = 0LL;
    KeReleaseSpinLock(&this->m_miniport->Lock, this->m_oldIrql);
  }
  this->m_oldIrql = -1;
}
