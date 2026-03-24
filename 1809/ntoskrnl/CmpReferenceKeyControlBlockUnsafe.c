/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1405D8ADC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14068E6C0 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14068E738 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreezeHive @ 0x140691D0C (CmpFreezeHive.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1407F0AB0 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x1407F9A60 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1407FF1E8 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140804D80 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
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
