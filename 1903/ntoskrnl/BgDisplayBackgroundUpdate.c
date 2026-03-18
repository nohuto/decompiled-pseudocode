/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x1409916D8
 * Callers:
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A41068 (BgkDisplayBackgroundUpdate.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_14042C030 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayBackgroundUpdate(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
