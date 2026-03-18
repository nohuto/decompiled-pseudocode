/*
 * XREFs of BgLibraryEnable @ 0x140159808
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x14027D8F0 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x14016F7C0 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v3; // ebx

  if ( a2 )
    dword_140405AD0 |= 0xC00u;
  if ( !a1 )
    return (dword_140405AD0 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140405AD0 & 1) != 0 )
    v3 = BgpFwLibraryEnable(a1);
  else
    v3 = -1073741637;
  BgpFwReleaseLock();
  return v3;
}
