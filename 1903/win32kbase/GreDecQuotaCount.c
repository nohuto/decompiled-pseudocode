/*
 * XREFs of GreDecQuotaCount @ 0x1C008EA90
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  GreAcquireHmgrSemaphore(a1, a2, a3);
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore(v5, v4, v6);
}
