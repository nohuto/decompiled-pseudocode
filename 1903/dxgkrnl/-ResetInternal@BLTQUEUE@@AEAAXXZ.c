/*
 * XREFs of ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C027D4AC
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01583D0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C027D4F0 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0156CAC (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C027B980 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
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
