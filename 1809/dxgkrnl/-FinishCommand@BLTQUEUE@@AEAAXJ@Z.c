/*
 * XREFs of ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0134254
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C0134140 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0158820 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C024610C (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0247C4C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0248EDC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::FinishCommand(BLTQUEUE *this, int a2)
{
  *((_DWORD *)this + 108) = a2;
  *((LARGE_INTEGER *)this + 91) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 376), 0, 0);
}
