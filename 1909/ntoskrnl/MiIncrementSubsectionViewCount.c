/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x140072660
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiReferenceSubsection @ 0x140071D5C (MiReferenceSubsection.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiSetSubsectionBase @ 0x140089334 (MiSetSubsectionBase.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiPrepareSegmentForDeletion @ 0x1400BF684 (MiPrepareSegmentForDeletion.c)
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiRetainSubsection @ 0x14013426C (MiRetainSubsection.c)
 *     MiExtendSection @ 0x140625080 (MiExtendSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140072750 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1400979B0 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402DE9B4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(_QWORD *BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r9
  ULONG_PTR v3; // r10
  unsigned int v4; // r11d
  __int16 v7; // r8
  ULONG_PTR *v8; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v10; // edx
  char v11; // r8

  v2 = *BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = 2;
  if ( (a2 & 8) != 0
    && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*BugCheckParameter2, a2, (unsigned int)a2, v2) )
  {
    if ( (v7 & 0x80u) != 0 )
    {
      v8 = &MiSystemPartition;
    }
    else if ( (v7 & 0x100) != 0 )
    {
      v8 = *(ULONG_PTR **)(qword_140465E88
                         + 8LL
                         * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1]
                                               + 430));
    }
    else
    {
      v8 = (v7 & 0x10) != 0
         ? 0LL
         : *(ULONG_PTR **)(qword_140465E88
                         + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
    }
    if ( v8 != *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(v2 + 60) & 0x3FF)) )
    {
      if ( (((v7 & 0x200) == 0) & *(_BYTE *)(v2 + 62)) != 0 )
      {
        ++dword_140465E98;
        return 0LL;
      }
      SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v3);
      v10 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
      if ( v10 != 0x3FFFFFFF )
      {
        if ( !v10 && (v11 & 0x20) == 0 )
          return 1LL;
        MiUpdateSubsectionCrossPartitionRefs(v3, (unsigned int)(v10 + 1));
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) == 0
    && *(_QWORD *)(v2 + 64)
    && (*(_BYTE *)(v3 + 34) & 1) == 0
    && (*(_QWORD *)(v3 + 96))++ == -1LL )
  {
    KeBugCheckEx(0x1Au, 0x42000uLL, v3, 0LL, 0LL);
  }
  return v4;
}
