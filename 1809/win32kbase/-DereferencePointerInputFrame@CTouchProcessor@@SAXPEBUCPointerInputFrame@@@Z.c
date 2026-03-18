/*
 * XREFs of ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0137410
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrame(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  CInpLockGuard *v4[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v4,
    (struct CInpLockGuard *)(*(_QWORD *)a1 + 56LL),
    0LL);
  CTouchProcessor::UnreferenceFrame(v1, (__int64)a1, v3);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v4);
}
