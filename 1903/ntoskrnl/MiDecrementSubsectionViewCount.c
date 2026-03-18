/*
 * XREFs of MiDecrementSubsectionViewCount @ 0x1400716A0
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x1400714B0 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MiAppendSubsectionChain @ 0x1400EAEF8 (MiAppendSubsectionChain.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiExtendSection @ 0x14069CB90 (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x1400724E0 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400A9158 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402DE8F0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402DEC54 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiDecrementSubsectionViewCount(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  ULONG_PTR v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int16 v8; // dx
  _KPROCESS *Process; // rax
  ULONG_PTR *v10; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64LL)
    && (*(_DWORD *)(v3 + 56) & 0x20) == 0
    && (*((_BYTE *)BugCheckParameter2 + 34) & 1) == 0
    && !BugCheckParameter2[12] )
  {
    KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  v5 = 0LL;
  if ( (a2 & 4) == 0
    && (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2, a2, a3, v3) )
  {
    if ( (v8 & 0x10) != 0 )
    {
      v10 = 0LL;
    }
    else if ( (v8 & 0x80u) != 0 )
    {
      v10 = &MiSystemPartition;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = (v8 & 0x100) != 0
          ? *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[1] + 430))
          : *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
    }
    if ( v10 != *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) )
    {
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v4);
      v12 = MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences);
      v13 = *(_DWORD *)(v12 + 48) & 0x3FFFFFFF;
      if ( v13 != 0x3FFFFFFF )
      {
        MiUpdateSubsectionCrossPartitionRefs(v4, (unsigned int)(v13 - 1));
        if ( v13 == 1 )
          v5 = MiComputeCrossPartitionSectionCharges(v14);
      }
    }
  }
  if ( *(_QWORD *)(v3 + 64) && (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (*(_BYTE *)(v4 + 34) & 1) == 0 )
  {
    v6 = *(_QWORD *)(v4 + 96);
    if ( !v6 )
      KeBugCheckEx(0x1Au, 0x42001uLL, v4, 0LL, 0LL);
    *(_QWORD *)(v4 + 96) = v6 - 1;
  }
  return v5;
}
