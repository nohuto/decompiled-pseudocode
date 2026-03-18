/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x1405AFFE0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14068E6E0 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14068E758 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreezeHive @ 0x140691D2C (CmpFreezeHive.c)
 *     CmpReferenceKeyControlBlock @ 0x140692A5C (CmpReferenceKeyControlBlock.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1407F9A80 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1407FF208 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140804DA0 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
