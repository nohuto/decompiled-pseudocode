/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C013F360
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C0062F60 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0132F34 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(CTouchProcessor *this, __int64 a2)
{
  CInpLockGuard *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v4, (CTouchProcessor *)((char *)this + 56));
  if ( a2 )
    LODWORD(a2) = -__CFSHR__(*(_DWORD *)(a2 + 36), 5);
  if ( !v5 )
    CInpLockGuard::UnLock(v4);
  return (unsigned int)a2;
}
