/*
 * XREFs of MmCreatePartition @ 0x140190AB0
 * Callers:
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 * Callees:
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDeletePartition @ 0x1402B4730 (MiDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A37E0 (ExAllocateCacheAwareRundownProtection.c)
 *     MiSizeMemoryListLocks @ 0x1406D1FC0 (MiSizeMemoryListLocks.c)
 *     MiCreatePfnBitMaps @ 0x14072BAB0 (MiCreatePfnBitMaps.c)
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 *     MiInitializeMemoryEvents @ 0x14072CB8C (MiInitializeMemoryEvents.c)
 *     MiAllocatePartitionId @ 0x140852EF8 (MiAllocatePartitionId.c)
 *     MiInitializePartitionThreads @ 0x1408530B0 (MiInitializePartitionThreads.c)
 */

__int64 __fastcall MmCreatePartition(_QWORD *a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  SIZE_T v5; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int16 PartitionId; // ax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v16; // ebx

  if ( a2 )
  {
    *a1 = &MiSystemPartition;
    result = 0LL;
    qword_14043DAA8 = (__int64)a1;
    return result;
  }
  v4 = MiSizeMemoryListLocks();
  v5 = v4
     + ((1984LL * (unsigned __int16)KeNumberNodes + 11727 + 40LL * (unsigned int)(2 * dword_14043B14C)) & 0xFFFFFFFFFFFFFFF0uLL)
     + 24LL * dword_14043B7B8 * (unsigned int)(unsigned __int16)KeNumberNodes
     + 16LL * (unsigned int)(2 * dword_14043B14C);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6150694Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v5);
  v8 = (unsigned __int16)KeNumberNodes;
  v7[2] = v7 + 1464;
  v9 = (__int64)&v7[248 * v8 + 1464];
  v7[264] = v9;
  v10 = v9 + 40LL * (unsigned int)dword_14043B14C;
  v7[265] = v10;
  v11 = (v10 + 40LL * (unsigned int)dword_14043B14C + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v7[517] = v11;
  v12 = v11 + 16LL * (unsigned int)dword_14043B14C;
  v7[518] = v12;
  v13 = 16LL * (unsigned int)dword_14043B14C + v12;
  v7[21] = a1;
  v7[621] = v13;
  v7[629] = v13 + v4;
  PartitionId = MiAllocatePartitionId(v7);
  if ( !PartitionId )
  {
    ExFreePoolWithTag(v7, 0);
    return 3221225495LL;
  }
  MiInitializePartition(v7, PartitionId);
  if ( !(unsigned int)MiInitializeMemoryEvents(v7)
    || !(unsigned int)MiCreatePfnBitMaps(v7, 0LL)
    || !(unsigned int)MiInitializeWorkingSetManagerParameters(v7)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v7[260] = CacheAwareRundownProtection) == 0LL) )
  {
    v16 = -1073741670;
    goto LABEL_14;
  }
  v16 = MiInitializePartitionThreads(v7);
  if ( v16 < 0 )
  {
LABEL_14:
    MiDeletePartition(v7);
    return (unsigned int)v16;
  }
  *a1 = v7;
  return (unsigned int)v16;
}
