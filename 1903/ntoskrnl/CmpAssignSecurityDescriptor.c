/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x14082D780
 * Callers:
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpCopyKeyPartial @ 0x140716014 (CmpCopyKeyPartial.c)
 *     CmpCommitSetSecurityUoW @ 0x14072D780 (CmpCommitSetSecurityUoW.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     CmpCreateEmptyKey @ 0x14082C5C0 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D930 (CmpCopySaclToVirtualKey.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835D24 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncKeyValues @ 0x140837924 (CmpSyncKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x14063D1F0 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, void *a4, char a5)
{
  return CmpGetSecurityDescriptorNode(a1, a2, a3, a4, a5, (unsigned int *)(a3 + 44));
}
