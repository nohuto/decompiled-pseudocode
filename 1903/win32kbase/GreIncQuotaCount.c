/*
 * XREFs of GreIncQuotaCount @ 0x1C008B000
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C008AEA8 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall GreIncQuotaCount(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // eax

  GreAcquireHmgrSemaphore(a1, a2, a3);
  v6 = *(unsigned int *)(a1 + 64);
  v7 = ++*(_DWORD *)(a1 + 60);
  if ( v7 > (unsigned int)v6 )
    v6 = v7;
  *(_DWORD *)(a1 + 64) = v6;
  return GreReleaseHmgrSemaphore(v4, v6, v5);
}
