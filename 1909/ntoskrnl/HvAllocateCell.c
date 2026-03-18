/*
 * XREFs of HvAllocateCell @ 0x1406321FC
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpAddValueKeyNew @ 0x140631D74 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x140632D40 (CmpAddValueToListEx.c)
 *     CmpSetValueDataNew @ 0x140632FD4 (CmpSetValueDataNew.c)
 *     CmpSetValueKeyExisting @ 0x140633848 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 *     CmpAddSubKeyEx @ 0x1406C4D40 (CmpAddSubKeyEx.c)
 *     HvDuplicateCell @ 0x1406DE2AC (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1406E406C (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1406EF878 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140829B90 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14082BCC0 (CmpCreateEmptyKey.c)
 *     CmpConcatenateValueLists @ 0x140835220 (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140838AD8 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C01C (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083CF18 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A0ECBC (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x140632544 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // r10d

  v5 = a2 + 11;
  v6 = 0x4000;
  v7 = v5 & 0xFFFFFFF8;
  v8 = 0;
  while ( v7 > v6 )
  {
    v6 *= 2;
    ++v8;
  }
  if ( !v8 )
    v6 = v7;
  if ( v6 > 0x100000 )
    return 0xFFFFFFFFLL;
  else
    return HvpDoAllocateCell(a1, a5);
}
