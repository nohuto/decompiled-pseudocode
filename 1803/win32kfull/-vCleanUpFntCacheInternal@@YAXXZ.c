/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C004F5D0
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C004EBA0 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C004F588 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C0056070 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C004F654 (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C0326C58;
  if ( qword_1C0326C58 )
  {
    if ( *(_QWORD *)qword_1C0326C58 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C0326C58;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C0326C58;
      *(_QWORD *)(qword_1C0326C58 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C0326C58 = 0LL;
  }
  dword_1C0326C50 = 0;
  gbFntCacheClosed = 1;
}
