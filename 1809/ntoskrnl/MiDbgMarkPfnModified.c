/*
 * XREFs of MiDbgMarkPfnModified @ 0x1402BAD20
 * Callers:
 *     MiDbgWriteCheck @ 0x1402BB574 (MiDbgWriteCheck.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  signed __int64 v4; // rdi
  char v5; // r11
  unsigned int v6; // r12d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  char v10; // r10
  __int64 v11; // r14
  unsigned __int8 v12; // dl
  __int64 v13; // r14
  __int64 v14; // rbp
  int v15; // eax
  struct _KPRCB *v16; // rcx
  __int64 v17; // rbp
  signed __int64 v18; // rax
  char v19; // dl
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
  if ( (MiFlags & 0x8000000) == 0 )
    return 1LL;
  if ( (*(_QWORD *)(48 * v3 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    return 1LL;
  v4 = 48 * v3 - 0x58000000000LL;
  v5 = 16;
  if ( (*(_BYTE *)(v4 + 34) & 0x10) != 0 )
    return 1LL;
  v6 = 0;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v10 = *(_BYTE *)(v4 + 34);
  v11 = *(_QWORD *)(v4 + 16);
  if ( (v11 & 0x400) == 0 )
  {
    if ( (v10 & 8) == 0 && (unsigned int)MiGetPagingFileOffset(v4 + 16) )
    {
      v17 = 0LL;
      do
      {
        v18 = _InterlockedCompareExchange64(&MiState[v17 + 995], v4, 0LL);
        if ( !v18 )
          break;
        if ( (v18 | 1) == (v4 | 1) )
          goto LABEL_34;
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 < 0x20 );
      if ( (_DWORD)v17 == 32 )
        goto LABEL_35;
      v19 = 5;
      if ( CurrentIrql != 17 )
        v19 = 1;
      MiAddLockedPageCharge(v4, v19);
      _InterlockedAdd64(&MiState[v17 + 995], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  if ( (v10 & 0x10) != 0 )
  {
LABEL_34:
    v6 = 1;
    goto LABEL_35;
  }
  if ( !MiIsPfnFileOnly(v4) )
  {
    if ( qword_14043B180 && ((unsigned __int8)v11 & (unsigned __int8)v5) == 0 )
      v11 &= ~qword_14043B180;
    v13 = v11 >> 16;
    v14 = *(_QWORD *)v13;
    v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
    if ( (v15 & 0x20) != 0 )
    {
      if ( (v15 & 0x40000) == 0 && *(_QWORD *)(*(_QWORD *)(v14 + 96) + 32LL) )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v14 + 72)) )
        {
LABEL_35:
          v12 = 2;
          goto LABEL_36;
        }
        *(_DWORD *)(v14 + 56) |= 0x40000u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
        v10 = *(_BYTE *)(v4 + 34);
        v5 = 16;
      }
      if ( (*(_BYTE *)(v13 + 32) & 0x3Eu) < 8 && (unsigned int)MiGetSystemRegionType(a1) == 1 )
        byte_14043A024 = 1;
      byte_14043BA01 = 1;
    }
LABEL_33:
    *(_BYTE *)(v4 + 34) = v5 | v10;
    goto LABEL_34;
  }
LABEL_36:
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v12 && CurrentIrql < v12 )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
    __writecr8(CurrentIrql);
  }
  return v6;
}
