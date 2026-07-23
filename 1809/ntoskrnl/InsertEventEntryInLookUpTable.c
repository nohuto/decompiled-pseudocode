/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140012AF4
 * Callers:
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     PnpTraceInterruptUsage @ 0x14016DBDC (PnpTraceInterruptUsage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     RunningHash @ 0x140012E2C (RunningHash.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     EnableFlushTimer @ 0x140127DF0 (EnableFlushTimer.c)
 *     CreateNewEventEntry @ 0x140129AC8 (CreateNewEventEntry.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  _WORD *v8; // r15
  ULONG_PTR BugCheckParameter4; // r11
  char v10; // r14
  unsigned __int8 v11; // cl
  __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // r11
  unsigned int v15; // r12d
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r8d
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v21; // r14
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r10
  signed __int64 v25; // rsi
  unsigned __int8 v26; // r9
  signed __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r10d
  volatile signed __int64 *v30; // r8
  unsigned int v31; // edi
  unsigned int v33; // edi
  __int64 v34; // r15
  __int64 v35; // rax
  int v36; // eax
  unsigned int NewEventEntry; // eax
  unsigned int v38; // eax
  signed __int64 v39; // rax
  volatile signed __int64 v40; // rtt
  __int64 v41; // rdx
  unsigned __int8 v42; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v44; // [rsp+40h] [rbp-68h] BYREF
  signed __int64 v45; // [rsp+48h] [rbp-60h] BYREF
  __int64 CurrentIrql; // [rsp+50h] [rbp-58h]
  unsigned int v47; // [rsp+B0h] [rbp+8h]
  char v49; // [rsp+C0h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 48);
  v45 = 0LL;
  v47 = 0;
  v44 = 0;
  v8 = a2;
  RunningHash(&v44, a2, 2LL);
  v10 = a5;
  v11 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v12 = a4 + 16LL * v11;
    v13 = (unsigned __int8)(a3 - v11);
    do
    {
      RunningHash(&v44, *(_QWORD *)v12, *(unsigned int *)(v12 + 8));
      v12 = v14 + 16;
      --v13;
    }
    while ( v13 );
    BugCheckParameter4 = 0LL;
  }
  v15 = 32769 * ((9 * v44) ^ ((unsigned int)(9 * v44) >> 11));
  v16 = ((unsigned __int8)(9 * v44) ^ (unsigned __int8)((unsigned int)(9 * v44) >> 11)) & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) != (_BYTE)BugCheckParameter4 )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, BugCheckParameter4);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v17 = KeAbPreAcquire(v5 + 272, 0LL);
      v18 = 17;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 272), (_RTL_BALANCED_NODE *)v17, v5 + 272);
      v19 = 0;
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v49 = 0;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v5 + 373) != (_BYTE)BugCheckParameter4 )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, BugCheckParameter4);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v19 = 0;
  v49 = 1;
LABEL_12:
  for ( i = (volatile signed __int64 *)(v5 + 8 * v16);
        ;
        i = (volatile signed __int64 *)((((__int64)v18 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v25) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v31 = -1073741789;
        goto LABEL_26;
      }
      if ( !v45 )
      {
        LOBYTE(v18) = *(_BYTE *)(v5 + 373);
        LOBYTE(v19) = a3;
        NewEventEntry = CreateNewEventEntry(v18, (_DWORD)v8, v19, a4, v10, v15, (__int64)&v45);
        v19 = 0;
        v47 = NewEventEntry;
        if ( !v45 )
        {
          v31 = NewEventEntry;
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_26;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v45, 0LL) )
      {
        v45 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368), 0LL);
        v38 = *(_DWORD *)(v5 + 256);
        v31 = v47;
        if ( *(_DWORD *)(v5 + 304) < v38 )
          *(_DWORD *)(v5 + 304) = v38;
        goto LABEL_26;
      }
    }
    v21 = *i;
    v22 = *(_DWORD *)(*i + 40);
    if ( v15 != v22 )
    {
      v23 = v15;
LABEL_16:
      v18 = v23 - v22;
LABEL_17:
      v24 = a4;
      goto LABEL_18;
    }
    LOWORD(v23) = *v8;
    LOWORD(v22) = *(_WORD *)v21;
    if ( *v8 != *(_WORD *)v21 )
    {
      v22 = (unsigned __int16)v22;
      v23 = (unsigned __int16)v23;
      goto LABEL_16;
    }
    v33 = *(unsigned __int8 *)(v21 + 45) + 2;
    if ( v33 >= a3 )
    {
LABEL_39:
      v18 = 0;
      goto LABEL_17;
    }
    v34 = *(_QWORD *)(v21 + 16);
    while ( 1 )
    {
      v24 = a4;
      v35 = 16LL * v33;
      v18 = *(_DWORD *)(v35 + a4 + 8) - *(_DWORD *)(v35 + v34 + 8);
      if ( v18 )
        break;
      v36 = memcmp(*(const void **)(v35 + a4), *(const void **)(v35 + v34), *(unsigned int *)(v35 + a4 + 8));
      v19 = 0;
      v18 = v36;
      if ( v36 )
        goto LABEL_17;
      if ( ++v33 >= a3 )
        goto LABEL_39;
    }
LABEL_18:
    if ( !v18 )
      break;
    v8 = a2;
    v25 = v21 + 32;
    v10 = a5;
  }
  if ( v21 )
  {
    v26 = 2;
    if ( a5 )
    {
      do
      {
        v27 = **(_QWORD **)(v24 + 16LL * v26);
        v28 = *(_QWORD *)(v21 + 16);
        v29 = *(unsigned __int8 *)(v28 + 16LL * v26 + 13);
        v30 = *(volatile signed __int64 **)(v28 + 16LL * v26);
        if ( v29 == 113 )
        {
          _InterlockedExchangeAdd64(v30, v27);
        }
        else if ( (unsigned int)(v29 - 114) <= 1 )
        {
          do
          {
            v39 = *v30;
            if ( v29 == 114 )
            {
              if ( v27 >= v39 )
                break;
            }
            else if ( v27 <= v39 )
            {
              break;
            }
            v40 = *v30;
          }
          while ( v40 != _InterlockedCompareExchange64(v30, v27, v39) );
        }
        v24 = a4;
        ++v26;
      }
      while ( v26 < (unsigned int)a5 + 2 );
    }
  }
  v31 = v47;
LABEL_26:
  if ( v49 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    v42 = CurrentIrql;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v41);
      }
      __writecr8(v42);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 272);
    KeAbPostRelease(v5 + 272);
  }
  if ( v45 )
    ExFreePoolWithTag(*(PVOID *)(v45 + 16), 0);
  return v31;
}
