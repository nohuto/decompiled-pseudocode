/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x140951670
 * Callers:
 *     BgkDestroy @ 0x140951A04 (BgkDestroy.c)
 *     BgkDisplayBackgroundUpdate @ 0x1409FB3D4 (BgkDisplayBackgroundUpdate.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409516AC (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) != 0 )
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
