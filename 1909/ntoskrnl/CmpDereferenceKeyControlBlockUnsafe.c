/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140635944
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpFreezeHive @ 0x1406B8BBC (CmpFreezeHive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14073C5E8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14073C644 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140832580 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x14083DB60 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
