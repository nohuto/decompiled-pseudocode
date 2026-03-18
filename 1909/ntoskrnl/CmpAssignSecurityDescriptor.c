/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x14082D5FC
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x140716C74 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x14072F650 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmpCreateEmptyKey @ 0x14082BCC0 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncKeyValues @ 0x140836F84 (CmpSyncKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *a4, char a5)
{
  return CmpGetSecurityDescriptorNode(a1, a2, a3, a4, a5, (unsigned int *)(a3 + 44));
}
