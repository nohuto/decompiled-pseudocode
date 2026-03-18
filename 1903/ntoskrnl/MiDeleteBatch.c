/*
 * XREFs of MiDeleteBatch @ 0x140028CD0
 * Callers:
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int8 i; // si
  signed __int64 v6; // rdi
  __int64 v7; // r8
  char v8; // r10
  __int64 v9; // r11
  ULONG_PTR v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  _BYTE *v14; // r14
  __int64 v15; // rax
  volatile signed __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  ULONG_PTR BugCheckParameter4; // r8
  ULONG_PTR v20; // rdx
  unsigned __int8 j; // di
  __int64 v22; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *a1 )
  {
    v3 = 0LL;
    v25 = *((_QWORD *)a1 + 2);
    v4 = *(_QWORD *)(qword_140466188
                   + 8
                   * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v25) >> 12) & 0xFFFFFFFFFLL)
                                 - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 8480);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 8480));
    for ( i = 0; i < *a1; ++i )
    {
      v25 = *(_QWORD *)&a1[8 * i + 16];
      v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v25) >> 12) & 0xFFFFFFFFFLL);
      v10 = v6 - 0x58000000000LL;
      v12 = v11;
      v13 = *(unsigned __int8 *)(v6 + v11);
      v14 = (_BYTE *)(v6 + v12);
      if ( (v13 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, v6 / 48, v13 & 7, v9 & *(_QWORD *)(v6 - 0x57FFFFFFFE8LL));
      v15 = 0LL;
      if ( (v8 & 0x42) != 0 && (v13 & 0x10) == 0 )
      {
        v7 = (unsigned __int8)v13;
        LOBYTE(v7) = ((*(_QWORD *)(v6 - 0x57FFFFFFFF0LL) & 0x400LL) == 0) & ~((unsigned __int8)v13 >> 3);
        if ( (_BYTE)v7 )
        {
          v15 = MiCapturePageFileInfoInline(v6 - 0x57FFFFFFFF0LL, 1LL);
          v13 = (unsigned __int8)*v14;
          v9 = 0x3FFFFFFFFFFFFFFFLL;
        }
        LOBYTE(v13) = v13 | 0x10;
        *v14 = v13;
      }
      *(_QWORD *)&a1[8 * i + 16] = v15;
      v16 = (volatile signed __int64 *)(v6 - 0x57FFFFFFFE8LL);
      v17 = *v16 ^ v9 & (*v16 ^ (*v16 - 1));
      *v16 = v17;
      if ( (v17 & v9) == 0
        && (unsigned int)MiPfnShareCountIsZero(v10, 1uLL, v7, v13) == 3
        && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 )
      {
        ++v3;
      }
      _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v18 = *((_QWORD *)a1 + 1);
    if ( a1[1] == 1 )
    {
      MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
    }
    else
    {
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
    }
    BugCheckParameter4 = *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v18 + 0x58000000000LL) / 48, *(_BYTE *)(v18 + 34) & 7, BugCheckParameter4);
    v20 = *a1;
    if ( BugCheckParameter4 < v20 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v18 + 0x58000000000LL) / 48, *(_BYTE *)(v18 + 34) & 7, BugCheckParameter4);
    *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - v20)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    for ( j = 0; j < *a1; ++j )
    {
      v22 = *(_QWORD *)&a1[8 * j + 16];
      if ( v22 )
        MiReleasePageFileInfo(v4, v22, 1LL);
    }
    result = v3;
    *a1 = 0;
  }
  return result;
}
