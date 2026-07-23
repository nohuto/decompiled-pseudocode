/*
 * XREFs of RaspClearCache @ 0x14095154C
 * Callers:
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140951440 (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x14095201C (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x140952630 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
    RaspBitmapCache = *(_QWORD *)RaspBitmapCache;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
  }
  dword_1404069D4 = 0;
  return result;
}
