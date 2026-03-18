/*
 * XREFs of ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C016BC48
 * Callers:
 *     NtUserGetPointerProprietaryId @ 0x1C0118AE0 (NtUserGetPointerProprietaryId.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01667CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::GetPointerProprietaryId(CTouchProcessor *this, unsigned __int16 a2, struct _GUID *a3)
{
  CTouchProcessor *v3; // rbx
  struct CInpLockGuard *v6; // rdx
  struct CInputPointerNode *NodeById; // rax
  __int64 v8; // rdx
  char v9; // bl
  CInpLockGuard *v11[2]; // [rsp+20h] [rbp-18h] BYREF

  v3 = gpTouchProcessor;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v6 = (CTouchProcessor *)((char *)gpTouchProcessor + 48);
  *a3 = 0u;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v11, v6);
  NodeById = CTouchProcessor::FindNodeById(v3, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_6;
  v8 = *(_QWORD *)((char *)NodeById + 36) - *(_QWORD *)&a3->Data1;
  if ( !v8 )
    v8 = *(_QWORD *)((char *)NodeById + 44) - *(_QWORD *)a3->Data4;
  if ( v8 )
  {
    v9 = 1;
    *a3 = *(struct _GUID *)((char *)NodeById + 36);
  }
  else
  {
LABEL_6:
    v9 = 0;
  }
  if ( !LODWORD(v11[1]) )
    CInpLockGuard::UnLock(v11[0]);
  return v9;
}
