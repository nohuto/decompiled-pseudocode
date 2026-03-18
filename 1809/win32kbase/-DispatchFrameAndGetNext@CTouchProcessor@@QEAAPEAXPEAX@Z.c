/*
 * XREFs of ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0137AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0137CA8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C013B078 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::DispatchFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *NextFrame; // rbx
  const struct RIMCOMPLETEFRAME *v5; // rdx
  CInpLockGuard *v7[8]; // [rsp+40h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  NextFrame = CTouchProcessor::GetNextFrame(this, a2, (struct _LIST_ENTRY *)((char *)this + 72));
  CTouchProcessor::DoContactVisualizationAndGenerateMessages(
    this,
    v5,
    a2,
    *((void **)a2 + 8),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 15) + 308LL), 6),
    -__CFSHR__(*(_DWORD *)(*((_QWORD *)a2 + 15) + 308LL), 7),
    0);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
  return NextFrame;
}
