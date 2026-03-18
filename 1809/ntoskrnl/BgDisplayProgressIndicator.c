/*
 * XREFs of BgDisplayProgressIndicator @ 0x140951260
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140569E60 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140951A04 (BgkDestroy.c)
 *     BgkDisplayProgressIndicator @ 0x1409FA84C (BgkDisplayProgressIndicator.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x14095129C (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) != 0 )
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
