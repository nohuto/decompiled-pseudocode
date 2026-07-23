/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x14001FC18
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140021C20 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x1401352A4 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        KIRQL *a6)
{
  signed __int16 v6; // di
  ULONG_PTR v7; // rbp
  int v8; // esi
  KIRQL v9; // r12
  __int64 v12; // r8
  __int64 v13; // rdx
  __int16 v14; // r14
  __int16 v15; // bx
  unsigned __int16 v16; // bx
  bool v17; // zf
  signed __int16 v18; // ax
  unsigned int v19; // edx
  int v21; // eax
  signed __int16 v22; // bx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v25; // r14
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v34; // [rsp+90h] [rbp+8h]
  int v35; // [rsp+98h] [rbp+10h] BYREF
  signed __int16 v36; // [rsp+A0h] [rbp+18h]
  unsigned int v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v34 = a1;
  v6 = *a2;
  v7 = BugCheckParameter2;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v12 = 1LL;
    v13 = 0x4000LL;
    while ( 1 )
    {
      v14 = v6;
      v36 = v6;
      if ( a3 <= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) != 0 )
          goto LABEL_7;
        if ( (a4 & 3) != 0 )
        {
          if ( (a4 & 2) == 0 )
            goto LABEL_7;
          v22 = v6;
LABEL_26:
          v15 = v22 | 0x4000;
        }
        else
        {
          v21 = RtlpHpSegMgrApplyLargePagePolicy(a1, 0x4000LL, 1LL);
          v13 = 0x4000LL;
          if ( v21 )
          {
            v22 = v36;
            goto LABEL_26;
          }
LABEL_7:
          v15 = v36;
        }
        a1 = v34;
        v12 = 1LL;
LABEL_9:
        v16 = a3 + v15;
        goto LABEL_10;
      }
      _mm_pause();
      v6 = *a2;
    }
    if ( v6 >= 0 )
    {
      v19 = -1073741567;
      goto LABEL_16;
    }
    v15 = v36;
    if ( a3 + (v6 & 0x7FF) )
      goto LABEL_9;
    v16 = v36 | 0x4000;
LABEL_10:
    if ( (v16 & 0x4000) != 0 )
    {
      v8 = 1;
      v9 = RtlpHpAcquireLockExclusive((volatile LONG *)v7, *(_DWORD *)(a1 + 40) & 1);
      v13 = 0x4000LL;
    }
    v18 = _InterlockedCompareExchange16(a2, v16, v6);
    v17 = v6 == v18;
    v6 = v18;
    if ( v17 )
      break;
    if ( v8 )
    {
      if ( (*(_DWORD *)(v34 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v7);
        v35 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v7, v13, v12, a4) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v25 = ++CurrentThread->AbAllocationRegionCount;
        v26 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v17 = !_BitScanReverse((unsigned int *)&v27, v26);
          if ( v17 )
            break;
          v28 = (__int64)&CurrentThread->LockEntries[v27];
          v26 &= ~(1 << v27);
          if ( (*(_BYTE *)(v28 + 26) & 1) != 0
            && (*(_DWORD *)(v28 + 32) & 1) == 0
            && (*(_QWORD *)(v28 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v28 + 40) == SessionId )
          {
            *(_BYTE *)(v28 + 26) &= ~1u;
            if ( *(_QWORD *)(v28 + 32) )
            {
              if ( v28 )
              {
                *(_BYTE *)(v28 + 32) |= 2u;
                if ( *(__int64 *)(v28 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v28);
                v35 = 0;
                v35 = *(_DWORD *)(v28 + 88) & 0x1FFFF;
                *(_DWORD *)(v28 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v28 + 25) &= ~1u;
                *(_QWORD *)(v28 + 32) = 0LL;
                v29 = (v28 - (__int64)CurrentThread - 800) / 96;
                if ( v25 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v29;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v29);
                goto LABEL_50;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, SessionId, 0LL);
LABEL_50:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, v7, &v35);
        v17 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v17
          && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v30, v31, v32);
      }
      v8 = 0;
    }
    a1 = v34;
    a4 = v37;
  }
  if ( a3 <= 0 )
  {
    v19 = (v16 >> 13) & 2 | 0xC0000100;
  }
  else if ( v14 >= 0 )
  {
    v19 = ((v16 & 0x4000) != 0) - 1073741567;
  }
  else
  {
    v19 = -1073741568;
  }
LABEL_16:
  if ( v8 )
    *a6 = v9;
  return v19;
}
