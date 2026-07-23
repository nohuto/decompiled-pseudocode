/*
 * XREFs of CcWriteBehind @ 0x1400D621C
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x14001B334 (CcWaitForUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rsi
  __int64 Partition; // rbx
  int v7; // eax
  _QWORD *v8; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD v10[7]; // [rsp+30h] [rbp-A8h] BYREF
  char v11; // [rsp+68h] [rbp-70h]
  char v12; // [rsp+A8h] [rbp-30h]
  __int64 v13; // [rsp+B0h] [rbp-28h]
  __int64 v14; // [rsp+F0h] [rbp+18h] BYREF

  v4 = 0LL;
  Partition = CcGetPartition((_QWORD *)a1, a2, a3);
  v7 = CcAllocateWorkQueueEntry(Partition, &v14);
  v8 = (_QWORD *)v14;
  if ( v7 < 0
    || (*(_BYTE *)(v14 + 120) = 2,
        v8[1] = 0LL,
        *v8 = 0LL,
        v8[2] = a1,
        v8[3] = a2,
        *(_DWORD *)(Partition + 896) >= *(_DWORD *)(Partition + 200))
    || *(_QWORD *)(Partition + 864)
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || *(_BYTE *)(Partition + 902)
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u), (v4 = PoolWithTag) == 0LL) )
  {
    if ( !v8 )
    {
      v13 = Partition;
      v8 = v10;
      v12 = 2;
      v10[1] = 0LL;
      v10[0] = 0LL;
      v10[2] = a1;
      v10[3] = a2;
      v11 = 0;
    }
    *((_BYTE *)v8 + 56) = 0;
    CcWriteBehindInternal((__int64)v8);
    if ( v8 == v10 )
      v8 = 0LL;
  }
  else
  {
    PoolWithTag[7] = Partition;
    *((_DWORD *)PoolWithTag + 8) = 1;
    *((_BYTE *)v8 + 56) = 1;
    *((_WORD *)v8 + 16) = 1;
    *((_BYTE *)v8 + 34) = 6;
    *((_DWORD *)v8 + 9) = 0;
    v8[6] = v8 + 5;
    v8[5] = v8 + 5;
    PoolWithTag[2] = CcWriteBehindInternal;
    PoolWithTag[3] = v8;
    *PoolWithTag = 0LL;
    ExQueueWorkItemToPartition(PoolWithTag, 38, 0xFFFFFFFF, *(_QWORD *)(PoolWithTag[7] + 8LL));
    KeWaitForSingleObject(v8 + 4, Executive, 0, 0, 0LL);
  }
  if ( v8 )
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x71576343u);
}
