/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x14003DA70
 * Callers:
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // r9
  int v8; // r14d
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  unsigned __int8 CurrentIrql; // di
  char v12; // r9
  __int64 v13; // rax
  char v14; // r9
  char v15; // r10
  char v16; // cl
  unsigned int v17; // eax
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v21; // rcx
  struct _KPRCB *v22; // rcx
  int IsPteInStore; // eax
  struct _KPRCB *v24; // rcx
  int v25; // [rsp+60h] [rbp+18h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    v26 = result;
    v7 = result;
    if ( (result & 1) != 0 )
    {
      if ( (unsigned __int64)&v26 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v26 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((result & 0x20) == 0 || (result & 0x42) == 0) )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&v26 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
        else
        {
          v7 = v26;
        }
      }
      v8 = 6;
    }
    else
    {
      if ( (result & 0x400) != 0 )
        return result;
      if ( (result & 0x800) == 0 )
        return result;
      if ( result )
      {
        result = qword_14043B180;
        if ( qword_14043B180 )
        {
          if ( (v7 & qword_14043B180) == 0 )
            return result;
        }
      }
      if ( qword_14043B180 && (v7 & 0x10) == 0 )
        v7 &= ~qword_14043B180;
      v8 = 2;
    }
    v9 = (v7 >> 12) & 0xFFFFFFFFFLL;
    result = v6;
    if ( (*(_QWORD *)(v6 + 48 * v9) & 0x20000000000000LL) == 0 )
      return result;
    v10 = v5 + 48 * v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a1
      && ((*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      break;
    }
    v12 = *(_BYTE *)(v10 + 34);
    if ( v8 == 6 )
    {
      if ( (v12 & 7) == 6 )
        goto LABEL_10;
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
        v21 = (__int64)(a1 << 25) >> 16;
        if ( v21 < 0xFFFFF68000000000uLL || v21 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          result = MiGetSystemRegionType(v21);
          if ( (_DWORD)result == 9 )
            return result;
        }
      }
    }
    else
    {
      if ( (unsigned __int8)((v12 & 7) - 2) > 2u || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          goto LABEL_79;
        goto LABEL_32;
      }
LABEL_10:
      v13 = MI_READ_PTE_LOCK_FREE(a1);
      if ( v26 == v13 )
      {
        v16 = *(_BYTE *)(v10 + 35);
        if ( (v16 & 8) != 0 )
        {
          v17 = 5;
        }
        else
        {
          v14 = v15;
          v17 = v16 & 7;
        }
        if ( a2 != v17 && a2 >= v17 )
        {
          if ( (v14 & 7) == 2 )
          {
            if ( v17
              || (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
              || (IsPteInStore = MiIsPteInStore(
                                   *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)),
                                   *(_QWORD *)(v10 + 16))) == 0 )
            {
              MiRelinkStandbyPage(v10);
            }
          }
          else
          {
            *(_BYTE *)(v10 + 35) = v16 ^ (a2 ^ v16) & 7;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          goto LABEL_90;
        goto LABEL_16;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
LABEL_79:
        v22 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v22);
      }
LABEL_32:
      __writecr8(CurrentIrql);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
LABEL_90:
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
  }
LABEL_16:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
