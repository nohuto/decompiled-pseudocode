/*
 * XREFs of MiDeleteSubsectionPages @ 0x140094EC0
 * Callers:
 *     MiDeleteSegmentPages @ 0x140094D78 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  struct _KEVENT *v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r12
  int v15; // esi
  unsigned __int64 v16; // r14
  char *v17; // r15
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r9
  __int64 v20; // r11
  unsigned __int64 v21; // r10
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // rbp
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 v31; // rsi
  KIRQL v32; // di
  PVOID v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-88h]
  char v46; // [rsp+28h] [rbp-80h]
  BOOL v47; // [rsp+2Ch] [rbp-7Ch]
  unsigned __int64 v48; // [rsp+30h] [rbp-78h] BYREF
  __int64 v49; // [rsp+38h] [rbp-70h]
  unsigned __int64 v50; // [rsp+40h] [rbp-68h]
  struct _KEVENT *v51; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  PVOID P; // [rsp+58h] [rbp-50h]
  unsigned __int8 v56; // [rsp+C0h] [rbp+18h] BYREF
  int v57; // [rsp+C8h] [rbp+20h] BYREF

  v2 = (__int64 *)*BugCheckParameter2;
  v3 = (ULONG_PTR)BugCheckParameter2;
  v4 = a2;
  v5 = (char *)BugCheckParameter2[1];
  v6 = 17;
  v7 = *((_DWORD *)v2 + 14);
  v8 = *((_WORD *)v2 + 30) & 0x3FF;
  v56 = 17;
  v46 = v7;
  P = v5;
  v9 = *(struct _KEVENT **)(qword_14043B808 + 8 * v8);
  v10 = v2[8];
  v51 = v9;
  v11 = 0LL;
  v47 = v10 != 0;
  v12 = *v2;
  v50 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = 0LL;
  v45 = 0LL;
  v49 = 0LL;
  v14 = -1LL;
  v15 = *(_DWORD *)(v12 + 12);
  if ( !v5 )
    goto LABEL_49;
  v16 = (unsigned __int64)v5;
  v17 = &v5[8 * *(unsigned int *)(v3 + 44)];
  if ( v5 >= v17 )
    goto LABEL_49;
  v18 = v50;
  while ( 2 )
  {
    v19 = 0xFFFFFA8000000000uLL;
    v20 = 0xFFFFFFFFFLL;
    v21 = 0xFFFFFA8000000028uLL;
    if ( (v16 & 0xFFF) != 0 )
    {
      if ( v6 != 17 )
        goto LABEL_6;
    }
    else if ( v6 != 17 )
    {
      MiUnlockProtoPoolPage(v13, v6);
      if ( (v15 & 0x1000) != 0 )
      {
        v34 = MiFreeLargePageMemory(v14 & 0xFFFFFFFFFFFFFE00uLL, 1u, 0);
        v14 = -1LL;
        *v4 += 512 - v34;
      }
    }
    while ( 1 )
    {
      v49 = MiLockProtoPoolPage(v16, &v56);
      if ( v49 )
        break;
      MmAccessFault(2uLL, v16, 0LL, 0LL);
    }
    v18 = v50;
    v20 = 0xFFFFFFFFFLL;
    v19 = 0xFFFFFA8000000000uLL;
    v21 = 0xFFFFFA8000000028uLL;
    while ( 1 )
    {
LABEL_6:
      while ( 1 )
      {
        v22 = *(_QWORD *)v16;
        v23 = *(_QWORD *)v16;
        if ( (*(_QWORD *)v16 & 1) == 0 )
          break;
LABEL_22:
        v27 = 48 * (v20 & (v23 >> 12));
        if ( (*(_QWORD *)(v27 + v21) & 0x20000000000000LL) != 0 )
        {
          v24 = v27 + v19;
          v57 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + v19 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v57, v27, v13);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
            v20 = 0xFFFFFFFFFLL;
            v19 = 0xFFFFFA8000000000uLL;
            v21 = 0xFFFFFA8000000028uLL;
          }
          if ( *(_QWORD *)v16 == v22 )
            goto LABEL_9;
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v16 & 0xC00LL) != 0x800 )
        break;
      if ( MiInvalidPteConforms(*(_QWORD *)v16) )
      {
        v23 = v22;
        if ( qword_14043B180 && (v22 & 0x10) == 0 )
          v23 = v22 & ~qword_14043B180;
        goto LABEL_22;
      }
    }
    v24 = 0LL;
LABEL_9:
    v25 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 8 * ((v16 >> 3) & 0x1FF));
        v37 = v25 | 0x20;
        if ( (v36 & 0x20) == 0 )
          v37 = *(_QWORD *)v16;
        v25 = v37;
        if ( (v36 & 0x42) != 0 )
          v25 = v37 | 0x42;
      }
    }
    v52 = v25;
    if ( (v25 & 1) != 0 )
    {
      v38 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52);
      v14 = v39 & (v38 >> 12);
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow(v41, v40) )
        {
          if ( !HIBYTE(word_14043B26C) && (v40 & 1) != 0 )
            v40 |= 0x8000000000000000uLL;
          *(_QWORD *)v16 = v40;
          MiWritePteShadow(v16);
          goto LABEL_89;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v40 & 1) != 0 )
        {
          v40 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v40;
LABEL_89:
      *(_QWORD *)(v24 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_12;
    }
    if ( (v25 & 0x400) != 0 )
      goto LABEL_12;
    if ( (v25 & 0x800) != 0 )
    {
      v29 = v25;
      if ( qword_14043B180 && (v25 & 0x10) == 0 )
        v29 = v25 & ~qword_14043B180;
      v14 = v20 & (v29 >> 12);
      if ( (*(_QWORD *)(v24 + 16) & 0x400LL) != 0 && (v2[7] & 0x20) == 0 )
      {
        v42 = *(_BYTE *)(v24 + 34);
        if ( (v42 & 0x10) != 0 || (v42 & 8) != 0 )
          ++v45;
      }
      if ( v18
        || (v14 & 0xF) != 0
        || (__int64)((unsigned __int64)&v17[-v16] & 0xFFFFFFFFFFFFFFF8uLL) < 128
        || ((4096 - (v16 & 0xFFF)) & 0xFFFFFFF8) < 0x80
        || !MiDeleteClusterSection(v24, v16) )
      {
        v26 = a2;
        if ( (unsigned int)MiDeleteTransitionPte(v16, v24) == 3 )
          ++*a2;
        goto LABEL_13;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v26 = a2;
      v16 += 128LL;
    }
    else
    {
      v48 = v25;
      if ( (v25 & 4) != 0 || (v25 & 2) != 0 )
        v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48);
      else
        v28 = 0LL;
      v48 = v28;
      if ( v28 )
        MiReleasePageFileInfo(v51, v28, 0);
LABEL_12:
      v26 = a2;
LABEL_13:
      v16 += 8LL;
    }
    v6 = v56;
    if ( v16 < (unsigned __int64)v17 )
    {
      v13 = v49;
      v4 = a2;
      continue;
    }
    break;
  }
  LOBYTE(v7) = v46;
  if ( v56 != 17 )
  {
    MiUnlockProtoPoolPage(v49, v56);
    if ( (v15 & 0x1000) != 0 )
      *v26 += 512 - MiFreeLargePageMemory(v14 & 0xFFFFFFFFFFFFFE00uLL, 1u, 0);
  }
  v3 = (ULONG_PTR)BugCheckParameter2;
  v11 = v45;
LABEL_49:
  if ( (v7 & 0xA0) != 0x80 )
    return v11;
  v31 = MiDecrementSubsectionViewCount((__int64 *)v3, 0);
  v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
  if ( *(_DWORD *)(v3 + 104) )
  {
    do
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v32);
      _mm_pause();
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 18);
    }
    while ( *((_DWORD *)BugCheckParameter2 + 26) );
    v3 = (ULONG_PTR)BugCheckParameter2;
  }
  v33 = P;
  if ( P )
  {
    MiUpdateSystemProtoPtesTree(v3 + 112, 0LL);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 18);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
  {
    v44 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v44);
  }
  __writecr8(v32);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v31 )
    MiReturnCrossPartitionSectionCharges(v51, v47, v31);
  return v45;
}
