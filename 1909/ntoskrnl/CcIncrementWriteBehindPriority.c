/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x14027CA5C
 * Callers:
 *     CcLazyWriteScan @ 0x14007F194 (CcLazyWriteScan.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 */

void __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 *v8; // rdx
  _QWORD *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 496);
  v2 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v4 = *(_QWORD *)(a1 + 528);
  if ( v1 && (v1 & 1) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 192);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v4 + 192));
    v5 = *(_QWORD *)(a1 + 496);
    if ( !v5 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return;
    }
    *(_QWORD *)(a1 + 496) = v5 | 1;
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v7 = *(_QWORD **)(v5 + 8);
      if ( *v7 == v5 )
      {
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)v5 = 0LL;
        v8 = *(unsigned __int64 **)(v4 + 232);
        if ( *v8 == v4 + 224 )
        {
          *(_QWORD *)v5 = v4 + 224;
          *(_QWORD *)(v5 + 8) = v8;
          *v8 = v5;
          *(_QWORD *)(v4 + 232) = v5;
          if ( *(_BYTE *)(v4 + 312)
            || (v9 = (_QWORD *)(v4 + 208), v10 = *(__int64 **)(v4 + 208), v10 == (__int64 *)(v4 + 208)) )
          {
LABEL_15:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v2 )
            {
              *v2 = 0LL;
              ExQueueWorkItemToPartition(v2, 0, 0xFFFFFFFF, *(_QWORD *)(v4 + 8));
            }
            return;
          }
          v2 = *(_QWORD **)(v4 + 208);
          if ( (_QWORD *)v10[1] == v9 )
          {
            v11 = *v10;
            if ( *(_QWORD **)(v11 + 8) == v2 )
            {
              *v9 = v11;
              *(_QWORD *)(v11 + 8) = v9;
              ++*(_DWORD *)(v4 + 204);
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
                __fastfail(0xEu);
              goto LABEL_15;
            }
          }
        }
      }
    }
    __fastfail(3u);
  }
}
