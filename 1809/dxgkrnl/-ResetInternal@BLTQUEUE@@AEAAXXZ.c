/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C0247C08
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0158820 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0247C4C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C024610C (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0248BF8 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
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
