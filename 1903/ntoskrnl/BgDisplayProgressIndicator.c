/*
 * XREFs of BgDisplayProgressIndicator @ 0x1409912C0
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14059A700 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 *     BgkDisplayProgressIndicator @ 0x140A404BC (BgkDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_14042C030 & 1) != 0 )
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
