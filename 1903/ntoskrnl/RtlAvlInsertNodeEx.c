/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140072C40
 * Callers:
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     MiInsertPrivateVad @ 0x1400712D0 (MiInsertPrivateVad.c)
 *     MiBeginPageAccessor @ 0x1400728A0 (MiBeginPageAccessor.c)
 *     MiGetWsAndInsertVad @ 0x1400729C0 (MiGetWsAndInsertVad.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertSubsectionNode @ 0x1400E094C (MiInsertSubsectionNode.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x14013873C (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14013C26C (MiFlowThroughInsertNode.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiCombiningInProgress @ 0x140143D14 (MiCombiningInProgress.c)
 *     MiProcessLoaderEntry @ 0x140155004 (MiProcessLoaderEntry.c)
 *     MiInsertVad @ 0x14015A7D0 (MiInsertVad.c)
 *     MiInsertMappingNode @ 0x140175100 (MiInsertMappingNode.c)
 *     MmManageFaultRange @ 0x140179D24 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x14017F614 (MiSessionInsertImage.c)
 *     MiUpdatePageFileList @ 0x140192DA4 (MiUpdatePageFileList.c)
 *     MiInsertSessionWorkingSet @ 0x1401BE954 (MiInsertSessionWorkingSet.c)
 *     MiAddMdlTracker @ 0x1402BF84C (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1402C0654 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiCreateKernelStackNode @ 0x1402C41FC (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402C4C54 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402E1A34 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x1402E4C28 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402E97D0 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402EA728 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x1402EB210 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140309A18 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14030A198 (PsLoadVsmEnclaveData.c)
 *     MiInsertSecureImageActivePatch @ 0x1405B0F28 (MiInsertSecureImageActivePatch.c)
 *     MiFinishCreateSection @ 0x1405D74C0 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x140608960 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x14064036C (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 *     MiAllocateEntireImageFileExtents @ 0x14088BC4C (MiAllocateEntireImageFileExtents.c)
 *     MiInsertHotPatchRecord @ 0x14088ED68 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x14088F1E8 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x140895FB0 (MiAweViewInserter.c)
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x140899CB0 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140A1630C (MiInitializeDriverPtes.c)
 *     MiCreateEnclaveRegions @ 0x140A198C8 (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1400741F8 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  bool v6; // r10
  _BYTE *v8; // r9
  char v9; // r8
  char v10; // cl
  char v11; // di
  _BOOL8 v12; // r9
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx

  LOBYTE(v4) = 0;
  a4[2] = a2;
  *a4 = 0LL;
  v5 = (unsigned __int64)a4;
  a4[1] = 0LL;
  v6 = a3;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  v8 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8LL * a3) = v5;
  v9 = *(_BYTE *)(a2 + 16);
  LOBYTE(v4) = 2 * v6;
  v10 = (-1 - 2 * v6) & 3;
  v11 = v9 & 3;
  if ( (v9 & 3) != 0 )
  {
LABEL_5:
    if ( v11 != v10 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v4;
    }
    if ( (*(_BYTE *)(v5 + 16) & 3) != v11 )
    {
      v4 = RtlpTreeDoubleRotateNodes(a1, a2, v5, v6);
      *(_BYTE *)(v17 + 16) &= 0xFCu;
      v18 = v4;
      LOBYTE(v4) = *(_BYTE *)(v5 + 16) & 0xFC;
      *(_BYTE *)(v5 + 16) = v4;
      if ( v11 == (*(_BYTE *)(v18 + 16) & 3) )
      {
        LOBYTE(v4) = (v11 ^ *(_BYTE *)(v17 + 16) ^ 0xFE) & 3;
        *(_BYTE *)(v17 + 16) ^= v4;
        *(_BYTE *)(v18 + 16) &= 0xFCu;
      }
      else
      {
        if ( v11 == ((*(_BYTE *)(v18 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v11 | v4;
          *(_BYTE *)(v5 + 16) = v4;
        }
        *(_BYTE *)(v18 + 16) &= 0xFCu;
      }
      return v4;
    }
    v12 = !v6;
    if ( (*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v13 = (unsigned __int64 *)(a2 + 8LL * v6);
      if ( *v13 == v5 )
      {
        v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 8) == a2 )
          {
            *(_QWORD *)(v14 + 8) = v5;
          }
          else
          {
            if ( *(_QWORD *)v14 != a2 )
              goto LABEL_28;
            *(_QWORD *)v14 = v5;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = v5;
        }
        v15 = (unsigned __int64 *)(v5 + 8 * v12);
        *(_QWORD *)(v5 + 16) = v14 | *(_DWORD *)(v5 + 16) & 3;
        v16 = *v15;
        if ( !*v15 )
        {
LABEL_13:
          *v13 = v16;
          *v15 = a2;
          v4 = v5 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v5 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v4;
        }
        v19 = *(_QWORD *)(v16 + 16);
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) == v5 )
        {
          *(_QWORD *)(v16 + 16) = a2 | v19 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    v5 = a2;
    *v8 = v10 | v9 & 0xFC;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v8 = (_BYTE *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 16);
    v6 = *(_QWORD *)a2 != v5;
    LOBYTE(v4) = 2 * v6;
    v10 = (-1 - 2 * v6) & 3;
    v11 = v9 & 3;
    if ( (v9 & 3) != 0 )
      goto LABEL_5;
  }
}
