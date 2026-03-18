/*
 * XREFs of EtwpQueueNotification @ 0x140693858
 * Callers:
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     EtwpAddDataSource @ 0x140693AB8 (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x1406942E8 (EtwpReleaseQueueEntry.c)
 *     PsChargeProcessWakeCounter @ 0x1406EBAF0 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall EtwpQueueNotification(PVOID Object, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int16 v5; // r12
  char v8; // r13
  __int64 v9; // r14
  PVOID PoolWithTag; // rax
  _QWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  struct _KEVENT *v17; // rcx
  void *v18; // rbx
  unsigned int v19; // edx

  v3 = 0;
  v5 = *(_WORD *)(a3 + 98) & 0x100;
  v8 = 1;
  v9 = EtwpAddDataSource();
  if ( v9 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u), (v11 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v11[2] = a2;
    v11[3] = a3;
    *((_WORD *)v11 + 24) = *(_WORD *)(a3 + 96);
    *((_DWORD *)v11 + 13) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v18 = *(void **)(a2 + 24);
    *((_DWORD *)v11 + 13) |= 2u;
    ObfReferenceObject(v18);
    v11[4] = v18;
    v11[5] = PsChargeProcessWakeCounter(Object);
    v19 = 0;
    v3 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * v19 + 48), (signed __int64)v11, 0LL) )
    {
      if ( ++v19 >= 4 )
        goto LABEL_18;
    }
    *((_WORD *)v11 + 25) = v19;
    v3 = 0;
LABEL_18:
    if ( v3 < 0 )
    {
      EtwpReleaseQueueEntry(v11);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
      v13 = (_QWORD *)(v9 + 24);
      v14 = *(_QWORD **)(v9 + 24);
      if ( v14 != (_QWORD *)(v9 + 24) )
      {
        while ( (v5 != 0) != (*(_BYTE *)(v14[3] + 99LL) & 1) )
        {
          v14 = (_QWORD *)*v14;
          if ( v14 == v13 )
            goto LABEL_7;
        }
        v8 = 0;
      }
LABEL_7:
      v15 = *(_QWORD **)(v9 + 32);
      if ( (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v11 = v13;
      v11[1] = v15;
      *v15 = v11;
      *(_QWORD *)(v9 + 32) = v11;
      if ( v8 )
      {
        if ( v5 )
          v17 = *(struct _KEVENT **)(v9 + 8);
        else
          v17 = *(struct _KEVENT **)v9;
        if ( v17 )
          KeSetEvent(v17, 1, 0);
      }
      ExReleasePushLockEx(v9 + 16, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
