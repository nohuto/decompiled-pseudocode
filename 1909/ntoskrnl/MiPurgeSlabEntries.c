/*
 * XREFs of MiPurgeSlabEntries @ 0x1402DC7F4
 * Callers:
 *     MiFreeSlabEntries @ 0x1402DB930 (MiFreeSlabEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCompareSlabEntry @ 0x1402DB604 (MiCompareSlabEntry.c)
 *     MiIsFreeSlabPage @ 0x1402DC7BC (MiIsFreeSlabPage.c)
 */

void __fastcall MiPurgeSlabEntries(__int64 a1)
{
  unsigned __int64 v1; // rsi
  volatile LONG *v3; // rdx
  __int64 *v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 *v14; // rbx
  unsigned __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v3 = (volatile LONG *)(a1 + 16);
    v19 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      ExAcquireSpinLockSharedAtDpcLevel(v3);
      v8 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      {
        if ( v8 )
          v8 ^= a1;
        else
          v8 = 0LL;
      }
      v9 = *(_BYTE *)(a1 + 8) & 1;
      while ( v8 )
      {
        v10 = MiCompareSlabEntry(&v19, v8);
        if ( !v10 )
          goto LABEL_22;
        if ( v10 >= 0 )
        {
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
          v1 = v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      v8 = v1;
LABEL_22:
      v1 = 0LL;
      while ( v8 )
      {
        v6 = *(unsigned int *)(v8 + 136);
        if ( *(_DWORD *)(v8 + 136)
          && v6 + (unsigned __int64)*(unsigned int *)(v8 + 132) >= 0x200
          && (*(_DWORD *)(v8 + 140) & 1) == 0 )
        {
          v4 = (__int64 *)(48LL * *(_QWORD *)(v8 + 24) - 0x58000000000LL);
          v5 = 48LL * *(_QWORD *)(v8 + 32) - 0x58000000000LL;
          break;
        }
        v12 = *(_QWORD **)(v8 + 8);
        v13 = v8;
        if ( v12 )
        {
          do
          {
            v8 = (unsigned __int64)v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
        else
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v8 || *(_QWORD *)v8 == v13 )
              break;
            v13 = v8;
          }
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
      if ( !v8 )
        break;
      if ( v6 )
      {
        v14 = v4 + 3;
        while ( 1 )
        {
          if ( (unsigned __int64)v4 > v5 )
            goto LABEL_51;
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( *v14 < 0 );
          }
          v15 = (__int64)(v14 + 0xAFFFFFFFFDLL) / 48;
          if ( v15 > 0xFFFFFFFFFLL
            || (*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
            || !MiIsPfnFromSlabAllocation((__int64)v4) )
          {
            break;
          }
          if ( (*((_BYTE *)v14 + 10) & 7) != 2 || *((_WORD *)v14 + 4) || *v4 >= 0 )
          {
            if ( !MiIsFreeSlabPage((__int64)v4) )
              break;
          }
          else
          {
            MiUnlinkPageFromList((ULONG_PTR)v4, 0);
            MiDiscardTransitionPteEx((ULONG_PTR)v4, 0);
            --v6;
          }
LABEL_50:
          _InterlockedAnd64(v14, 0x7FFFFFFFFFFFFFFFuLL);
          v4 += 6;
          v14 += 6;
          if ( !v6 )
            goto LABEL_51;
        }
        v6 = 0LL;
        goto LABEL_50;
      }
LABEL_51:
      v19 = ((__int64)((unsigned __int128)((__int64)(v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
          + ((unsigned __int64)((unsigned __int128)((__int64)(v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
          + 1;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      v3 = (volatile LONG *)(a1 + 16);
      CurrentIrql = 17;
    }
    while ( *(_QWORD *)(a1 + 64) );
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
      __writecr8(CurrentIrql);
    }
  }
}
