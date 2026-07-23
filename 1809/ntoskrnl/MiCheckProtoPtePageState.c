/*
 * XREFs of MiCheckProtoPtePageState @ 0x140030780
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiIsSubsectionClean @ 0x1402A2884 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR a1, unsigned __int8 *a2)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  char v17; // si
  __int64 v18; // r10
  ULONG_PTR *v19; // rdi
  struct _KPRCB *v20; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v22; // ett
  unsigned __int8 v23; // si
  _BYTE *v24; // rdi
  char i; // al
  __int64 result; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  struct _KPRCB *v32; // rcx
  _QWORD v33[9]; // [rsp+20h] [rbp-48h] BYREF
  int v34; // [rsp+80h] [rbp+18h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    v6 = 0xFFFFFA8000000028uLL;
    v7 = 0x20000000000000LL;
    while ( 1 )
    {
      v8 = 0xFFFFFFFFFLL;
      do
      {
        v9 = *v4;
        v33[0] = v9;
        if ( (v9 & 1) != 0 )
        {
          if ( (v9 & 0x200) == 0 )
          {
            if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
            {
              v27 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 8 * (((unsigned __int64)v33 >> 3) & 0x1FF));
                if ( (v28 & 0x20) != 0 )
                  v9 |= 0x20uLL;
                v6 = 0xFFFFFA8000000028uLL;
                v8 = 0xFFFFFFFFFLL;
                if ( (v28 & 0x42) != 0 )
                  v9 |= 0x42uLL;
              }
              else
              {
                v9 = v33[0];
                v8 = 0xFFFFFFFFFLL;
                v6 = 0xFFFFFA8000000028uLL;
              }
            }
            goto LABEL_7;
          }
LABEL_30:
          result = 0LL;
          *a2 = 17;
          return result;
        }
        if ( (v9 & 0x400) != 0 || (v9 & 0x800) == 0 )
          goto LABEL_30;
      }
      while ( !(unsigned int)MiInvalidPteConforms(v9) );
      if ( qword_14043B180 && (v9 & 0x10) == 0 )
        v9 &= ~qword_14043B180;
LABEL_7:
      v10 = v8 & (v9 >> 12);
      if ( (v7 & *(_QWORD *)(v6 + 48 * v10)) == 0 )
        continue;
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
        v6 = 0xFFFFFA8000000028uLL;
        v7 = 0x20000000000000LL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v13 = *v4;
      *a2 = CurrentIrql;
      if ( v13 == v33[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v6 = 0xFFFFFA8000000028uLL;
        v7 = 0x20000000000000LL;
        v5 = 0x7FFFFFFFFFFFFFFFLL;
      }
      __writecr8(CurrentIrql);
    }
    if ( (v13 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v11 + 34) & 7u) < 6 )
      goto LABEL_32;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v30 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v30);
    }
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, a1);
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_32:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v32 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v32);
    }
    __writecr8(CurrentIrql);
    goto LABEL_30;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11) )
    goto LABEL_21;
  v16 = *(_QWORD *)(v11 + 40);
  v17 = 0;
  if ( (v16 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(v15, v14) )
  {
    v17 = 1;
  }
  v18 = (v16 >> 40) & 0x3FF;
  v19 = *(ULONG_PTR **)(qword_14043B808 + 8 * v18);
  if ( v17 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8 * v18), 1LL, 4LL) )
    goto LABEL_22;
  if ( v19 == &MiSystemPartition )
  {
    v20 = KeGetCurrentPrcb();
    CachedResidentAvailable = v20->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v22 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v20->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v22 == CachedResidentAvailable )
        goto LABEL_21;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v19, 1uLL, 0xFFFFFFFFLL) )
  {
LABEL_21:
    ++*(_WORD *)(v11 + 32);
  }
  else if ( v17 )
  {
    MiReturnCommit(v19, 1LL);
  }
LABEL_22:
  v23 = *a2;
  v24 = (_BYTE *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
  for ( i = *(_BYTE *)(v11 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v11 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v23 < 2u )
      {
        v31 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v31);
      }
      __writecr8(v23);
    }
    v35 = 0;
    while ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 )
      KeYieldProcessorEx(&v35);
    MiLockPageInline(v11);
  }
  *(_BYTE *)(v11 + 34) = i | 0x20;
  if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 && (*v24 & 0x20) == 0 )
    MiWriteValidPteVolatile(v24, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v11;
}
