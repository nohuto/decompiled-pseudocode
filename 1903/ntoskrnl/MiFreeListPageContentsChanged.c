/*
 * XREFs of MiFreeListPageContentsChanged @ 0x1402D9250
 * Callers:
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiFreeListPageContentsChanged(unsigned __int64 a1)
{
  unsigned __int64 v2; // r8
  char v3; // di
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  volatile signed __int32 *v8; // r8
  int v9; // edi
  unsigned __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL);
  v3 = a1;
  v4 = *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8 * ((v2 >> 40) & 0x3FF)) + 2120LL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4
                                                         + 8
                                                         * (5
                                                          * (dword_140465AB0 & (unsigned int)a1 | ((unsigned int)(v2 >> 58) << byte_140465A4D) | (((v2 >> 36) & 3) << byte_140465A4E))
                                                          + 4));
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  if ( dword_14046620C == 1 )
  {
    v5 = a1 >> 5;
    v6 = a1 & 0x1F;
    LOBYTE(v7) = 1;
    v8 = (volatile signed __int32 *)(qword_140466268 + 4 * v5);
    if ( (unsigned __int64)(v6 + 1) > 0x20 )
    {
      if ( !v6 )
        goto LABEL_9;
      v9 = v3 & 0x1F;
      _InterlockedOr(v8++, ((1 << (32 - v9)) - 1) << v6);
      v7 = 1LL - (unsigned int)(32 - v9);
      if ( v7 >= 0x20 )
      {
        v10 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          *v8++ = -1;
          --v10;
        }
        while ( v10 );
      }
      if ( v7 )
LABEL_9:
        _InterlockedOr(v8, (1 << v7) - 1);
    }
    else
    {
      _InterlockedOr(v8, 1 << v6);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
