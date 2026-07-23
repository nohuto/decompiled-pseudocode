/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x140861A88
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x140090C58 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140090F90 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(unsigned __int16 *a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *i; // rdi
  _QWORD **v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  unsigned __int16 *v13[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v13, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v13[0] = a1;
  MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  v6 = *a2;
  i = 0LL;
  while ( v6 )
  {
    i = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( i )
  {
    v8 = (_QWORD **)i[1];
    v9 = (__int64)i;
    v10 = i;
    if ( v8 )
    {
      v11 = *v8;
      for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
        i = v11;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v10 )
          break;
        v10 = i;
      }
    }
    MiActOnPartitionNodePages(v9, 3u, v13);
    if ( SHIDWORD(v13[2]) < 0 )
    {
      v5 = HIDWORD(v13[2]);
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  return v5;
}
