/*
 * XREFs of ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C0172A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerBarrelVisualization(CTouchProcessor *this, unsigned __int16 a2, char a3)
{
  struct CInputPointerNode *NodeById; // rax
  CInpLockGuard *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v7,
    (CTouchProcessor *)((char *)this + 48));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 1, 0);
  if ( NodeById )
    *((_DWORD *)NodeById + 72) = *((_DWORD *)NodeById + 72) & 0xFFFFFBFF | ((a3 & 1 | 2) << 10);
  if ( !v8 )
    CInpLockGuard::UnLock(v7);
}
