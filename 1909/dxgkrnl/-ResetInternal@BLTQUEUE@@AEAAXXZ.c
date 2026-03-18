/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C027DC0C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C015C290 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C027DC50 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015AB6C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C027C0E0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::ResetInternal(BLTQUEUE *this)
{
  BLTQUEUE::DiscardPendingPresent(this);
  BLTQUEUE::StopVSync(this, 0);
  if ( (*((_DWORD *)this + 212) & 1) != 0 )
  {
    KeDetachProcess();
    *((_DWORD *)this + 212) &= ~1u;
  }
}
