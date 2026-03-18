/*
 * XREFs of ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0144EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0144E04 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int16 a3,
        int a4)
{
  unsigned int v8; // ebx
  CInpLockGuard *v10[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (struct CInpLockGuard *)(this + 7),
    0LL);
  v8 = (unsigned int)CTouchProcessor::SetPointerInfoNodeFlag(this, a2, a3, a4);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v10);
  return v8;
}
