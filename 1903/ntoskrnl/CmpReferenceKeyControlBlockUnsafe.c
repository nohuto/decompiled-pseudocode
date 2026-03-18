/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x140656728
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpFreezeHive @ 0x14069A5DC (CmpFreezeHive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14073A358 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14073A3B4 (CmpCreateSiloKeyLockEntry.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x14082AED4 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140832F20 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408385E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x14083E500 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
