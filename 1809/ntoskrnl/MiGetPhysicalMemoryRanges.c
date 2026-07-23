/*
 * XREFs of MiGetPhysicalMemoryRanges @ 0x1406DC09C
 * Callers:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1406DC044 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14075C870 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     MiLockDynamicMemoryShared @ 0x1400A8874 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1400A88A0 (MiUnlockDynamicMemoryShared.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x140141BD0 (MiDereferencePageRuns.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiGetFileOnlyRanges @ 0x1402A6698 (MiGetFileOnlyRanges.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetPhysicalMemoryRanges(ULONG_PTR *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int *v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  char *v9; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // rdi
  __int64 *v13; // rdx
  __int64 v14; // rax
  char *FileOnlyRanges; // rax
  size_t v17; // rsi
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v19; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread;
  if ( a2 )
    MiLockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
  v5 = (unsigned int *)MiReferencePageRuns((__int64)a1, 0);
  v6 = (__int64)v5;
  if ( v5 )
    v7 = *v5 & (unsigned __int64)-(__int64)(a1[890] != 0);
  else
    v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v18 = 0LL;
  if ( a2 && a1 == &MiSystemPartition )
  {
    FileOnlyRanges = MiGetFileOnlyRanges(&v18);
    v8 = v18;
    v9 = FileOnlyRanges;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v8 + v7 + 1), 0x68506D4Du);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = PoolWithTag;
    if ( v7 )
    {
      v13 = (__int64 *)(v6 + 24);
      do
      {
        *v12 = *(v13 - 1) << 12;
        v14 = *v13;
        v13 += 2;
        v12[1] = v14 << 12;
        v12 += 2;
        --v7;
      }
      while ( v7 );
    }
    if ( v8 )
    {
      v17 = 16 * v8;
      memmove(v12, v9, v17);
      v12 = (_QWORD *)((char *)v12 + v17);
    }
    *v12 = 0LL;
    v12[1] = 0LL;
    CurrentThread = v19;
  }
  if ( a2 )
    MiUnlockDynamicMemoryShared((__int64)a1, (__int64)CurrentThread);
  if ( v6 )
    MiDereferencePageRuns(v6);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
