/*
 * XREFs of ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C00078F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0007940 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00079E0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueueForPresent(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  int v4; // eax

  CTokenManager::AcquireTokenManagerLock(this);
  v4 = CTokenManager::EnsureTokenQueue(this, a2, 0LL);
  *((_QWORD *)this + 12) = 0LL;
  LODWORD(a2) = v4;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  return (unsigned int)a2;
}
