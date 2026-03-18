/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C36F4
 * Callers:
 *     InitFNTCache @ 0x1C00C2290 (InitFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C00C2C50 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00C36AC (EngCloseFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00C3788 (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C0317308;
  if ( qword_1C0317308 )
  {
    if ( *(_QWORD *)qword_1C0317308 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C0317308;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C0317308;
      *(_QWORD *)(qword_1C0317308 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C0317308 = 0LL;
  }
  dword_1C0317300 = 0;
  gbFntCacheClosed = 1;
}
