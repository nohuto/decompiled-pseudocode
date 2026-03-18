/*
 * XREFs of ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0137460
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01465CC (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::DereferencePointerInputFrameAndMessageData(CTouchProcessor **a1)
{
  CTouchProcessor *v1; // rbx
  CInpLockGuard *v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *a1;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v3,
    (CTouchProcessor *)((char *)*a1 + 56),
    0LL);
  CTouchProcessor::UnreferenceFrameAndMessageData(v1, (const struct CPointerInputFrame *)a1);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v3);
}
