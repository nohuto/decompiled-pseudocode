/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C01713B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0179560 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ApiSetEditionPromotePointer @ 0x1C019DD0C (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  CInpLockGuard *v3; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  CInpLockGuard *v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CTouchProcessor *)((char *)this + 48);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v12, (CTouchProcessor *)((char *)this + 48));
  if ( !a2 )
    goto LABEL_10;
  if ( a3 == 0x10000000 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 1) != 0 )
    {
      a3 = 0;
    }
    else if ( (v6 & 2) == 0 && (v6 & 4) == 0 )
    {
      goto LABEL_10;
    }
  }
  v7 = *(_DWORD *)(a2 + 36);
  if ( (v7 & 0x10) == 0 )
  {
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( a3 )
      goto LABEL_10;
  }
  else if ( !a3 )
  {
    goto LABEL_10;
  }
  v10 = *(_WORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 28);
  CInpLockGuard::UnLock(v3);
  v8 = ApiSetEditionPromotePointer(v10, v11, a3);
  CInpLockGuard::LockShared(v3, (struct CLockListEntryStack *)&v14);
LABEL_11:
  if ( !v13 )
    CInpLockGuard::UnLock(v12);
  return v8;
}
