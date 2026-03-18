/*
 * XREFs of SmcCacheDelete @ 0x1408EB330
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408E86D0 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1408E8920 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1408EC4B0 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     SmcCacheCleanup @ 0x1408EB2AC (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1408EB664 (SmcCacheRemove.c)
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
