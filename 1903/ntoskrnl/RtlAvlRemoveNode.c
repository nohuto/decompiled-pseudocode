/*
 * XREFs of RtlAvlRemoveNode @ 0x140029870
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F1F90 (MiDeleteStaleCacheMaps.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x140118D90 (MiRemoveUnmappedIoNode.c)
 *     MiRemoveFaultNode @ 0x14013809C (MiRemoveFaultNode.c)
 *     MiUpdatePerSessionProto @ 0x14013873C (MiUpdatePerSessionProto.c)
 *     MiFreeCombineBlock @ 0x1401415B4 (MiFreeCombineBlock.c)
 *     MiCombiningInProgress @ 0x140143D14 (MiCombiningInProgress.c)
 *     MiProcessLoaderEntry @ 0x140155004 (MiProcessLoaderEntry.c)
 *     MiSessionRemoveImage @ 0x1401687C4 (MiSessionRemoveImage.c)
 *     MiRemoveMappingNode @ 0x14017552C (MiRemoveMappingNode.c)
 *     MmManageFaultRange @ 0x140179D24 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x140192DA4 (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x1402BFAE8 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1402C0654 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiDeleteKernelStackNode @ 0x1402C430C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402C4C54 (MiMakeIoRangePermanent.c)
 *     MiUnlinkSessionList @ 0x1402CA9B4 (MiUnlinkSessionList.c)
 *     MiRemoveVad @ 0x1402DF048 (MiRemoveVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402E1A34 (MiReplaceSystemProtoPtesNode.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E3BBC (MiDeleteDeferredCloneDescriptors.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x1402E9DB0 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402EA728 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140309A18 (PsAdjustBasicEnclaveThreadList.c)
 *     MiInsertSecureImageActivePatch @ 0x1405B0F28 (MiInsertSecureImageActivePatch.c)
 *     MiSectionDelete @ 0x140607970 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x1406086F0 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x14063F414 (ExpWnfDeleteNameInstance.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 *     MiDeleteImageExtentList @ 0x14088C964 (MiDeleteImageExtentList.c)
 *     MiDeleteHotPatchRecord @ 0x14088E024 (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x14088ED68 (MiInsertHotPatchRecord.c)
 *     MiUnloadHotPatch @ 0x140891E90 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140891FDC (MiUnloadHotPatchForUserSid.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896AE4 (MiRemoveUserPhysicalPagesView.c)
 *     MiAssembleLargePagePfnList @ 0x1408996D4 (MiAssembleLargePagePfnList.c)
 *     MiHotAddPartitionMemory @ 0x14089C880 (MiHotAddPartitionMemory.c)
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140A1630C (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1400741F8 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // cl
  char v10; // al
  _BYTE *v11; // rsi
  unsigned __int8 v12; // bp
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  bool v15; // zf
  char v16; // al
  _QWORD *v17; // r11
  unsigned __int64 v18; // r9
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 v21; // r11
  __int64 v22; // rcx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r14
  char v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // r10
  unsigned __int64 v28; // r8
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  char v33; // r9
  unsigned __int8 v34; // cl

  v2 = a2[1];
  v4 = *a2;
  v5 = v2;
  if ( *a2 )
    v5 = *a2;
  v7 = 0LL;
  if ( v4 )
    v7 = a2[1];
  if ( !v7 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 )
    {
      if ( *(unsigned __int64 **)(v5 + 16) != a2 )
        goto LABEL_76;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_14;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_14;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_76:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v30 = *(_QWORD **)(v4 + 8);
    v19 = 0;
    v18 = *a2;
    v8 = *a2;
    if ( v30 )
    {
      v19 = 1;
      do
      {
        v8 = v18;
        v18 = (unsigned __int64)v30;
        v30 = (_QWORD *)v30[1];
      }
      while ( v30 );
    }
    v20 = *(_QWORD *)v18;
  }
  else
  {
    v17 = *(_QWORD **)v2;
    v18 = a2[1];
    v8 = v18;
    v19 = 1;
    if ( *(_QWORD *)v2 )
    {
      v19 = 0;
      do
      {
        v8 = v18;
        v18 = (unsigned __int64)v17;
        v17 = (_QWORD *)*v17;
      }
      while ( v17 );
    }
    v20 = *(_QWORD *)(v18 + 8);
  }
  *(_QWORD *)v18 = v4;
  *(_QWORD *)(v18 + 8) = v2;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v4 + 16) = v18 | v21 & 3;
  v22 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v2 + 16) = v18 | v22 & 3;
  if ( (*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_76;
  *(_QWORD *)(v8 + 8LL * v19) = v20;
  if ( v20 )
  {
    if ( *(_QWORD *)(v20 + 16) != v18 )
      goto LABEL_76;
    *(_QWORD *)(v20 + 16) = v8;
  }
  *(_QWORD *)(v18 + 16) = a2[2];
  v9 = 3;
  if ( !v19 )
    v9 = 1;
  v23 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v23 )
  {
    if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v18;
      goto LABEL_14;
    }
    goto LABEL_76;
  }
  v31 = 0LL;
  if ( *(unsigned __int64 **)(v23 + 8) == a2 )
    v31 = 8LL;
  if ( *(unsigned __int64 **)(v31 + v23) != a2 )
    goto LABEL_76;
  *(_QWORD *)(v31 + v23) = v18;
  while ( 1 )
  {
LABEL_14:
    v10 = *(_BYTE *)(v8 + 16);
    v11 = (_BYTE *)(v8 + 16);
    v12 = v10 & 3;
    if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v7) = v10 & 0xFC;
      *v11 = v7;
      v13 = *(_QWORD *)v11;
      goto LABEL_18;
    }
    if ( !v12 )
    {
      LOBYTE(v7) = v9 | v10 & 0xFC;
      *(_BYTE *)(v8 + 16) = v7;
      return v7;
    }
    v13 = *(_QWORD *)v11;
    v24 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v24 = *(_QWORD *)(v8 + 8);
    v25 = *(_BYTE *)(v24 + 16) & 3;
    if ( v25 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = RtlpTreeDoubleRotateNodes(a1, v8, v24, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v33 = *(_BYTE *)(v24 + 16) & 0xFC;
    *(_BYTE *)(v24 + 16) = v33;
    v34 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v34 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
      *v11 ^= v7;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v34 ^ 0xFE) & 3) )
        *(_BYTE *)(v24 + 16) = v12 | v33;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
LABEL_18:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v7;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v16 = 3;
    v8 = v14;
    if ( !v15 )
      v16 = 1;
    v9 = v16;
  }
  if ( (*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_76;
  v26 = 0LL;
  if ( v9 == 1 )
    v26 = 8LL;
  v27 = (_QWORD *)(v26 + v8);
  if ( *(_QWORD *)(v26 + v8) != v24 )
    goto LABEL_76;
  v28 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_QWORD *)(v28 + 8) == v8 )
    {
      *(_QWORD *)(v28 + 8) = v24;
    }
    else
    {
      if ( *(_QWORD *)v28 != v8 )
        goto LABEL_76;
      *(_QWORD *)v28 = v24;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_76;
    *a1 = v24;
  }
  *(_QWORD *)(v24 + 16) = v28 | *(_DWORD *)(v24 + 16) & 3;
  v7 = 0LL;
  if ( v9 != 1 )
    v7 = 8LL;
  v29 = *(_QWORD *)(v7 + v24);
  if ( v29 )
  {
    v32 = *(_QWORD *)(v29 + 16);
    if ( (v32 & 0xFFFFFFFFFFFFFFFCuLL) != v24 )
      goto LABEL_76;
    *(_QWORD *)(v29 + 16) = v8 | v32 & 3;
  }
  *v27 = v29;
  *(_QWORD *)(v7 + v24) = v8;
  *(_QWORD *)v11 = v24 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v24 + 16) & 0xFC;
  if ( v25 )
  {
    *(_BYTE *)(v24 + 16) = v7;
    v8 = v24;
    *v11 &= 0xFCu;
    goto LABEL_18;
  }
  *(_BYTE *)(v24 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
