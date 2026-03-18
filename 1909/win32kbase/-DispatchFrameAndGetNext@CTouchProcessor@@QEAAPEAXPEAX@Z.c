/*
 * XREFs of ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0163BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0163DC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0167538 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::DispatchFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *NextFrame; // rsi
  const struct RIMCOMPLETEFRAME *v5; // rdx
  CInpLockGuard *v7; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v7,
    (CTouchProcessor *)((char *)this + 48));
  NextFrame = CTouchProcessor::GetNextFrame(this, a2, (struct _LIST_ENTRY *)((char *)this + 104));
  CTouchProcessor::DoContactVisualizationAndGenerateMessages(
    this,
    v5,
    a2,
    *((void **)a2 + 8),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 18) + 312LL), 4),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 18) + 312LL), 5),
    0);
  if ( !v8 )
    CInpLockGuard::UnLock(v7);
  return NextFrame;
}
