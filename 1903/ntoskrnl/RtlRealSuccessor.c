/*
 * XREFs of RtlRealSuccessor @ 0x1401032A0
 * Callers:
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140102C64 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140102F94 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1401035D4 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140103730 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140103950 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlSplitLocks @ 0x140104488 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140135310 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140142774 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x140181B70 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x140282AE0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406B1D50 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140747730 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
