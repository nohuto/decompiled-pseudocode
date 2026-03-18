/*
 * XREFs of GetNextFrameId @ 0x1C012E450
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C0141310 (ApiSetResetLastSeenFrameId.c)
 */

__int64 GetNextFrameId()
{
  struct A0xad387374::CFrameIdGenerator *v0; // rbx
  unsigned int v1; // edi
  int v2; // ecx
  CInpLockGuard *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v0 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v4,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
  v1 = *(_DWORD *)v0;
  v2 = *(_DWORD *)v0 + 1;
  *(_DWORD *)v0 = v2;
  if ( v1 == -1 )
  {
    *(_DWORD *)v0 = v2 + 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v5 )
    CInpLockGuard::UnLock((PERESOURCE *)v4);
  return v1;
}
