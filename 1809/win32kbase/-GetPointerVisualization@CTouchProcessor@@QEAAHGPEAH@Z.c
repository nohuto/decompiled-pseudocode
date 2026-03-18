/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C013DE10
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  struct CInputPointerNode *NodeById; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (struct CInpLockGuard *)(this + 7));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_7;
  if ( a3 )
    *a3 = (*((_DWORD *)NodeById + 82) & 0x200u) >> 9;
  v7 = *((_DWORD *)NodeById + 82);
  if ( (v7 & 0x80u) != 0 || (v7 & 0x100) != 0 )
LABEL_7:
    v8 = 1;
  else
    v8 = 0;
  if ( !v11 )
    CInpLockGuard::UnLock(v10);
  return v8;
}
