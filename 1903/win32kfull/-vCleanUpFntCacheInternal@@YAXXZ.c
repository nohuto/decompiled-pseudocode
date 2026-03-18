/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E8FC0
 * Callers:
 *     InitFNTCache @ 0x1C00E8060 (InitFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C00E8960 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00E8F78 (EngCloseFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00E9054 (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C032C338;
  if ( qword_1C032C338 )
  {
    if ( *(_QWORD *)qword_1C032C338 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C032C338;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C032C338;
      *(_QWORD *)(qword_1C032C338 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C032C338 = 0LL;
  }
  dword_1C032C330 = 0;
  gbFntCacheClosed = 1;
}
