/*
 * XREFs of RtlRealSuccessor @ 0x14012F030
 * Callers:
 *     FsRtlFastUnlockSingleExclusive @ 0x14008C4C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14008D16C (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x14008D384 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1401225E4 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14012ED34 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x14012F0C4 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140134380 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     RtlEnumerateGenericTable @ 0x1401783B0 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14026F12C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlGetNextFileLock @ 0x14026F2E0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406BA6D0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x14071FC30 (RtlNextUnicodePrefix.c)
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
