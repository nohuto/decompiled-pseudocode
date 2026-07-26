/*
 * XREFs of ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C0065BA4
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0008570 (ndisQueuedCheckForHang.c)
 * Callees:
 *     <none>
 */

void __fastcall AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(AutoAcquireMiniportSpinLock *this)
{
  if ( this->m_oldIrql == 254 )
  {
    this->m_miniport->LockThread = 0LL;
    this->m_miniport->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&this->m_miniport->Lock);
  }
  else
  {
    if ( this->m_oldIrql == 255 )
      return;
    this->m_miniport->LockThread = 0LL;
    this->m_miniport->LockDbg = 0;
    KeReleaseSpinLock(&this->m_miniport->Lock, this->m_oldIrql);
  }
  this->m_oldIrql = -1;
}
