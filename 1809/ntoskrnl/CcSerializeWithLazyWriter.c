/*
 * XREFs of CcSerializeWithLazyWriter @ 0x1401B2EE4
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140021AC0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14007EE50 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

char __fastcall CcSerializeWithLazyWriter(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rbx
  _SLIST_ENTRY *v6; // rbx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  if ( (*(_DWORD *)(a2 + 152) & 0x20) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    v4 = *(_QWORD *)(a2 + 496);
    if ( v4 )
    {
      v6 = (_SLIST_ENTRY *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
      Next = v6->Next;
      if ( *(&v6->Next->Next + 1) != v6 || (v8 = (_SLIST_ENTRY **)*((_QWORD *)&v6->Next + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = Next;
      *((_QWORD *)&Next->Next + 1) = v8;
      *((_QWORD *)&v6->Next + 1) = 0LL;
      v6->Next = 0LL;
      *(_QWORD *)(a2 + 496) = 0LL;
      *(_DWORD *)(a2 + 152) &= ~0x20u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      CcFreeWorkQueueEntry(v6);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 0;
    }
  }
  return v3;
}
