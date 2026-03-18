/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C0106700
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C002D330 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LONG lCount; // eax

  GreAcquireHmgrSemaphore((__int64)pssem, v1, v2);
  lCount = pssem->lCount;
  if ( lCount == 1 )
  {
    GreDeleteSemaphore((PERESOURCE)pssem->hsem);
    pssem->hsem = 0LL;
    lCount = pssem->lCount;
  }
  pssem->lCount = lCount - 1;
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
