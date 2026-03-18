/*
 * XREFs of HvAllocateCell @ 0x14062E37C
 * Callers:
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpAddValueKeyNew @ 0x14062DEF4 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x14062EEC0 (CmpAddValueToListEx.c)
 *     CmpSetValueDataNew @ 0x14062F154 (CmpSetValueDataNew.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x1406324F4 (CmpAddSubKeyEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14063D1F0 (CmpGetSecurityDescriptorNode.c)
 *     HvDuplicateCell @ 0x1406DD558 (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1406E29EC (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1406EE178 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x140785F80 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14082A490 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x14082C5C0 (CmpCreateEmptyKey.c)
 *     CmpConcatenateValueLists @ 0x140835BC0 (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835D24 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140839478 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083D8B8 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A0E524 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x14062E6C4 (HvpDoAllocateCell.c)
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
