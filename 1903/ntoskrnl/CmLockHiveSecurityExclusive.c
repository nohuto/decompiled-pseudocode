/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x140631124
 * Callers:
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     CmpCreateEmptyKey @ 0x14082C5C0 (CmpCreateEmptyKey.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835D24 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
}
