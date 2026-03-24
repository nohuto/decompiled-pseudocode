/*
 * XREFs of FsRtlIsMobileOS @ 0x1406DC050
 * Callers:
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

bool FsRtlIsMobileOS()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  return (unsigned int)TmCurrentTransaction(&v1) == -1073741637;
}
