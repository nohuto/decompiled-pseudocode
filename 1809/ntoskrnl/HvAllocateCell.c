/*
 * XREFs of HvAllocateCell @ 0x1405FCE54
 * Callers:
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpSetValueDataNew @ 0x1405ADE10 (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 *     CmpAddSubKeyEx @ 0x1405AFA60 (CmpAddSubKeyEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 *     HvDuplicateCell @ 0x1406CB9C8 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x1406CF6DC (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407F0EA4 (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x1407FD93C (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FDAA8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x1408012F0 (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140805204 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x1409C5170 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x1405FC690 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, int a3, _QWORD *a4, __int64 *a5)
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
    return HvpDoAllocateCell(a1, v6, a3, a4, a5);
}
