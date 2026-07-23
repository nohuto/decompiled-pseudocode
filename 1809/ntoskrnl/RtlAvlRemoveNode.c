/*
 * XREFs of RtlAvlRemoveNode @ 0x140037250
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiRemoveUnmappedIoNode @ 0x1400E5A50 (MiRemoveUnmappedIoNode.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F0BCC (MiDeleteStaleCacheMaps.c)
 *     MiProcessLoaderEntry @ 0x1400F5C2C (MiProcessLoaderEntry.c)
 *     MiRemoveFaultNode @ 0x1400F9744 (MiRemoveFaultNode.c)
 *     MiFreeCombineBlock @ 0x14011FB14 (MiFreeCombineBlock.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x140136FE8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughRemoveNode @ 0x14013B830 (MiFlowThroughRemoveNode.c)
 *     MiCombiningInProgress @ 0x14013C4DC (MiCombiningInProgress.c)
 *     MiSessionRemoveImage @ 0x140158200 (MiSessionRemoveImage.c)
 *     MiRemoveMappingNode @ 0x14015F9A4 (MiRemoveMappingNode.c)
 *     MmManageFaultRange @ 0x1401706A4 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x140188298 (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x1402A8458 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1402A8F98 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiDeleteKernelStackNode @ 0x1402AB7F4 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402ABBFC (MiMakeIoRangePermanent.c)
 *     MiUnlinkSessionList @ 0x1402B5544 (MiUnlinkSessionList.c)
 *     MiRemoveVad @ 0x1402C5310 (MiRemoveVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402C79A0 (MiReplaceSystemProtoPtesNode.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0FD8 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402D1B84 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     MiSectionDelete @ 0x1405F1440 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AC968 (ExpWnfDeleteNameInstance.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408513A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiDeleteHotPatchRecord @ 0x140855E2C (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x140856AF0 (MiInsertHotPatchRecord.c)
 *     MiUnloadHotPatchForUserSid @ 0x140859510 (MiUnloadHotPatchForUserSid.c)
 *     MiAssembleLargePagePfnList @ 0x14085DE5C (MiAssembleLargePagePfnList.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140119730 (RtlpTreeDoubleRotateNodes.c)
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
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  char v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // r11
  unsigned __int64 v29; // r8
  __int64 v30; // r8
  char v31; // r9
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rbp

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
        goto LABEL_77;
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
LABEL_77:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v33 = *(_QWORD **)(v4 + 8);
    v19 = 0;
    v18 = *a2;
    v8 = *a2;
    if ( v33 )
    {
      v19 = 1;
      do
      {
        v8 = v18;
        v18 = (unsigned __int64)v33;
        v33 = (_QWORD *)v33[1];
      }
      while ( v33 );
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
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = v18 | v21 & 3;
  v22 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v2 + 16) = v18 | v22 & 3;
  if ( (*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  *(_QWORD *)(v8 + 8LL * v19) = v20;
  if ( v20 )
  {
    if ( *(_QWORD *)(v20 + 16) != v18 )
      goto LABEL_77;
    *(_QWORD *)(v20 + 16) = v8;
  }
  *(_QWORD *)(v18 + 16) = a2[2];
  v9 = 3;
  if ( !v19 )
    v9 = 1;
  v23 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v23 )
  {
    v24 = 0LL;
    if ( *(unsigned __int64 **)(v23 + 8) == a2 )
      v24 = 8LL;
    if ( *(unsigned __int64 **)(v24 + v23) == a2 )
    {
      *(_QWORD *)(v24 + v23) = v18;
      goto LABEL_14;
    }
    goto LABEL_77;
  }
  if ( (unsigned __int64 *)*a1 != a2 )
    goto LABEL_77;
  *a1 = v18;
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
    v25 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v25 = *(_QWORD *)(v8 + 8);
    v26 = *(_BYTE *)(v25 + 16) & 3;
    if ( v26 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = RtlpTreeDoubleRotateNodes(a1, v8, v25, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v31 = *(_BYTE *)(v25 + 16) & 0xFC;
    *(_BYTE *)(v25 + 16) = v31;
    v32 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v32 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
      *v11 ^= v7;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v32 ^ 0xFE) & 3) )
        *(_BYTE *)(v25 + 16) = v12 | v31;
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
  if ( (*(_QWORD *)(v25 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  v27 = 0LL;
  if ( v9 == 1 )
    v27 = 8LL;
  v28 = (_QWORD *)(v27 + v8);
  if ( *(_QWORD *)(v27 + v8) != v25 )
    goto LABEL_77;
  v29 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_QWORD *)(v29 + 8) == v8 )
    {
      *(_QWORD *)(v29 + 8) = v25;
    }
    else
    {
      if ( *(_QWORD *)v29 != v8 )
        goto LABEL_77;
      *(_QWORD *)v29 = v25;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_77;
    *a1 = v25;
  }
  *(_QWORD *)(v25 + 16) = v29 | *(_DWORD *)(v25 + 16) & 3;
  v7 = 0LL;
  if ( v9 != 1 )
    v7 = 8LL;
  v30 = *(_QWORD *)(v7 + v25);
  if ( v30 )
  {
    v34 = *(_QWORD *)(v30 + 16);
    if ( (v34 & 0xFFFFFFFFFFFFFFFCuLL) != v25 )
      goto LABEL_77;
    *(_QWORD *)(v30 + 16) = v8 | v34 & 3;
  }
  *v28 = v30;
  *(_QWORD *)(v7 + v25) = v8;
  *(_QWORD *)v11 = v25 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v25 + 16) & 0xFC;
  if ( v26 )
  {
    *(_BYTE *)(v25 + 16) = v7;
    v8 = v25;
    *v11 &= 0xFCu;
    goto LABEL_18;
  }
  *(_BYTE *)(v25 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
