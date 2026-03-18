/*
 * XREFs of MiCheckProtoPtePageState @ 0x140054900
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiIsSubsectionClean @ 0x1402B9A44 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CCC18 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiAreChargesNeededToLockPage @ 0x140054C70 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140054CE0 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400F69C0 (MiWriteValidPteVolatile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  char v19; // si
  __int64 v20; // r10
  ULONG_PTR *v21; // rdi
  struct _KPRCB *v22; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v24; // ett
  unsigned __int8 v25; // si
  _BYTE *v26; // rdi
  char i; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  struct _KPRCB *v32; // rcx
  __int64 v33[9]; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+80h] [rbp+18h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v4 = (__int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v5 = *v4;
          v33[0] = v5;
          if ( (v5 & 1) != 0 )
            break;
          if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
            goto LABEL_26;
          if ( (unsigned int)MiInvalidPteConforms(v5) )
          {
            if ( qword_140465B00 && (v6 & 0x10) == 0 )
              v6 &= ~qword_140465B00;
            goto LABEL_5;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_26;
        v6 = MI_READ_PTE_LOCK_FREE(v33);
LABEL_5:
        v10 = v7 & (v6 >> 12);
      }
      while ( (v8 & *(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL)) == 0 );
      v11 = 48 * v10 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v34 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v34);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v13 = *v4;
      *a2 = CurrentIrql;
      if ( v13 == v33[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), v9);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    if ( (v13 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v11 + 34) & 7u) < 6 )
      goto LABEL_28;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v30 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v30);
    }
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, BugCheckParameter1);
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_28:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v32 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v32);
    }
    __writecr8(CurrentIrql);
LABEL_26:
    result = 0LL;
    *a2 = 17;
    return result;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11) )
    goto LABEL_19;
  v18 = *(_QWORD *)(v11 + 40);
  v19 = 0;
  if ( (v18 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(v15, v14, v16, v17) )
  {
    v19 = 1;
  }
  v20 = (v18 >> 40) & 0x3FF;
  v21 = *(ULONG_PTR **)(qword_140466188 + 8 * v20);
  if ( v19 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140466188 + 8 * v20), 1uLL, 4u) )
    goto LABEL_20;
  if ( v21 == &MiSystemPartition )
  {
    v22 = KeGetCurrentPrcb();
    CachedResidentAvailable = v22->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v24 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v22->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v24 == CachedResidentAvailable )
        goto LABEL_19;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(v21, 1LL, 0xFFFFFFFFLL) )
  {
LABEL_19:
    ++*(_WORD *)(v11 + 32);
  }
  else if ( v19 )
  {
    MiReturnCommit(v21, 1LL);
  }
LABEL_20:
  v25 = *a2;
  v26 = (_BYTE *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
  for ( i = *(_BYTE *)(v11 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v11 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v25 != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
      {
        v31 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v31);
      }
      __writecr8(v25);
    }
    v35 = 0;
    while ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&v35);
    MiLockPageInline(v11);
  }
  *(_BYTE *)(v11 + 34) = i | 0x20;
  if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 && (*v26 & 0x20) == 0 )
    MiWriteValidPteVolatile(v26, 1LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v11;
}
