/*
 * XREFs of ExInsertPoolTag @ 0x1401182E4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x140036B90 (ExpAddTagForBigPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1401160DC (ExpInsertPoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 */

__int64 __fastcall ExInsertPoolTag(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  char v8; // bl
  unsigned __int16 v9; // bp
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // esi
  int v18; // ecx
  __int64 v19; // r15
  volatile signed __int32 *v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  volatile signed __int32 v24; // ecx
  unsigned __int8 OldIrql; // bl
  void *v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v28; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+18h]

  v8 = 0;
  v9 = 0;
  if ( (a5 & 1) != 0 )
  {
    v26 = (void *)(a2 + a3);
    if ( (((_DWORD)a2 + (_DWORD)a3) & 0xFFF) != 0 )
    {
      v9 = 4096 - ((unsigned __int16)v26 & 0xFFF);
      v8 = MEMORY[0xFFFFF78000000320] | 1;
      memset(v26, MEMORY[0xFFFFF78000000320] | 1, v9);
    }
  }
  if ( a3 >= a3 + 4095 )
    return 0LL;
  v10 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)ExpAddTagForBigPages(a2, 1416523587, v10, a4, v9, v8) )
    return 0LL;
  v11 = PoolVector[a4 & 1];
  if ( (a4 & 1) == 0 && (a4 & 0x200) == 0 )
    v11 += 256LL;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 80), (int)(v10 >> 12));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 88), v10);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1416523587 )
    __debugbreak();
  v12 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v12 = EtwTracePool(3616, a4, 1416523587, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v13 = 8LL;
  if ( (a4 & 0x20) != 0 )
  {
    v16 = ExpSessionPoolTrackTable;
    v14 = ExpSessionPoolTrackTableMask;
    v15 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v12) = KeGetPcr()->Prcb.Number;
    v14 = PoolTrackTableMask;
    v15 = PoolTrackTableSize;
    v16 = (__int64)*(&ExPoolTagTables + v12);
  }
  v28 = v15;
  v17 = v14 & 0x7DA697E6;
  v30 = v16;
  v18 = v14 & 0x7DA697E6;
  while ( 1 )
  {
    v19 = 56LL * v17;
    v20 = (volatile signed __int32 *)(v19 + v16);
    v21 = *(_DWORD *)(v19 + v16);
    if ( v21 == 1416523587 )
      break;
    if ( v21 )
    {
LABEL_21:
      v16 = v30;
      v17 = v14 & (v17 + 1);
      if ( v17 == v18 )
      {
        ExpInsertPoolTrackerExpansion(0x546E6F43u, v10, a4);
        return 1LL;
      }
    }
    else
    {
      if ( (a4 & 0x20) != 0 )
        goto LABEL_27;
      v24 = *(_DWORD *)(v19 + PoolTrackTable);
      if ( v24 )
      {
        v16 = v30;
        *v20 = v24;
        v18 = v14 & 0x7DA697E6;
      }
      else
      {
        v18 = v14 & 0x7DA697E6;
LABEL_27:
        if ( v17 == v15 - 1 )
          goto LABEL_21;
        if ( (a4 & 0x20) != 0 )
        {
          _InterlockedCompareExchange(v20, 1416523587, 0);
          v16 = v30;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v19 + PoolTrackTable) )
          {
            *(_DWORD *)(v19 + PoolTrackTable) = 1416523587;
            *v20 = 1416523587;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(OldIrql);
          v15 = v28;
          v16 = v30;
          v18 = v14 & 0x7DA697E6;
        }
      }
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v22 = 10LL;
  }
  else
  {
    v13 = 2LL;
    v22 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v20[v22]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v20[v13], v10);
  return 1LL;
}
