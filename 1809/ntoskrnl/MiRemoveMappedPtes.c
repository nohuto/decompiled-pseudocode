/*
 * XREFs of MiRemoveMappedPtes @ 0x1400855C0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSection @ 0x140079360 (MiRemoveViewsFromSection.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiAppendWsleCluster @ 0x1400859EC (MiAppendWsleCluster.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     MiTryDeleteTransitionPte @ 0x140094E6C (MiTryDeleteTransitionPte.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // eax
  unsigned __int64 v4; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  int v11; // ecx
  unsigned __int64 v12; // r14
  ULONG_PTR *v13; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // r9
  __int64 v18; // rbx
  unsigned __int8 v19; // bp
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rbp
  ULONG_PTR v23; // r14
  int v24; // eax
  __int64 v25; // rsi
  BOOL v26; // edi
  KIRQL v27; // bl
  __int64 result; // rax
  unsigned __int64 v29; // rdx
  _QWORD *SubsectionNode; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 *BugCheckParameter2; // [rsp+20h] [rbp-98h]
  unsigned __int64 v39; // [rsp+28h] [rbp-90h]
  struct _KEVENT *v40; // [rsp+30h] [rbp-88h]
  ULONG_PTR *v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h] BYREF
  __int64 v43; // [rsp+48h] [rbp-70h]
  _QWORD v44[13]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v46; // [rsp+C8h] [rbp+10h]
  unsigned int v47; // [rsp+D0h] [rbp+18h]
  __int64 v48; // [rsp+D8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 4;
  v4 = *(_QWORD *)(a1 + 88);
  if ( (v2 & 4) != 0 )
    v3 = 24;
  v47 = v3;
  v6 = 0LL;
  BugCheckParameter2 = *(__int64 **)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 32) >> 12;
  v48 = 0LL;
  v9 = *(unsigned __int16 *)(a2 + 174);
  v43 = *BugCheckParameter2;
  v8 = v43;
  v40 = *(struct _KEVENT **)(qword_14043B808 + 8 * v9);
  v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  memset(v44, 0, 0x20uLL);
  v11 = *(_DWORD *)(v43 + 56);
  v12 = 0LL;
  if ( (v11 & 0x400) != 0 )
    v13 = &MiSystemPartition;
  else
    v13 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(v43 + 60) & 0x3FF));
  v41 = v13;
  if ( (v11 & 0x420) != 0 )
  {
    v14 = 0LL;
    v39 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24) << 12;
    BugCheckParameter2 = (__int64 *)MiOffsetToProtos(v43, v14, &v42);
    v39 = v7 + v42;
  }
  if ( (v2 & 0x18) != 0x18 )
  {
    SubsectionNode = MiLocateSubsectionNode(v8, v14 + (v7 << 12) - 1, 0);
    v23 = (ULONG_PTR)BugCheckParameter2;
    MiDecrementLargeSubsections(BugCheckParameter2, SubsectionNode);
    v22 = 0LL;
    goto LABEL_26;
  }
  v15 = MiLockWorkingSetShared(a2);
  v46 = v15;
  v16 = v15;
  if ( !v7 )
    goto LABEL_23;
  v17 = 0x8000000000000000uLL;
  v18 = 0LL;
  v19 = v15;
  do
  {
    if ( !v12 || (v10 & 0xFFF) == 0 )
    {
      v18 += MiTerminateWsleCluster(v44);
      if ( v12 )
        MiUnlockPageTableInternal(a2, v12);
      v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v12, 0);
      v17 = 0x8000000000000000uLL;
    }
    v20 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      v31 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 8 * ((v10 >> 3) & 0x1FF));
        v33 = v20 | 0x20;
        if ( (v32 & 0x20) == 0 )
          v33 = *(_QWORD *)v10;
        v20 = v33;
        if ( (v32 & 0x42) != 0 )
          v20 = v33 | 0x42;
      }
    }
    if ( !v20 )
      goto LABEL_20;
    if ( (v20 & 1) != 0 )
    {
      if ( dword_14043B9A8 )
        MI_WSLE_LOG_ACCESS(a2, v10);
      MiAppendWsleCluster(v44, a2, v10, v17);
      goto LABEL_20;
    }
    if ( (v20 & 0x400) != 0 )
    {
      v21 = ZeroPte;
      if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, ZeroPte) )
        {
          if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
            v21 |= v34;
          goto LABEL_68;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v21 & 1) != 0 )
        {
          v21 |= v34;
        }
      }
    }
    else if ( (v20 & 0x800) != 0 )
    {
      v35 = MiTryDeleteTransitionPte(v10);
      if ( v35 == 1 )
        goto LABEL_21;
      if ( v35 == 3 )
        ++v18;
      if ( !MiPteInShadowRange(v10) )
        goto LABEL_19;
      if ( (unsigned int)MiPteHasShadow(v36, v21) )
      {
        if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
          goto LABEL_80;
        goto LABEL_68;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v21 & 1) != 0 )
      {
        goto LABEL_92;
      }
    }
    else
    {
      MiReleasePageFileSpace(v40, v20);
      if ( MiPteInShadowRange(v10) )
      {
        if ( (unsigned int)MiPteHasShadow(v37, v21) )
        {
          if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
LABEL_80:
            v21 |= 0x8000000000000000uLL;
LABEL_68:
          *(_QWORD *)v10 = v21;
          MiWritePteShadow(v10);
          goto LABEL_20;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v21 & 1) != 0 )
        {
LABEL_92:
          v21 |= 0x8000000000000000uLL;
        }
      }
    }
LABEL_19:
    *(_QWORD *)v10 = v21;
LABEL_20:
    v10 += 8LL;
    --v7;
    if ( (v10 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(a2)
       || (unsigned int)MiPageTableLockIsContended(a2, v12)
       || KeShouldYieldProcessor()) )
    {
      v18 += MiTerminateWsleCluster(v44);
      MiUnlockPageTableInternal(a2, v12);
      MiUnlockWorkingSetShared(a2, v19);
      v12 = 0LL;
      MiLockWorkingSetShared(a2);
    }
LABEL_21:
    v17 = 0x8000000000000000uLL;
  }
  while ( v7 );
  v8 = v43;
  v48 = v18;
  v16 = v46;
LABEL_23:
  v22 = MiTerminateWsleCluster(v44) + v48;
  if ( v12 )
    MiUnlockPageTableInternal(a2, v12);
  MiUnlockWorkingSetShared(a2, v16);
  v23 = (ULONG_PTR)BugCheckParameter2;
LABEL_26:
  v24 = *(_DWORD *)(v8 + 56);
  if ( (v24 & 0x20) != 0 || (v24 & 0x400) != 0 )
  {
    v25 = a1;
    v23 = 0LL;
    if ( (v24 & 0x20) != 0 && (*(_BYTE *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v8);
  }
  else
  {
    v25 = a1;
  }
  v26 = *(_QWORD *)(v8 + 64) != 0LL;
  v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  if ( v23 )
    v6 = MiRemoveViewsFromSection(v23, v39, v47);
  --*(_QWORD *)(v8 + 48);
  --*(_QWORD *)(v8 + 40);
  result = MiCheckControlArea(v8, v27);
  v29 = *(_QWORD *)(v25 + 40);
  if ( v29 )
  {
    if ( v22 )
      v29 -= v22;
    if ( v29 )
      result = MiReturnCommit((__int64)v40, v29);
  }
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v41, v26, v6);
  return result;
}
