/*
 * XREFs of BgDisplayProgressIndicator @ 0x140952260
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140952A04 (BgkDestroy.c)
 *     BgkDisplayProgressIndicator @ 0x1409FB85C (BgkDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140406AD0 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayProgressIndicator(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
