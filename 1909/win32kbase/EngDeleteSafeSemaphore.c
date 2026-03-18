/*
 * XREFs of EngDeleteSafeSemaphore @ 0x1C012E320
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C00109E0 (GreDeleteSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 */

void __stdcall EngDeleteSafeSemaphore(ENGSAFESEMAPHORE *pssem)
{
  int v1; // edx
  int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LONG lCount; // eax

  GreAcquireHmgrSemaphore((int)pssem, v1, v2);
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
