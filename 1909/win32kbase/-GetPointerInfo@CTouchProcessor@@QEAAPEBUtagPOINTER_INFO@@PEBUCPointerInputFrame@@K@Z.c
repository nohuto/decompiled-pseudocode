/*
 * XREFs of ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C0168DD0
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::GetPointerInfo(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rbx
  int IsValid; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  CInpLockGuard *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v9, (CTouchProcessor *)((char *)this + 48));
  IsValid = CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)a2 + 16) + 496 * v4));
  v7 = (v6 + 176) & -(__int64)(IsValid != 0);
  CInpLockGuard::UnLock(v9);
  return (const struct tagPOINTER_INFO *)v7;
}
