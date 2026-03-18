/*
 * XREFs of MiInitializePartitionHugeIoSpace @ 0x140889178
 * Callers:
 *     MiAddPartitionHugeRange @ 0x1402C180C (MiAddPartitionHugeRange.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRandomEx @ 0x14008F010 (RtlRandomEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartitionHugeIoSpace(_QWORD *a1)
{
  KSPIN_LOCK *v1; // rbp
  __int64 v3; // rbx
  SIZE_T v4; // rsi
  PVOID PoolWithTag; // rax
  void *v6; // rbx
  bool v8; // cf
  unsigned int v9; // ebx
  __int64 v10; // rdi
  ULONG v11; // eax
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 508;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 508, &LockHandle);
  v3 = a1[889];
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v3 )
  {
    v4 = 16 * (unsigned __int16)KeNumberNodes * (unsigned __int64)(unsigned int)dword_140465840[0];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x7048694Du);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v4);
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
    if ( !a1[889] )
    {
      v8 = KeNumberNodes != 0;
      a1[889] = v6;
      v9 = 0;
      v10 = a1[2];
      if ( v8 )
      {
        do
        {
          v11 = RtlRandomEx(&Seed);
          v12 = v9++;
          *(_DWORD *)(1984 * v12 + v10 + 1816) = v11;
        }
        while ( v9 < (unsigned __int16)KeNumberNodes );
      }
      v6 = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return 0LL;
}
