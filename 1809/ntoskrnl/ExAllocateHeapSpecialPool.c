/*
 * XREFs of ExAllocateHeapSpecialPool @ 0x14031EBAC
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExGetHeapFromType @ 0x1400E76B8 (ExGetHeapFromType.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall ExAllocateHeapSpecialPool(int a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // edi
  __int64 v4; // rbp
  int v6; // ecx
  unsigned __int8 CurrentIrql; // dl
  __int64 HeapFromType; // rax
  void *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  char v12; // bl
  int v13; // edi
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned int v21; // esi
  unsigned int v22; // r10d
  volatile signed __int32 v23; // edx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rdi
  int v26; // eax
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+8h]
  int v32; // [rsp+B8h] [rbp+20h]

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
  if ( v9 )
  {
    v12 = MEMORY[0xFFFFF78000000320];
    memset(v9, MEMORY[0xFFFFF78000000320] | 1, 0x1000uLL);
    v13 = v3 & 0x40;
    v14 = a2 - 8;
    if ( !v13 )
      v14 = a2;
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_DWORD *)v10 = v14;
    *(_BYTE *)(v10 + 2) = v12 | 1;
    *(_DWORD *)(v10 + 4) = v4;
    if ( v13 )
      *(_DWORD *)v10 |= 0x4000u;
    v11 = (v10 - v14 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = MiDeterminePoolType(v10);
    v16 = 0;
    if ( v15 != 32 )
      v16 = v15;
    if ( (_DWORD)v4 == PoolHitTag )
      __debugbreak();
    v17 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(0xE20u, v16, v4, v10, v14);
    if ( (v16 & 0x20) != 0 )
    {
      v20 = ExpSessionPoolTrackTable;
      v18 = ExpSessionPoolTrackTableMask;
      v19 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(v17) = KeGetPcr()->Prcb.Number;
      v18 = PoolTrackTableMask;
      v19 = PoolTrackTableSize;
      v20 = (__int64)*(&ExPoolTagTables + v17);
    }
    v29 = v19;
    v32 = v18;
    v28 = v20;
    v21 = v18 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
    v22 = v21;
    v31 = v21;
    while ( 1 )
    {
      v24 = 56LL * v21;
      v25 = (volatile signed __int32 *)(v24 + v20);
      v26 = *(_DWORD *)(v24 + v20);
      if ( v26 == (_DWORD)v4 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)((char *)v25 + ((v16 & 1) != 0 ? 0x18 : 0) + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v25 + ((v16 & 1) != 0 ? 0x18 : 0) + 8), v14);
        return v11;
      }
      if ( v26 )
        goto LABEL_33;
      if ( (v16 & 0x20) == 0 )
      {
        v23 = *(_DWORD *)(v24 + PoolTrackTable);
        if ( v23 )
        {
          *v25 = v23;
          goto LABEL_34;
        }
        v18 = v32;
      }
      if ( v21 == v19 - 1 )
      {
LABEL_33:
        v21 = v18 & (v21 + 1);
        if ( v21 == v22 )
        {
          ExpInsertPoolTrackerExpansion(v4, v14, v16);
          return v11;
        }
      }
      else if ( (v16 & 0x20) != 0 )
      {
        _InterlockedCompareExchange(v25, v4, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(56LL * v21 + PoolTrackTable) )
        {
          *(_DWORD *)(56LL * v21 + PoolTrackTable) = v4;
          *v25 = v4;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v20 = v28;
        v22 = v31;
      }
LABEL_34:
      v18 = v32;
      v19 = v29;
    }
  }
  return 0LL;
}
