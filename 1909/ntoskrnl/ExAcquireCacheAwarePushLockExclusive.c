/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x1400EF540
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400EF590 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(ULONG_PTR a1)
{
  PRTL_BALANCED_NODE v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire(a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v2, a1);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  return result;
}
