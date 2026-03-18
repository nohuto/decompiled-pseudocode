/*
 * XREFs of CmUnlockHiveSecurity @ 0x140634F84
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x140635218 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmpCreateEmptyKey @ 0x14082BCC0 (CmpCreateEmptyKey.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 */

char __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  return ExReleasePushLockEx(a1 + 1776, 0LL);
}
