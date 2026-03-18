/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C01744A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        __int16 a5)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  int v11; // esi
  CInpLockGuard *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (CTouchProcessor *)((char *)this + 48));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v11 = *((_DWORD *)NodeById + 72) ^ (*((_DWORD *)NodeById + 72) ^ (a3 << 7)) & 0x80;
    *((_DWORD *)NodeById + 72) = v11;
    if ( a4 )
      v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*a4 << 8)) & 0x100;
    v10 = 1;
    *((_DWORD *)NodeById + 72) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(a5 << 9)) & 0x200;
  }
  else
  {
    v10 = 0;
  }
  if ( !v14 )
    CInpLockGuard::UnLock(v13);
  return v10;
}
