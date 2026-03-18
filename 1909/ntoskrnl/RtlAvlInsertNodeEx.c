/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140072EB0
 * Callers:
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiInsertPrivateVad @ 0x140071540 (MiInsertPrivateVad.c)
 *     MiBeginPageAccessor @ 0x140072B10 (MiBeginPageAccessor.c)
 *     MiGetWsAndInsertVad @ 0x140072C30 (MiGetWsAndInsertVad.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertSubsectionNode @ 0x1400C07CC (MiInsertSubsectionNode.c)
 *     MiDereferenceIoPages @ 0x1400F55EC (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x1400F6770 (MiReferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x140138DD8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14013C88C (MiFlowThroughInsertNode.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiCombiningInProgress @ 0x140144254 (MiCombiningInProgress.c)
 *     MiProcessLoaderEntry @ 0x1401556A4 (MiProcessLoaderEntry.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 *     MiInsertMappingNode @ 0x140175830 (MiInsertMappingNode.c)
 *     MmManageFaultRange @ 0x14017A414 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiUpdatePageFileList @ 0x140193584 (MiUpdatePageFileList.c)
 *     MiInsertSessionWorkingSet @ 0x1401BF444 (MiInsertSessionWorkingSet.c)
 *     MiAddMdlTracker @ 0x1402BF5AC (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1402C03B4 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiCreateKernelStackNode @ 0x1402C3F5C (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402C49B4 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402E1794 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x1402E4988 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402E9530 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402EA488 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x1402EAF70 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1403094C8 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140309C48 (PsLoadVsmEnclaveData.c)
 *     MiInsertSecureImageActivePatch @ 0x1405B0D64 (MiInsertSecureImageActivePatch.c)
 *     MiFinishCreateSection @ 0x1405D7C80 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x1406F56E0 (MiProcessCrcList.c)
 *     MiAllocateEntireImageFileExtents @ 0x14088B46C (MiAllocateEntireImageFileExtents.c)
 *     MiInsertHotPatchRecord @ 0x14088E588 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x14088EA08 (MiLoadHotPatchForUserSid.c)
 *     MiAweViewInserter @ 0x1408957D0 (MiAweViewInserter.c)
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408994D0 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x1408CB3F0 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140A167D4 (MiInitializeDriverPtes.c)
 *     MiCreateEnclaveRegions @ 0x140A19A58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140074468 (RtlpTreeDoubleRotateNodes.c)
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
