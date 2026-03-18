/*
 * XREFs of MiRemoveMappedPtes @ 0x14005E8F0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MiAppendWsleCluster @ 0x14005ED10 (MiAppendWsleCluster.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x140071720 (MiRemoveViewsFromSection.c)
 *     MiLocateSubsectionNode @ 0x140073710 (MiLocateSubsectionNode.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     MiTryDeleteTransitionPte @ 0x1400BFB14 (MiTryDeleteTransitionPte.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 */

unsigned __int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // r14
  ULONG_PTR *v12; // rax
  __int64 v13; // rbx
  unsigned __int8 v14; // bp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  ULONG_PTR v20; // r14
  int v21; // eax
  __int64 v22; // rbp
  BOOL v23; // edi
  KIRQL v24; // bl
  unsigned __int64 result; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r9
  __int64 SubsectionNode; // rax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [rsp+28h] [rbp-90h]
  ULONG_PTR *v37; // [rsp+30h] [rbp-88h]
  __int64 v38; // [rsp+38h] [rbp-80h] BYREF
  __int64 v39; // [rsp+40h] [rbp-78h]
  _BYTE v40[112]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+18h]
  __int64 *BugCheckParameter2; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 88);
  v5 = 0LL;
  BugCheckParameter2 = *(__int64 **)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 32) >> 12;
  v42 = 0LL;
  v8 = *(unsigned __int16 *)(a2 + 174);
  v39 = *BugCheckParameter2;
  v7 = v39;
  v36 = *(_QWORD *)(qword_140465E88 + 8 * v8);
  v9 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v40, 0, 0x20uLL);
  v10 = *(_DWORD *)(v39 + 56);
  v11 = 0LL;
  if ( (v10 & 0x400) != 0 )
    v12 = &MiSystemPartition;
  else
    v12 = *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(v39 + 60) & 0x3FF));
  v37 = v12;
  if ( (v10 & 0x420) != 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = (__int64 *)MiOffsetToProtos(v39, v13, &v38);
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v7, v13 + (v6 << 12) - 1, 0LL);
    v20 = (ULONG_PTR)BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v19 = 0LL;
    goto LABEL_23;
  }
  v14 = MiLockWorkingSetShared(a2);
  if ( !v6 )
    goto LABEL_20;
  v15 = 0LL;
  do
  {
    if ( !v11 || (v9 & 0xFFF) == 0 )
    {
      v15 += MiTerminateWsleCluster((__int64)v40);
      if ( v11 )
        MiUnlockPageTableInternal(a2);
      v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v11, 0LL, v27);
    }
    v16 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v30 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
        v31 = v16 | 0x20;
        if ( (v30 & 0x20) == 0 )
          v31 = *(_QWORD *)v9;
        v16 = v31;
        if ( (v30 & 0x42) != 0 )
          v16 = v31 | 0x42;
      }
    }
    if ( !v16 )
      goto LABEL_17;
    if ( (v16 & 1) != 0 )
    {
      if ( dword_140466068 )
        MI_WSLE_LOG_ACCESS(a2, (_BYTE *)v9);
      MiAppendWsleCluster(v40, a2, v9);
      goto LABEL_17;
    }
    if ( (v16 & 0x400) != 0 )
    {
      if ( MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow(v18) )
        {
          if ( !HIBYTE(word_1404658EC) && (v17 & 1) != 0 )
            v17 |= v32;
          goto LABEL_65;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v17 & 1) != 0 )
        {
          v17 |= v32;
        }
      }
    }
    else if ( (v16 & 0x800) != 0 )
    {
      v33 = MiTryDeleteTransitionPte(v9);
      if ( v33 == 1 )
        continue;
      if ( v33 == 3 )
        ++v15;
      if ( !MiPteInShadowRange(v9) )
        goto LABEL_16;
      if ( (unsigned int)MiPteHasShadow(v34) )
      {
        if ( !HIBYTE(word_1404658EC) && (v17 & 1) != 0 )
          goto LABEL_77;
        goto LABEL_65;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v17 & 1) != 0 )
      {
        goto LABEL_89;
      }
    }
    else
    {
      MiReleasePageFileSpace(v36, v16, 1LL);
      if ( MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow(v35) )
        {
          if ( !HIBYTE(word_1404658EC) && (v17 & 1) != 0 )
LABEL_77:
            v17 |= 0x8000000000000000uLL;
LABEL_65:
          *(_QWORD *)v9 = v17;
          MiWritePteShadow(v9, v17);
          goto LABEL_17;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v17 & 1) != 0 )
        {
LABEL_89:
          v17 |= 0x8000000000000000uLL;
        }
      }
    }
LABEL_16:
    *(_QWORD *)v9 = v17;
LABEL_17:
    v9 += 8LL;
    --v6;
    if ( (v9 & 0x78) == 0
      && (MiWorkingSetIsContended(a2) || (unsigned int)MiPageTableLockIsContended(a2, v11) || KeShouldYieldProcessor()) )
    {
      v15 += MiTerminateWsleCluster((__int64)v40);
      MiUnlockPageTableInternal(a2);
      MiUnlockWorkingSetShared(a2, v14);
      v11 = 0LL;
      MiLockWorkingSetShared(a2);
    }
  }
  while ( v6 );
  v7 = v39;
  v42 = v15;
LABEL_20:
  v19 = MiTerminateWsleCluster((__int64)v40) + v42;
  if ( v11 )
    MiUnlockPageTableInternal(a2);
  MiUnlockWorkingSetShared(a2, v14);
  v20 = (ULONG_PTR)BugCheckParameter2;
LABEL_23:
  v21 = *(_DWORD *)(v7 + 56);
  if ( (v21 & 0x20) != 0 || (v21 & 0x400) != 0 )
  {
    v22 = a1;
    v20 = 0LL;
    if ( (v21 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v7);
  }
  else
  {
    v22 = a1;
  }
  v23 = *(_QWORD *)(v7 + 64) != 0LL;
  v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
  if ( v20 )
    v5 = MiRemoveViewsFromSection(v20);
  --*(_QWORD *)(v7 + 48);
  --*(_QWORD *)(v7 + 40);
  result = MiCheckControlArea(v7, v24);
  v26 = *(_QWORD *)(v22 + 40);
  if ( v26 )
  {
    if ( v19 )
      v26 -= v19;
    if ( v26 )
      result = MiReturnCommit(v36, v26);
  }
  if ( v5 )
    return MiReturnCrossPartitionSectionCharges(v37, v23, v5);
  return result;
}
