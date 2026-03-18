/*
 * XREFs of GetNextFrameId @ 0x1C01820B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C019E288 (ApiSetResetLastSeenFrameId.c)
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
    CInpLockGuard::UnLock(v4);
  return v1;
}
