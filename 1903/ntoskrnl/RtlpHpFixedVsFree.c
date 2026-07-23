/*
 * XREFs of RtlpHpFixedVsFree @ 0x14015C870
 * Callers:
 *     <none>
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
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14031A17C (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpFixedVsFree(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned int v6; // r11d
  __int64 v7; // r12
  int v8; // r13d
  int v10; // r15d
  unsigned __int8 v11; // r14
  __m128i v12; // xmm0
  unsigned __int64 v13; // r10
  const signed __int64 *v14; // rcx
  const signed __int64 *v15; // rdx
  signed __int64 v16; // r8
  const signed __int64 *v17; // r9
  KIRQL v18; // al
  unsigned __int8 v19; // al
  bool i; // zf
  ULONG_PTR v21; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v24; // bp
  unsigned int v25; // r8d
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v33[9]; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+90h] [rbp+18h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v4 = (unsigned __int64)a3 >> 12;
  v5 = (a2 - a1) >> 12;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v11 = -1;
  }
  else
  {
    v18 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 24), *(_DWORD *)(a1 + 32));
    v6 = a3;
    v11 = v18;
  }
  v12 = *(__m128i *)(a1 + 48);
  v13 = v5 + v4 - 1;
  v33[0] = *(_QWORD *)(a1 + 48);
  v14 = (const signed __int64 *)(a1 ^ _mm_srli_si128(v12, 8).m128i_u64[0]);
  v33[1] = v14;
  if ( v13 >= v33[0] )
    goto LABEL_19;
  if ( v4 <= 1 )
  {
    if ( v4 != 1 )
      goto LABEL_19;
    v19 = _bittest64(v14, v5);
LABEL_18:
    if ( !v19 )
      goto LABEL_19;
    goto LABEL_7;
  }
  v15 = &v14[v5 >> 6];
  v16 = *v15;
  v17 = &v14[v13 >> 6];
  if ( v15 == v17 )
  {
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5 )
      goto LABEL_7;
LABEL_19:
    RtlpLogHeapFailure(8, a1, v8, v6, v7, 0LL);
    __fastfail(0x32u);
  }
  for ( i = ((-1LL << v5) & v16) == -1LL << v5; ; i = *v15 == -1 )
  {
    if ( !i )
      goto LABEL_19;
    if ( ++v15 == v17 )
      break;
  }
  if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13) & *v15) != 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13 )
  {
    v19 = 0;
    goto LABEL_18;
  }
LABEL_7:
  RtlClearBitsEx((__int64)v33, v5, v4);
  if ( !v10 )
  {
    v21 = a1 + 24;
    if ( *(_DWORD *)(a1 + 32) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
      v35 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 24) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v24 = ++CurrentThread->AbAllocationRegionCount;
      v25 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        i = !_BitScanReverse((unsigned int *)&v26, v25);
        v36 = v26;
        if ( i )
          goto LABEL_28;
        v27 = 1 << v26;
        v28 = v26;
        v29 = &CurrentThread->LockEntries[v28];
        v25 &= ~v27;
        if ( (v29->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v29->LockState.0 & 1) == 0
          && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
          && v29->LockState.SessionId == SessionId )
        {
          v29->AcquiredByte &= ~1u;
          if ( v29->LockState.0 )
            break;
        }
      }
      if ( !v29 )
      {
LABEL_28:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v21, SessionId, 0LL);
        goto LABEL_40;
      }
      v29->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v29->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode);
      v35 = v29->BoostBitmap.AllFields & 0x1FFFF;
      v29->BoostBitmap.AllFields &= 0xFFFE0000;
      v29->ThreadLocalFlags &= ~1u;
      v29->LockState.0 = 0LL;
      v30 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
      if ( v24 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v30;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
LABEL_40:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v21, &v35);
      i = CurrentThread->SpecialApcDisable++ == -1;
      if ( i && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        KiCheckForKernelApcDelivery(v31);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
