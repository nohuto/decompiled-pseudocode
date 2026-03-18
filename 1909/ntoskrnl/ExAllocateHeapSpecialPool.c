/*
 * XREFs of ExAllocateHeapSpecialPool @ 0x14033E988
 * Callers:
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpSegAlloc @ 0x14005FDE0 (RtlpHpSegAlloc.c)
 *     MiDeterminePoolType @ 0x140061B00 (MiDeterminePoolType.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400F41FC (ExpInsertPoolTrackerExpansion.c)
 *     ExGetHeapFromType @ 0x1400F6384 (ExGetHeapFromType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwTracePool @ 0x14032D9B4 (EtwTracePool.c)
 */

unsigned __int64 __fastcall ExAllocateHeapSpecialPool(int a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // edi
  __int64 v4; // r14
  int v6; // ecx
  unsigned __int8 CurrentIrql; // dl
  __int64 HeapFromType; // rax
  _WORD *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  char v12; // bl
  size_t v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // r9
  unsigned int v22; // esi
  unsigned int v23; // r11d
  volatile signed __int32 v24; // r8d
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rax
  int v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v34; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  v6 = a1 & 1;
  if ( !v6 && (v3 & 0x200) == 0 && (ExpPoolFlags & 0x400) != 0 )
    v3 |= 0x200u;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v6 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v3, a2, 0x30uLL);
  HeapFromType = ExGetHeapFromType(v3, 0x80000000, 1);
  v9 = RtlpHpSegAlloc(HeapFromType + 256, 0x1000uLL, 4096LL, 4096LL, 4u);
  v10 = (unsigned __int64)v9;
  if ( !v9 )
    return 0LL;
  v12 = MEMORY[0xFFFFF78000000320];
  memset(v9 + 8, MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v13 = a2 - 8;
  if ( (v3 & 0x40) == 0 )
    v13 = a2;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_DWORD *)v10 = v13;
  *(_BYTE *)(v10 + 2) = v12 | 1;
  *(_DWORD *)(v10 + 4) = v4;
  if ( (v3 & 0x40) != 0 )
    *(_DWORD *)v10 |= 0x4000u;
  v11 = (v10 - v13 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0x400) != 0 )
    memset((void *)((v10 - v13 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v13);
  v14 = MiDeterminePoolType(v10);
  v15 = 0;
  v16 = 8LL;
  if ( v14 != 32 )
    v15 = v14;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)v4 == PoolHitTag )
    __debugbreak();
  v17 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v15, v4, v10, v13);
  v18 = v15 & 0x20;
  if ( (v15 & 0x20) != 0 )
  {
    v21 = ExpSessionPoolTrackTable;
    v19 = ExpSessionPoolTrackTableMask;
    v20 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v17) = KeGetPcr()->Prcb.Number;
    v19 = PoolTrackTableMask;
    v20 = PoolTrackTableSize;
    v21 = (__int64)*(&ExPoolTagTables + v17);
  }
  v32 = v20;
  v30 = v19;
  v31 = v21;
  v22 = v19 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v23 = v22;
  v34 = v22;
  while ( 1 )
  {
    v27 = (volatile signed __int32 *)(v21 + 56LL * v22);
    if ( *v27 == (_DWORD)v4 )
      break;
    if ( *v27 )
      goto LABEL_40;
    if ( !v18 )
    {
      v24 = *(_DWORD *)(PoolTrackTable + 56LL * v22);
      if ( v24 )
      {
        *v27 = v24;
        goto LABEL_41;
      }
      v19 = v30;
    }
    if ( v22 == v20 - 1 )
    {
LABEL_40:
      v22 = v19 & (v22 + 1);
      if ( v22 == v23 )
      {
        ExpInsertPoolTrackerExpansion(v4, v13, v15);
        return v11;
      }
    }
    else if ( v18 )
    {
      _InterlockedCompareExchange(v27, v4, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(PoolTrackTable + 56LL * v22) )
      {
        *(_DWORD *)(PoolTrackTable + 56LL * v22) = v4;
        *v27 = v4;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(OldIrql);
      v18 = v15 & 0x20;
      v21 = v31;
      v23 = v34;
    }
LABEL_41:
    v19 = v30;
    v20 = v32;
  }
  if ( (v15 & 1) != 0 )
  {
    v28 = 10LL;
  }
  else
  {
    v28 = 4LL;
    v16 = 2LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v27[v28]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v27[v16], v13);
  return v11;
}
