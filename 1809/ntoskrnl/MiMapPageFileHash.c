/*
 * XREFs of MiMapPageFileHash @ 0x14014FDD8
 * Callers:
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14014FC2C (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiWritePageFileHash @ 0x1401515B8 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x14015183C (MiGetFileHashPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r13d
  char *AnyMultiplexedVm; // rax
  __int64 v10; // r15
  KSPIN_LOCK *v11; // rax
  __int64 v12; // r12
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // r14
  __int16 v16; // cx
  __int64 FileHashPage; // rax
  ULONG_PTR v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int8 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  __int64 *v27; // r9
  int v28; // r10d
  int v29; // r11d
  __int64 v30; // rdx
  int v31; // r9d
  unsigned int v32; // eax
  unsigned __int8 v33; // bl
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r9
  int v41; // r10d
  char v42; // r8
  bool v43; // zf
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v46; // rcx
  unsigned __int8 v47; // bl
  struct _KPRCB *v48; // rcx
  __int64 v49; // rcx
  struct _KPRCB *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // r9d
  char v54; // r8
  bool v55; // zf
  unsigned __int8 v56; // bl
  struct _KPRCB *v57; // rcx
  char v58; // r8
  bool v59; // zf
  char v60; // r8
  bool v61; // zf
  struct _KPRCB *v62; // rcx
  struct _KPRCB *v63; // rcx
  signed __int32 v64[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+20h] [rbp-50h]
  __int64 v66; // [rsp+30h] [rbp-40h]
  unsigned __int64 updated; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v68; // [rsp+40h] [rbp-30h] BYREF
  __int64 v69; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v71; // [rsp+B0h] [rbp+40h]
  unsigned int v72; // [rsp+C8h] [rbp+58h]

  v72 = a4;
  v5 = a4;
  v68 = 0LL;
  v69 = 0LL;
  if ( !*(_QWORD *)(a1 + 216) )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v68);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000010);
    v10 = a2 + 8 * (a3 + 6);
  }
  else
  {
    v10 = 0LL;
  }
  v66 = v10;
  v11 = (KSPIN_LOCK *)(a1 + 232);
  do
  {
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
    v12 = *(_QWORD *)(a1 + 216);
    v13 = a5;
    v14 = (((v12 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (4096 - (((unsigned int)v12 + 4 * v5) & 0xFFF)) >> 2 <= a5 )
      v13 = (4096 - (((unsigned int)v12 + 4 * v5) & 0xFFF)) >> 2;
    v71 = v13;
    updated = MI_READ_PTE_LOCK_FREE((((v12 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (updated & 1) != 0 )
    {
      v36 = *(_QWORD *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL
                      + 16);
      v37 = v36;
      if ( qword_14043B180 && (v36 & 0x10) == 0 )
        v37 = v36 & ~qword_14043B180;
      updated = MiUpdatePageFileHighInPte(v36, v13 + HIDWORD(v37));
      if ( !MiPteInShadowRange(v38 + 16) )
        goto LABEL_52;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v41 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v43 = (v42 & 1) == 0;
          goto LABEL_50;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v43 = (v42 & 1) == 0;
LABEL_50:
        if ( !v43 )
          v39 |= 0x8000000000000000uLL;
      }
LABEL_52:
      *(_QWORD *)(v40 + 16) = v39;
      if ( v41 )
        MiWritePteShadow(v40 + 16, v39);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      v34 = OldIrql;
      goto LABEL_32;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v46 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v46);
    }
    __writecr8(v15);
    v16 = _InterlockedExchangeAdd(v68, 1u);
    FileHashPage = MiGetFileHashPage(a1, (unsigned __int16)(v69 & v16) | (unsigned int)WORD1(v69));
    v18 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v19 = 0LL;
      v21 = 17;
    }
    else
    {
      v19 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v64, 0);
      MiSetPfnTbFlushStamp(v19, KiTbFlushTimeStamp, 0);
      v20 = MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v18, v14, (v20 >> 12) & 0xFFFFFFFFFLL, 2560);
      v21 = MiLockPageInline(v19);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    if ( v12 == *(_QWORD *)(a1 + 216) )
    {
      v22 = MI_READ_PTE_LOCK_FREE(v14);
      HIDWORD(v23) = HIDWORD(v22);
      if ( qword_14043B180 )
      {
        if ( (v22 & 0x10) != 0 )
          HIDWORD(v23) = HIDWORD(v22);
        else
          v23 = v22 & ~qword_14043B180;
      }
      v24 = HIDWORD(v23) + v71;
      if ( v18 != -1LL )
      {
        updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v19 + 16), v24);
        if ( !MiPteInShadowRange(v25) )
          goto LABEL_20;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v28 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_20;
          v59 = (v58 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_20;
          v59 = (v58 & 1) == 0;
        }
        if ( !v59 )
          v26 |= 0x8000000000000000uLL;
LABEL_20:
        *v27 = v26;
        if ( v28 )
          MiWritePteShadow((__int64)v27, v26);
        if ( v29 )
          *(_BYTE *)(v19 + 34) &= ~0x10u;
        updated = MiMakeValidPte(v14, v18, -1610612732);
        if ( !MiPteInShadowRange(v14) )
          goto LABEL_25;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v31 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v61 = (v60 & 1) == 0;
            goto LABEL_110;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v61 = (v60 & 1) == 0;
LABEL_110:
          if ( !v61 )
            v30 |= 0x8000000000000000uLL;
        }
LABEL_25:
        *(_QWORD *)v14 = v30;
        if ( v31 )
          MiWritePteShadow(v14, v30);
        v32 = ++*(_DWORD *)(a1 + 208);
        if ( v32 > *(_DWORD *)(a1 + 212) )
          *(_DWORD *)(a1 + 212) = v32;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v33 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v62 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v62);
        }
        __writecr8(v33);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
        {
          v63 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v63);
        }
        v13 = v71;
        v10 = v66;
        v34 = v21;
        v5 = v72;
LABEL_32:
        v65 = v13;
        __writecr8(v34);
        MiWritePageFileHash(a1, a2, v10, v5, v65);
LABEL_33:
        if ( v10 )
        {
          v10 += 8LL * v13;
          v66 = v10;
        }
        v5 += v13;
        v35 = a5 - v13;
        v72 = v5;
        a5 -= v13;
        goto LABEL_36;
      }
      updated = MiUpdatePageFileHighInPte(v22, v24);
      if ( MiPteInShadowRange(v14) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v53 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v55 = (v54 & 1) == 0;
            goto LABEL_88;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v55 = (v54 & 1) == 0;
LABEL_88:
          if ( !v55 )
            v52 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v14 = v52;
      if ( v53 )
        MiWritePteShadow(v14, v52);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v56 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v57 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v57);
      }
      __writecr8(v56);
      v13 = v71;
      v10 = v66;
      v5 = v72;
      goto LABEL_33;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v47 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48);
    }
    __writecr8(v47);
    if ( v18 != -1LL )
    {
      v49 = 48 * v18 - 0x58000000000LL;
      *(_QWORD *)(v49 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v49 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v18, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      __writecr8(v21);
      v51 = *(_QWORD *)(a1 + 256);
      if ( (ULONG_PTR *)v51 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 7360), 1uLL);
      MiReturnCommit(*(_QWORD *)(a1 + 256), 1uLL);
      _InterlockedDecrement64(&qword_14043C868);
    }
    v35 = a5;
    v5 = v72;
    v10 = v66;
LABEL_36:
    v43 = v35 == 0;
    v11 = (KSPIN_LOCK *)(a1 + 232);
  }
  while ( !v43 );
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
}
