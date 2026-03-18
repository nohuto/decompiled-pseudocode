/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x14008A8AC
 * Callers:
 *     _TlgWriteAgg @ 0x14008A7EC (_TlgWriteAgg.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ComputeEventEntryHash @ 0x14008AC64 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x14008ADC8 (CompareEventEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     EnableFlushTimer @ 0x140113A7C (EnableFlushTimer.c)
 *     CreateNewEventEntry @ 0x14012A2E4 (CreateNewEventEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r14
  unsigned int v7; // r13d
  int v8; // r15d
  volatile signed __int64 *v9; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // r14
  int SessionId; // eax
  int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  char v18; // bp
  volatile signed __int64 *v19; // rsi
  char v20; // r12
  volatile signed __int64 v21; // rsi
  int v22; // eax
  unsigned __int8 v23; // r9
  __int64 v24; // rbx
  signed __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r10d
  volatile signed __int64 *v28; // r8
  unsigned int NewEventEntry; // eax
  unsigned int v31; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  signed __int64 v33; // rax
  volatile signed __int64 v34; // rtt
  unsigned __int8 v35; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v37; // [rsp+48h] [rbp-70h] BYREF
  __int64 v38; // [rsp+50h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-60h]
  int v40; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+10h]
  char v42; // [rsp+D0h] [rbp+18h]
  __int64 v43; // [rsp+D8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  LOBYTE(a2) = a3;
  v6 = a5;
  LOBYTE(a1) = a5;
  v37 = 0LL;
  v38 = v5;
  v7 = 0;
  v8 = ComputeEventEntryHash(a1, a2, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v40 = 0;
      v9 = (volatile signed __int64 *)(v5 + 272);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5 + 272, KeGetCurrentIrql(), 0LL);
      LOBYTE(v11) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v11 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v13 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5 + 272);
          goto LABEL_49;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        LOBYTE(v11) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
      }
      v12 = v11;
      _BitScanForward((unsigned int *)&v11, (unsigned __int8)v11);
      CurrentThread->AbEntrySummary = v12 & ~(1 << v11);
      v13 = (__int64)&CurrentThread->LockEntries[v11];
      if ( v13 )
      {
        if ( (unsigned __int64)v9 >= 0xFFFF800000000000uLL
          && byte_140467440[(((unsigned __int64)v9 >> 39) & 0x1FF) - 256] == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v13 + 40) = SessionId;
        *(_QWORD *)(v13 + 32) = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_10;
      }
LABEL_49:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 272, &v40);
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      LODWORD(v17) = 17;
      if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v5 + 272, v13, v5 + 272);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v6 = a5;
      v18 = 0;
      goto LABEL_18;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v18 = 1;
LABEL_18:
  v19 = (volatile signed __int64 *)(v5 + 8LL * (v8 & 0x1F));
  v20 = v42;
  while ( 1 )
  {
    if ( !*v19 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v7 = -1073741789;
        goto LABEL_31;
      }
      if ( !v37 )
      {
        LOBYTE(v15) = v20;
        LOBYTE(v17) = *(_BYTE *)(v5 + 373);
        NewEventEntry = CreateNewEventEntry(v17, v41, v15, v43, v6, v8, (__int64)&v37);
        v7 = NewEventEntry;
        if ( !v37 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_31;
        }
      }
      if ( !_InterlockedCompareExchange64(v19, v37, 0LL) )
      {
        v37 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v31 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v31 )
          *(_DWORD *)(v5 + 304) = v31;
        goto LABEL_31;
      }
    }
    v21 = *v19;
    v17 = *(unsigned int *)(v21 + 40);
    if ( v8 == (_DWORD)v17 )
    {
      LOBYTE(v17) = v20;
      v22 = CompareEventEntry(v17, v43, v21);
    }
    else
    {
      v22 = v8 - v17;
    }
    if ( !v22 )
      break;
    v19 = (volatile signed __int64 *)((((__int64)v22 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v21 + 32);
  }
  if ( v21 )
  {
    v23 = 2;
    if ( v6 )
    {
      v24 = v43;
      do
      {
        v25 = **(_QWORD **)(v24 + 16LL * v23);
        v26 = *(_QWORD *)(v21 + 16);
        v27 = *(unsigned __int8 *)(v26 + 16LL * v23 + 13);
        v28 = *(volatile signed __int64 **)(v26 + 16LL * v23);
        if ( v27 == 113 )
        {
          _InterlockedExchangeAdd64(v28, v25);
        }
        else if ( (unsigned int)(v27 - 114) <= 1 )
        {
          do
          {
            v33 = *v28;
            if ( v27 == 114 )
            {
              if ( v25 >= v33 )
                break;
            }
            else if ( v25 <= v33 )
            {
              break;
            }
            v34 = *v28;
          }
          while ( v34 != _InterlockedCompareExchange64(v28, v25, v33) );
        }
        ++v23;
      }
      while ( v23 < (unsigned int)v6 + 2 );
      v5 = v38;
    }
  }
LABEL_31:
  if ( v18 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    v35 = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v35);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 272);
    KeAbPostRelease(v5 + 272);
  }
  if ( v37 )
    ExFreePoolWithTag(*(PVOID *)(v37 + 16), 0);
  return v7;
}
