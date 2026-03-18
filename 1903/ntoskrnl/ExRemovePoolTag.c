/*
 * XREFs of ExRemovePoolTag @ 0x140117888
 * Callers:
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpFreePoolChecks @ 0x140117AE8 (ExpFreePoolChecks.c)
 *     MmIsNonPagedPoolNx @ 0x140117B28 (MmIsNonPagedPoolNx.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140126754 (ExpRemovePoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter2, _DWORD *a2, unsigned __int64 *a3, int a4)
{
  ULONG_PTR v4; // r13
  unsigned int v5; // ebx
  __int64 v9; // rbp
  KIRQL v10; // al
  int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // r15
  int v17; // r12d
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // r11d
  unsigned int v22; // edx
  __int64 v23; // r10
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 result; // rax
  int v28; // r10d
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE *v30; // r9
  __int64 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+80h] [rbp+8h]
  KIRQL v34; // [rsp+98h] [rbp+20h]

  v4 = a4;
  v5 = 0;
  v31 = a4 & 1;
  v9 = PoolVector[v31];
  if ( (a4 & 1) == 0 && !(unsigned int)MmIsNonPagedPoolNx(BugCheckParameter2) )
    v9 += 256LL;
  v10 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v11 = 1;
  v34 = v10;
  v12 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (PoolBigPageTableSize - 1);
  while ( *(_QWORD *)(PoolBigPageTable + 24LL * v12) != BugCheckParameter2 )
  {
    if ( ++v12 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v11 )
        goto LABEL_31;
      v12 = 0;
      v11 = 0;
    }
  }
  v13 = PoolBigPageTable + 24LL * v12;
  if ( !v13 )
LABEL_31:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
  v14 = *(_DWORD *)(v13 + 8);
  *a2 = v14;
  v15 = *(_QWORD *)(v13 + 16);
  *a3 = v15;
  if ( v14 == 1819242320 )
  {
    v16 = 0;
    LOWORD(v17) = 0;
  }
  else
  {
    v16 = *(_BYTE *)(v13 + 12);
    v17 = *(_DWORD *)(v13 + 12) >> 20;
  }
  _InterlockedDecrement(&ExpPoolBigEntriesInUse);
  _InterlockedIncrement64((volatile signed __int64 *)v13);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v34);
  v18 = (unsigned int)*a2;
  if ( (_DWORD)v18 == PoolHitTag )
    __debugbreak();
  v19 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v19 = EtwTracePool(3618, v4, v18, BugCheckParameter2, v15);
  v20 = 8LL;
  if ( (v4 & 0x20) != 0 )
  {
    v21 = ExpSessionPoolTrackTableMask;
    v32 = ExpSessionPoolTrackTable;
  }
  else
  {
    LODWORD(v19) = KeGetPcr()->Prcb.Number;
    v21 = PoolTrackTableMask;
    v32 = (__int64)*(&ExPoolTagTables + v19);
  }
  v22 = v21 & ((40543 * v18) ^ ((unsigned __int64)(40543 * v18) >> 32));
  while ( 1 )
  {
    v23 = 56LL * v22;
    v24 = (_DWORD *)(v23 + v32);
    v25 = *(_DWORD *)(v23 + v32);
    if ( v25 == (_DWORD)v18 )
      break;
    if ( v25 || (v4 & 0x20) != 0 || (v28 = *(_DWORD *)(v23 + PoolTrackTable)) == 0 )
    {
      v22 = v21 & (v22 + 1);
      if ( v22 == (v21 & ((40543 * (int)v18) ^ ((unsigned __int64)(40543 * v18) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v18, v15, (unsigned int)v4);
        goto LABEL_21;
      }
    }
    else
    {
      *v24 = v28;
    }
  }
  if ( (_DWORD)v31 )
  {
    v26 = 12LL;
  }
  else
  {
    v26 = 6LL;
    v20 = 2LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v24[v26]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v24[v20], -(__int64)v15);
LABEL_21:
  if ( v16 )
  {
    v30 = (_BYTE *)(BugCheckParameter2 + v15 - (unsigned __int16)v17);
    if ( (_WORD)v17 )
    {
      do
      {
        if ( *v30 != v16 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v30, v16);
        ++v30;
        ++v5;
      }
      while ( v5 < (unsigned __int16)v17 );
    }
  }
  result = ExpFreePoolChecks(BugCheckParameter2);
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 128));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 152), v15);
  return result;
}
