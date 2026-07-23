/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14068F880 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14068F8F8 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreezeHive @ 0x140692ECC (CmpFreezeHive.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1407F1CB0 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x1407FAC60 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408003E8 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140805F80 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *a1;
  while ( v1 != -1 )
  {
    if ( !v1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
