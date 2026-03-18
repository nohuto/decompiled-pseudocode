/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x1400C4A00
 * Callers:
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x14000E990 (MiRelinkStandbyPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPteInStore @ 0x1401587DC (MiIsPteInStore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  int v8; // r15d
  __int64 v9; // rdx
  ULONG_PTR v10; // rbx
  unsigned __int8 CurrentIrql; // di
  char v12; // al
  __int64 v13; // rax
  char v14; // r9
  char v15; // cl
  unsigned int v16; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // rcx
  struct _KPRCB *v19; // rcx
  int IsPteInStore; // eax
  struct _KPRCB *v21; // rcx
  int v22; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    v23 = result;
    if ( (result & 1) != 0 )
    {
      result = MI_READ_PTE_LOCK_FREE(&v23);
      v8 = 6;
    }
    else
    {
      if ( (result & 0x400) != 0
        || (result & 0x800) == 0
        || result && qword_140465B00 && (result & qword_140465B00) == 0 )
      {
        return result;
      }
      if ( qword_140465B00 && (result & 0x10) == 0 )
        result &= ~qword_140465B00;
      v8 = v5;
    }
    v9 = 6 * ((result >> 12) & 0xFFFFFFFFFLL);
    result = v7;
    if ( (*(_QWORD *)(v7 + 8 * v9) & 0x20000000000000LL) == 0 )
      return result;
    v10 = v6 + 8 * v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a1
      && ((*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      break;
    }
    v12 = *(_BYTE *)(v10 + 34) & 7;
    if ( v8 == 6 )
    {
      if ( v12 == 6 )
        goto LABEL_9;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v18 = (__int64)(a1 << 25) >> 16;
        if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v18);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
    else
    {
      if ( (unsigned __int8)(v12 - 2) > 2u || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          goto LABEL_66;
        goto LABEL_29;
      }
LABEL_9:
      v13 = MI_READ_PTE_LOCK_FREE(a1);
      if ( v23 == v13 )
      {
        v15 = *(_BYTE *)(v10 + 35);
        if ( (v15 & 8) != 0 )
          v16 = 5;
        else
          v16 = v15 & 7;
        if ( a2 != v16 && a2 >= v16 )
        {
          if ( (v14 & 7) == 2 )
          {
            if ( v16
              || (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
              || (IsPteInStore = MiIsPteInStore(
                                   *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)),
                                   *(_QWORD *)(v10 + 16))) == 0 )
            {
              MiRelinkStandbyPage(v10, a2);
            }
          }
          else
          {
            *(_BYTE *)(v10 + 35) = v15 ^ (a2 ^ v15) & 7;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          goto LABEL_77;
        goto LABEL_15;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
LABEL_66:
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v19);
      }
LABEL_29:
      __writecr8(CurrentIrql);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
LABEL_77:
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
LABEL_15:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
