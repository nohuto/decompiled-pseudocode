/*
 * XREFs of MiDeleteSubsectionPages @ 0x1400DC990
 * Callers:
 *     MiDeleteSegmentPages @ 0x1400DF264 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x14069CB90 (MiExtendSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiFreeLargePageMemory @ 0x140146738 (MiFreeLargePageMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 *BugCheckParameter2, _QWORD *a2)
{
  __int64 *v2; // r13
  ULONG_PTR v3; // rbp
  _QWORD *v4; // rbx
  char *v5; // rcx
  unsigned __int8 v6; // dl
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  ULONG_PTR DeepFreezeStartTime; // r8
  __int64 v14; // r15
  int v15; // esi
  unsigned __int64 v16; // r14
  char *v17; // r12
  unsigned __int64 v18; // rdi
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // rbp
  __int64 v25; // rcx
  ULONG_PTR v26; // rcx
  __int64 v27; // rsi
  KIRQL v28; // di
  PVOID v29; // r14
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v43; // rcx
  char v44; // [rsp+20h] [rbp-88h]
  BOOL v45; // [rsp+24h] [rbp-84h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+30h] [rbp-78h]
  unsigned __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h]
  __int64 v50; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  unsigned __int8 v54; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v55; // [rsp+C8h] [rbp+20h] BYREF

  v2 = (__int64 *)*BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = a2;
  v5 = (char *)BugCheckParameter2[1];
  v6 = 17;
  v7 = *((_DWORD *)v2 + 14);
  v8 = *((_WORD *)v2 + 30) & 0x3FF;
  v54 = 17;
  v44 = v7;
  P = v5;
  v9 = *(_QWORD *)(qword_140466188 + 8 * v8);
  v10 = v2[8];
  v49 = v9;
  v11 = 0LL;
  v45 = v10 != 0;
  v12 = *v2;
  v55 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  DeepFreezeStartTime = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v14 = -1LL;
  v15 = *(_DWORD *)(v12 + 12);
  if ( !v5 )
    goto LABEL_20;
  v16 = (unsigned __int64)v5;
  v17 = &v5[8 * *(unsigned int *)(v3 + 44)];
  if ( v5 >= v17 )
    goto LABEL_20;
  v18 = v55;
  v19 = 0xFFFFFFFFFLL;
  v20 = 0xFFFFFA8000000028uLL;
  v21 = 0xFFFFFA8000000000uLL;
  while ( 2 )
  {
    if ( (v16 & 0xFFF) != 0 )
    {
      if ( v6 != 17 )
        goto LABEL_7;
    }
    else if ( v6 != 17 )
    {
      MiUnlockProtoPoolPage(DeepFreezeStartTime, v6);
      if ( (v15 & 0x1000) != 0 )
      {
        v35 = MiFreeLargePageMemory(v14 & 0xFFFFFFFFFFFFFE00uLL);
        v14 = -1LL;
        *v4 += 512 - v35;
      }
    }
    while ( 1 )
    {
      if ( (v2[7] & 0x20) == 0 )
      {
        v34 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v34 & 1) == 0 && (v34 & 0x400) != 0 && (v34 & 2) != 0 )
        {
          v26 = 0LL;
          v6 = 17;
          v54 = 17;
          v47 = 0LL;
          v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          goto LABEL_15;
        }
      }
      v47 = MiLockProtoPoolPage(v16, &v54);
      if ( v47 )
        break;
      MmAccessFault(2uLL, v16, 0, 0LL);
    }
    v19 = 0xFFFFFFFFFLL;
    v21 = 0xFFFFFA8000000000uLL;
    v20 = 0xFFFFFA8000000028uLL;
    while ( 1 )
    {
LABEL_7:
      while ( 1 )
      {
        v22 = *(_QWORD *)v16;
        v23 = *(_QWORD *)v16;
        if ( (*(_QWORD *)v16 & 1) == 0 )
          break;
LABEL_34:
        v31 = 48 * (v19 & (v23 >> 12));
        if ( (*(_QWORD *)(v31 + v20) & 0x20000000000000LL) != 0 )
        {
          v24 = v31 + v21;
          LODWORD(v55) = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + v21 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v55);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
            v19 = 0xFFFFFFFFFLL;
            v21 = 0xFFFFFA8000000000uLL;
            v20 = 0xFFFFFA8000000028uLL;
          }
          if ( *(_QWORD *)v16 == v22 )
            goto LABEL_10;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v16 & 0xC00LL) != 0x800 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v16) )
      {
        v23 = v22;
        if ( qword_140465B00 && (v22 & 0x10) == 0 )
          v23 = v22 & ~qword_140465B00;
        goto LABEL_34;
      }
    }
    v24 = 0LL;
LABEL_10:
    v25 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v36 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v16 >> 3) & 0x1FF));
        DeepFreezeStartTime = v25 | 0x20;
        if ( (v36 & 0x20) == 0 )
          DeepFreezeStartTime = *(_QWORD *)v16;
        v25 = DeepFreezeStartTime;
        if ( (v36 & 0x42) != 0 )
          v25 = DeepFreezeStartTime | 0x42;
      }
    }
    v50 = v25;
    if ( (v25 & 1) != 0 )
    {
      v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50);
      v14 = v38 & (v37 >> 12);
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow(v40) )
        {
          if ( !HIBYTE(word_140465BEC) && (v39 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
          *(_QWORD *)v16 = v39;
          MiWritePteShadow(v16, v39);
          goto LABEL_95;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v39 & 1) != 0 )
        {
          v39 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v39;
LABEL_95:
      *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_13;
    }
    if ( (v25 & 0x400) != 0 )
      goto LABEL_13;
    if ( (v25 & 0x800) == 0 )
    {
      v48 = v25;
      if ( (v25 & 4) != 0 || (v25 & 2) != 0 )
        v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48);
      else
        v32 = 0LL;
      v48 = v32;
      if ( v32 )
        MiReleasePageFileInfo(v49, v32, 0);
      goto LABEL_13;
    }
    v33 = v25;
    if ( qword_140465B00 && (v25 & 0x10) == 0 )
      v33 = v25 & ~qword_140465B00;
    v14 = v19 & (v33 >> 12);
    if ( (*(_QWORD *)(v24 + 16) & 0x400LL) != 0 && (v2[7] & 0x20) == 0 )
    {
      v41 = *(_BYTE *)(v24 + 34);
      if ( (v41 & 0x10) != 0 || (v41 & 8) != 0 )
        ++v46;
    }
    if ( v18
      || (v14 & 0xF) != 0
      || (__int64)((unsigned __int64)&v17[-v16] & 0xFFFFFFFFFFFFFFF8uLL) < 128
      || ((4096 - (v16 & 0xFFF)) & 0xFFFFFFF8) < 0x80
      || !MiDeleteClusterSection(v24, v16) )
    {
      LOBYTE(DeepFreezeStartTime) = 17;
      if ( (unsigned int)MiDeleteTransitionPte(v16, v24, DeepFreezeStartTime, 1) == 3 )
        ++*a2;
LABEL_13:
      v16 += 8LL;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 += 128LL;
    }
    v4 = a2;
    v26 = v47;
    v6 = v54;
LABEL_15:
    v21 = 0xFFFFFA8000000000uLL;
    v19 = 0xFFFFFFFFFLL;
    v20 = 0xFFFFFA8000000028uLL;
    if ( v16 < (unsigned __int64)v17 )
    {
      DeepFreezeStartTime = v47;
      continue;
    }
    break;
  }
  LOBYTE(v7) = v44;
  if ( v6 != 17 )
  {
    MiUnlockProtoPoolPage(v26, v6);
    if ( (v15 & 0x1000) != 0 )
      *v4 += 512 - MiFreeLargePageMemory(v14 & 0xFFFFFFFFFFFFFE00uLL);
  }
  v3 = (ULONG_PTR)BugCheckParameter2;
  v11 = v46;
LABEL_20:
  if ( (v7 & 0xA0) != 0x80 )
    return v11;
  v27 = MiDecrementSubsectionViewCount((_QWORD *)v3, 0LL, DeepFreezeStartTime);
  v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
  if ( *(_DWORD *)(v3 + 104) )
  {
    do
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v28);
      _mm_pause();
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
    }
    while ( *((_DWORD *)BugCheckParameter2 + 26) );
    v3 = (ULONG_PTR)BugCheckParameter2;
  }
  v29 = P;
  if ( P )
  {
    MiUpdateSystemProtoPtesTree(v3 + 112, 0LL);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
  {
    v43 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v43);
  }
  __writecr8(v28);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v27 )
    MiReturnCrossPartitionSectionCharges(v49, v45, v27);
  return v46;
}
