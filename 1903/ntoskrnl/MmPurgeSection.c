/*
 * XREFs of MmPurgeSection @ 0x1400DCED0
 * Callers:
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x140054900 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     MiInsertUnusedSubsection @ 0x14006FCC0 (MiInsertUnusedSubsection.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiComputeDataFlushRange @ 0x140071840 (MiComputeDataFlushRange.c)
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400DF3D4 (MiCanFileBeTruncatedInternal.c)
 *     MiRemoveUnusedSubsection @ 0x1400E0A4C (MiRemoveUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x14011A904 (MiWaitForPageWriteCompletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiChangingSubsectionProtos @ 0x1402CAA9C (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x1402CD2F8 (MiSubsectionProtosCreated.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        __int64 *a2,
        __int64 a3,
        int a4,
        _BYTE *a5)
{
  char v8; // r15
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v10; // di
  __int64 v11; // r14
  ULONG_PTR v13; // rsi
  KIRQL v14; // bl
  ULONG_PTR v15; // r12
  ULONG_PTR v16; // rdi
  char v17; // r13
  unsigned __int64 v18; // r15
  BOOL v19; // r12d
  __int64 v20; // r8
  ULONG_PTR v21; // rax
  unsigned int v22; // r13d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  ULONG_PTR v26; // rdi
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 DeepFreezeStartTime; // r8
  unsigned __int8 v29; // cl
  ULONG_PTR v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v38; // rcx
  __int64 v39; // rax
  char v40; // [rsp+30h] [rbp-71h]
  __int64 v41; // [rsp+38h] [rbp-69h]
  __int64 v42; // [rsp+38h] [rbp-69h]
  ULONG_PTR v43; // [rsp+40h] [rbp-61h]
  ULONG_PTR v44; // [rsp+48h] [rbp-59h]
  int v45; // [rsp+50h] [rbp-51h] BYREF
  __int64 v46; // [rsp+58h] [rbp-49h] BYREF
  ULONG_PTR v47[6]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v48[96]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v49; // [rsp+100h] [rbp+5Fh] BYREF
  unsigned __int8 v50; // [rsp+108h] [rbp+67h] BYREF
  int v51; // [rsp+118h] [rbp+77h]

  v51 = a4;
  v46 = 0LL;
  v8 = a4;
  memset(v47, 0, sizeof(v47));
  memset(v48, 0, 0x28uLL);
  *a5 = 0;
  if ( a2 )
  {
    v36 = *a2;
    a2 = &v46;
    v46 = v36;
  }
  v41 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(SectionObjectPointer, (__int64)&v49);
  v10 = v49;
  v11 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v49 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (v8 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v10 = v49;
    }
    __writecr8(v10);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v10, a2, a3, 1, (__int64)v47) )
    return 1;
  v13 = v47[1];
  v14 = 17;
  v15 = v47[3];
  v16 = v47[4];
  v17 = 1;
  v40 = 1;
  LOBYTE(v49) = 17;
LABEL_11:
  v44 = v15;
  if ( v14 == 17 )
  {
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    LOBYTE(v49) = v14;
  }
  if ( v16 == v15 )
    v18 = v47[2] + 8;
  else
    v18 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
  v19 = MiControlAreaUsingExtents(v11);
  if ( v20 )
  {
    if ( *(_DWORD *)(v44 + 108) )
    {
      v32 = v41;
      v17 = 0;
      goto LABEL_50;
    }
    MiIncrementSubsectionViewCount((_QWORD *)v44, 0LL);
    if ( (*(_BYTE *)(v44 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v44);
    *(_WORD *)(v44 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v38);
      v16 = v47[4];
      v14 = v49;
    }
    __writecr8(v14);
    v21 = 0LL;
    v50 = 17;
    v43 = 0LL;
    if ( v19 )
    {
      MiChangingSubsectionProtos(v44);
      v21 = 0LL;
    }
    v22 = 0;
    if ( v13 >= v18 )
      goto LABEL_44;
    while ( 1 )
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v50 != 17 )
          goto LABEL_25;
      }
      else if ( v50 != 17 )
      {
        MiUnlockProtoPoolPage(v21, v50);
      }
      v21 = MiCheckProtoPtePageState(v13, &v50);
      v43 = v21;
      if ( v21 )
        break;
      v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_60:
      if ( v13 >= v18 )
        goto LABEL_41;
    }
    while ( 1 )
    {
LABEL_25:
      while ( 1 )
      {
        v23 = *(_QWORD *)v13;
        v24 = *(_QWORD *)v13;
        if ( (*(_QWORD *)v13 & 1) == 0 )
          break;
LABEL_31:
        v25 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v25 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v26 = v25 - 0x58000000000LL;
          v45 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v45);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          if ( *(_QWORD *)v13 == v23 )
          {
            if ( !v26 )
              goto LABEL_58;
            if ( !MiPteInShadowRange(v13)
              || (MiFlags & 0xC00000) == 0
              || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
            {
              goto LABEL_36;
            }
            if ( (BugCheckParameter4 & 1) != 0 )
            {
              if ( (BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0 )
              {
                DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  v39 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v13 >> 3) & 0x1FF));
                  DeepFreezeStartTime = BugCheckParameter4 | 0x20;
                  if ( (v39 & 0x20) == 0 )
                    DeepFreezeStartTime = BugCheckParameter4;
                  BugCheckParameter4 = DeepFreezeStartTime;
                  if ( (v39 & 0x42) != 0 )
                    BugCheckParameter4 = DeepFreezeStartTime | 0x42;
                }
              }
LABEL_36:
              if ( (BugCheckParameter4 & 1) != 0 )
                goto LABEL_40;
            }
            if ( (*(_DWORD *)(v26 + 16) & 0x401) != 0x400LL || (*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) != v13 )
              KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v26 + 8), BugCheckParameter4);
            v29 = *(_BYTE *)(v26 + 34);
            if ( (((v51 & 2) != 0) & (v29 >> 4)) != 0 )
            {
LABEL_40:
              v40 = 0;
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_41;
            }
            if ( (v29 & 8) != 0 )
            {
              MiWaitForPageWriteCompletion(v26, v11, v43, v50);
              v50 = 17;
LABEL_59:
              v21 = v43;
              goto LABEL_60;
            }
            if ( v19 && *(_WORD *)(v26 + 32) )
              *a5 = 1;
            LOBYTE(DeepFreezeStartTime) = 17;
            MiDeleteTransitionPte(v13, v26, DeepFreezeStartTime, 1);
            v22 = 1;
            if ( *(_QWORD *)(v11 + 32) )
            {
LABEL_58:
              v13 += 8LL;
              goto LABEL_59;
            }
LABEL_41:
            if ( v50 != 17 )
              MiUnlockProtoPoolPage(v43, v50);
            v16 = v47[4];
LABEL_44:
            v30 = v44;
            if ( v19 )
              MiSubsectionProtosCreated(v44, v48, 0LL, v22);
            LOBYTE(v49) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
            v14 = v49;
            MiDecrementSubsectionViewCount((_QWORD *)v44, 0LL, v31);
            if ( *(_QWORD *)(v44 + 96) || (*(_BYTE *)(v44 + 34) & 1) != 0 )
            {
              v32 = v41;
            }
            else
            {
              v32 = MiInsertUnusedSubsection(v44) + v41;
              v41 = v32;
            }
            v17 = v40;
LABEL_49:
            if ( v30 == v16 || !v17 )
              goto LABEL_50;
            v15 = *(_QWORD *)(v44 + 16);
            v13 = *(_QWORD *)(v15 + 8);
            goto LABEL_11;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v13 & 0xC00LL) != 0x800 )
        goto LABEL_58;
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v13) )
      {
        v24 = v23;
        if ( qword_140465B00 && (v23 & 0x10) == 0 )
          v24 = v23 & ~qword_140465B00;
        goto LABEL_31;
      }
    }
  }
  v30 = v44;
  v32 = v41;
  if ( v44 != v16 )
    goto LABEL_49;
LABEL_50:
  v33 = MiDecrementSubsections(v47[3], v47[3], 0) + v32;
  v34 = MiDecrementSubsections(v16, v16, 0);
  --*(_QWORD *)(v11 + 40);
  v35 = v34 + v33;
  *(_DWORD *)(v11 + 56) &= ~4u;
  v42 = v35;
  if ( v35 )
    v35 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  MiCheckControlArea(v11, v14);
  if ( v42 )
    MiReturnCrossPartitionSectionCharges(v35, 1LL, v42);
  return v17;
}
