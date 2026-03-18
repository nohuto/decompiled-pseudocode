/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C016C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  struct CInputPointerNode *NodeById; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (CTouchProcessor *)((char *)this + 48));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_7;
  if ( a3 )
    *a3 = (*((_DWORD *)NodeById + 72) & 0x200u) >> 9;
  v7 = *((_DWORD *)NodeById + 72);
  if ( (v7 & 0x80u) != 0 || (v7 & 0x100) != 0 )
LABEL_7:
    v8 = 1;
  else
    v8 = 0;
  if ( !v11 )
    CInpLockGuard::UnLock(v10);
  return v8;
}
