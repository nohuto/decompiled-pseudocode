/*
 * XREFs of ExpPartitionInitialize @ 0x140755C54
 * Callers:
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExpPartitionCreatePoolInternal @ 0x140755E54 (ExpPartitionCreatePoolInternal.c)
 *     ExpWorkQueueManagerInitialize @ 0x140755FF0 (ExpWorkQueueManagerInitialize.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 */

__int64 __fastcall ExpPartitionInitialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi
  SIZE_T v4; // rdx
  unsigned int v5; // ebx
  PVOID v6; // rax
  unsigned int v7; // ebx
  PVOID v8; // rax
  unsigned __int16 v9; // si
  __int64 v10; // r14
  __int64 v11; // rcx
  int PoolInternal; // ebx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v4 = 8 * (unsigned int)(unsigned __int16)KeNumberNodes;
    *v3 = a1;
    v5 = v4;
    v6 = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x6C577845u);
    v3[1] = v6;
    if ( v6 )
    {
      memset(v6, 0, v5);
      v7 = 8 * (unsigned __int16)KeNumberNodes;
      v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6C577845u);
      v3[2] = v8;
      if ( v8 )
      {
        memset(v8, 0, v7);
        v9 = 0;
        if ( !KeNumberNodes )
        {
LABEL_12:
          *((_DWORD *)v3 + 6) = 252;
          result = 0LL;
          *(_QWORD *)(a1 + 16) = v3;
          return result;
        }
        while ( 1 )
        {
          v10 = 0LL;
          if ( (_UNKNOWN *)KeNodeBlock[v9] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v9) )
            v10 = KeNodeBlock[v9];
          *(_QWORD *)(v3[2] + 8LL * v9) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x118uLL, 0x6C577845u);
          v11 = *(_QWORD *)(v3[2] + 8LL * v9);
          if ( !v11 )
            break;
          ExpWorkQueueManagerInitialize(v11, v3, v10);
          *(_QWORD *)(v3[1] + 8LL * v9) = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6C577845u);
          if ( !*(_QWORD *)(v3[1] + 8LL * v9) )
            break;
          memset(*(void **)(v3[1] + 8LL * v9), 0, 0x40uLL);
          PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v10, 0);
          if ( PoolInternal < 0 )
            goto LABEL_13;
          PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v10, 1);
          if ( PoolInternal < 0 )
            goto LABEL_13;
          if ( ++v9 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_12;
        }
      }
    }
    PoolInternal = -1073741801;
LABEL_13:
    ExpPartitionDestroy(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)PoolInternal;
}
