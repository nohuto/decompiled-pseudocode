/*
 * XREFs of SmcCacheDelete @ 0x1408AFC88
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408ACF68 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1408AD1C4 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1408B0DA0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x1408AFC04 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1408AFF7C (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rbx

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
