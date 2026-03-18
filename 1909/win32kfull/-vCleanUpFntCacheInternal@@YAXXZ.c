/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C011D930
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C011D2D0 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C011D8E8 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C0141490 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C011D9C4 (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C032A328;
  if ( qword_1C032A328 )
  {
    if ( *(_QWORD *)qword_1C032A328 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C032A328;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C032A328;
      *(_QWORD *)(qword_1C032A328 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C032A328 = 0LL;
  }
  dword_1C032A320 = 0;
  gbFntCacheClosed = 1;
}
