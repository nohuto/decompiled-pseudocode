/*
 * XREFs of FsRtlpWaitOnIrp @ 0x140270360
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x140130800 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AC0C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x140816638 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     FsRtlpCancelWaitingIrp @ 0x14026FE58 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1405A27E0 (FsRtlCancellableWaitForSingleObject.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64),
        char *Object,
        char a7,
        _BYTE *a8)
{
  char v12; // r12
  _BYTE *v13; // rcx
  _QWORD *PoolWithTag; // rsi
  __int64 v15; // rax
  bool v16; // cl
  _QWORD **v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // edi
  NTSTATUS v20; // eax
  _QWORD *i; // rax
  _BYTE v23[7]; // [rsp+31h] [rbp-37h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-30h]
  _BYTE *v25; // [rsp+A8h] [rbp+40h]

  v12 = 1;
  v13 = v23;
  if ( a8 )
    v13 = a8;
  v25 = v13;
  *v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x40uLL, 0x6F725346u);
  v24 = PoolWithTag;
  memset(PoolWithTag, 0, 0x40uLL);
  if ( a2 )
  {
    v15 = *(_QWORD *)(a2 + 184);
    PoolWithTag[2] = a2;
    *((_DWORD *)PoolWithTag + 12) = *(_DWORD *)(a2 + 56);
    v16 = *(_BYTE *)v15 == 13 && *(_DWORD *)(v15 + 24) == 589844;
    *((_BYTE *)PoolWithTag + 53) = v16;
    PoolWithTag[7] = *(_QWORD *)(v15 + 48);
  }
  *((_BYTE *)PoolWithTag + 52) = a7;
  if ( a4 )
  {
    PoolWithTag[3] = a4;
    PoolWithTag[4] = a3;
  }
  else
  {
    PoolWithTag[3] = FsRtlpOplockWaitCompleteRoutine;
    PoolWithTag[4] = Object;
    *(_WORD *)Object = 0;
    Object[2] = 6;
    *((_DWORD *)Object + 1) = 0;
    *((_QWORD *)Object + 2) = Object + 8;
    *((_QWORD *)Object + 1) = Object + 8;
  }
  if ( a5 )
    a5(a3, a2);
  v17 = (_QWORD **)(a1 + 88);
  v18 = *(_QWORD **)(a1 + 96);
  if ( *v18 != a1 + 88 )
    __fastfail(3u);
  *PoolWithTag = v17;
  PoolWithTag[1] = v18;
  *v18 = PoolWithTag;
  *(_QWORD *)(a1 + 96) = PoolWithTag;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(a2 + 69) = KeAcquireQueuedSpinLock(7uLL);
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a4 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        v19 = 259;
      }
      else
      {
        v19 = -1073741536;
      }
      *(_DWORD *)&v23[3] = v19;
      FsRtlpCancelWaitingIrp(a2, 1);
      goto LABEL_41;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v12 = 1;
    PoolWithTag = v24;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v19 = 259;
    *(_DWORD *)&v23[3] = 259;
  }
  else
  {
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    v12 = 0;
    v20 = FsRtlCancellableWaitForSingleObject(Object, 0LL, (PIRP)a2);
    v19 = v20;
    *(_DWORD *)&v23[3] = v20;
    if ( v20 == -1073741749 || v20 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
      }
      else
      {
        ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 152));
        for ( i = *v17; i != v17; i = (_QWORD *)*i )
        {
          if ( PoolWithTag == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
        v12 = 0;
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      *v25 = 0;
    }
    else
    {
      if ( a2 )
      {
        v19 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)&v23[3] = v19;
      }
      *v25 = 1;
    }
  }
LABEL_41:
  if ( v12 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v19;
}
