/*
 * XREFs of BgLibraryEnable @ 0x140169F88
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x140292470 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x140178FE0 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v3; // ebx

  if ( a2 )
    dword_14042C030 |= 0xC00u;
  if ( !a1 )
    return (dword_14042C030 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14042C030 & 1) != 0 )
    v3 = BgpFwLibraryEnable(a1);
  else
    v3 = -1073741637;
  BgpFwReleaseLock();
  return v3;
}
