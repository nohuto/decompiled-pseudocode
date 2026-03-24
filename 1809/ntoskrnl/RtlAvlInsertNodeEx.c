/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140064B40
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiGetWsAndInsertVad @ 0x140063E20 (MiGetWsAndInsertVad.c)
 *     MiBeginPageAccessor @ 0x140064A20 (MiBeginPageAccessor.c)
 *     MiInsertPrivateVad @ 0x1400767F0 (MiInsertPrivateVad.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiInsertSubsectionNode @ 0x14009290C (MiInsertSubsectionNode.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140096060 (MiUpdateSystemProtoPtesTree.c)
 *     MiReferenceIoPages @ 0x1400E5FAC (MiReferenceIoPages.c)
 *     MiProcessLoaderEntry @ 0x1400F5BAC (MiProcessLoaderEntry.c)
 *     MiFlowThroughInsertNode @ 0x14010F5E0 (MiFlowThroughInsertNode.c)
 *     MiInsertVad @ 0x14011016C (MiInsertVad.c)
 *     MiDereferenceIoPages @ 0x140123634 (MiDereferenceIoPages.c)
 *     MiUpdatePerSessionProto @ 0x140136EE8 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x14013C3DC (MiCombiningInProgress.c)
 *     MiInsertMappingNode @ 0x14015ED68 (MiInsertMappingNode.c)
 *     MmManageFaultRange @ 0x1401705A4 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x14017602C (MiSessionInsertImage.c)
 *     MiZeroPageThread @ 0x140179200 (MiZeroPageThread.c)
 *     MiUpdatePageFileList @ 0x140188158 (MiUpdatePageFileList.c)
 *     MiInsertSessionWorkingSet @ 0x1401B4F04 (MiInsertSessionWorkingSet.c)
 *     MiAddMdlTracker @ 0x1402A7FDC (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1402A8DA8 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiCreateKernelStackNode @ 0x1402AB4F4 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402ABA0C (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402C77B0 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x1402CA8DC (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x1402D0118 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0808 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402D1994 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402D1BA4 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x1402D2410 (MiMergePageNodes.c)
 *     MiFinishCreateSection @ 0x1405DE0B0 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x1405F08A0 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x14061F320 (MiProcessCrcList.c)
 *     MiAweViewInserter @ 0x14084F634 (MiAweViewInserter.c)
 *     MiInsertHotPatchRecord @ 0x140855890 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C38 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateLargeZeroPages @ 0x14085C8E0 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x14085D180 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x14088D580 (PsCallEnclave.c)
 *     MiCreateEnclaveRegions @ 0x1409BA34C (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1401196C0 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _BYTE *v7; // r11
  char v8; // r9
  char v9; // cl
  char v10; // di
  unsigned int v11; // r9d
  __int64 v12; // r8
  _QWORD *v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10

  LOBYTE(v4) = 0;
  a4[2] = a2;
  *a4 = 0LL;
  v5 = (unsigned __int64)a4;
  a4[1] = 0LL;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  v7 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  v8 = *(_BYTE *)(a2 + 16);
  LOBYTE(v4) = 2 * a3;
  v9 = (-1 - 2 * a3) & 3;
  v10 = v8 & 3;
  if ( (v8 & 3) != 0 )
  {
LABEL_6:
    if ( v10 != v9 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v4;
    }
    if ( (*(_BYTE *)(v5 + 16) & 3) != v10 )
    {
      v4 = RtlpTreeDoubleRotateNodes(a1, a2, v5, a3);
      *(_BYTE *)(v16 + 16) &= 0xFCu;
      v17 = v4;
      LOBYTE(v4) = *(_BYTE *)(v5 + 16) & 0xFC;
      *(_BYTE *)(v5 + 16) = v4;
      if ( v10 == (*(_BYTE *)(v17 + 16) & 3) )
      {
        LOBYTE(v4) = (v10 ^ *(_BYTE *)(v16 + 16) ^ 0xFE) & 3;
        *(_BYTE *)(v16 + 16) ^= v4;
        *(_BYTE *)(v17 + 16) &= 0xFCu;
      }
      else
      {
        if ( v10 == ((*(_BYTE *)(v17 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v10 | v4;
          *(_BYTE *)(v5 + 16) = v4;
        }
        *(_BYTE *)(v17 + 16) &= 0xFCu;
      }
      return v4;
    }
    v11 = !a3;
    if ( (*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v12 = v11;
      v13 = (_QWORD *)(a2 + 8 * (v11 ^ 1LL));
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
              goto LABEL_29;
            *(_QWORD *)v14 = v5;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_29;
          *a1 = v5;
        }
        *(_QWORD *)(v5 + 16) = v14 | *(_DWORD *)(v5 + 16) & 3;
        v15 = *(_QWORD *)(v5 + 8 * v12);
        if ( !v15 )
        {
LABEL_16:
          *v13 = v15;
          *(_QWORD *)(v5 + 8 * v12) = a2;
          v4 = v5 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v5 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v4;
        }
        v18 = *(_QWORD *)(v15 + 16);
        if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) == v5 )
        {
          *(_QWORD *)(v15 + 16) = a2 | v18 & 3;
          goto LABEL_16;
        }
      }
    }
LABEL_29:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    v5 = a2;
    *v7 = v9 | v8 & 0xFC;
    a2 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v7 = (_BYTE *)(a2 + 16);
    v8 = *(_BYTE *)(a2 + 16);
    a3 = *(_QWORD *)a2 != v5;
    LOBYTE(v4) = 2 * a3;
    v9 = (-1 - 2 * a3) & 3;
    v10 = v8 & 3;
    if ( (v8 & 3) != 0 )
      goto LABEL_6;
  }
}
