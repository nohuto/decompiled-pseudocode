/*
 * XREFs of CcGetDirtyPagesHelper @ 0x140078B60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007FBC8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 *a2)
{
  void *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  int v6; // eax
  unsigned __int8 OldIrql; // bl
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdi
  ULONG_PTR v11; // rsi
  unsigned __int8 v12; // r14
  unsigned __int32 v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int8 v16; // bl
  struct _KPRCB *v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  PVOID P; // [rsp+40h] [rbp-A8h]
  void *v22; // [rsp+48h] [rbp-A0h]
  __int64 v23; // [rsp+50h] [rbp-98h] BYREF
  __int64 v24; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  __int64 v26; // [rsp+78h] [rbp-70h]
  __int64 v27; // [rsp+80h] [rbp-68h]
  __int64 v28; // [rsp+88h] [rbp-60h]
  void (__fastcall *v29)(__int64, __int64 *, _QWORD, __int64 *, __int64 *, __int64, __int64); // [rsp+90h] [rbp-58h]
  PKGUARDED_MUTEX Mutex; // [rsp+98h] [rbp-50h]
  __int64 v31; // [rsp+A0h] [rbp-48h]
  unsigned int v32; // [rsp+F0h] [rbp+8h]
  __int64 v34; // [rsp+100h] [rbp+18h]
  __int64 v35; // [rsp+108h] [rbp+20h] BYREF

  v3 = 0LL;
  P = 0LL;
  v24 = 0LL;
  v35 = 0LL;
  v23 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v27 = a2[2];
  v26 = a2[3];
  v4 = *a2;
  v31 = *a2;
  v29 = (void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *, __int64, __int64))a2[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v5 = *(_QWORD *)(a1 + 96) - 120LL;
  v34 = v5;
  while ( v5 != a1 - 24 )
  {
    v6 = *(_DWORD *)(v5 + 152);
    if ( (v6 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x408uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v6 & 0x2000000) != 0 && *(_QWORD *)(v5 + 240) == v4 || (v6 & 0x1000000) != 0 && **(_QWORD **)(v5 + 240) == v4 )
    {
      ++*(_DWORD *)(v5 + 4);
      ++*(_DWORD *)(v5 + 536);
      ++*(_DWORD *)(v5 + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v3 = P;
        v5 = v34;
      }
      __writecr8(OldIrql);
      v8 = CcReferenceSharedCacheMapFileObject(v5);
      v28 = v8;
      Mutex = (PKGUARDED_MUTEX)(v5 + 280);
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
      v9 = v5 + 16;
      v10 = *(_QWORD *)(v5 + 16) - 16LL;
      v22 = (void *)v10;
      while ( v10 + 16 != v9 )
      {
        if ( *(_WORD *)v10 == 765 && *(_BYTE *)(v10 + 2) )
        {
          v24 = *(_QWORD *)(v10 + 8);
          v32 = *(_DWORD *)(v10 + 4);
          v35 = *(_QWORD *)(v10 + 40);
          v23 = *(_QWORD *)(v10 + 48);
          ++*(_DWORD *)(v10 + 64);
          v11 = v5 + 280;
          *(_QWORD *)(v11 + 8) = 0LL;
          v12 = *(_BYTE *)(v11 + 48);
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
          if ( v13 )
            ExpReleaseFastMutexContended(v11, v13);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
          {
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v19);
          }
          __writecr8(v12);
          KeAbPostRelease(v11);
          v3 = P;
          if ( P )
          {
            CcUnpinFileDataEx(P);
            v3 = 0LL;
            P = 0LL;
          }
          v8 = v28;
          v29(v28, &v24, v32, &v35, &v23, v27, v26);
          if ( v35 )
          {
            v14 = a2[4];
            if ( !v14 || v35 < v14 )
              a2[4] = v35;
          }
          ExAcquireFastMutex((PFAST_MUTEX)v11);
          v15 = *(_DWORD *)(v10 + 64);
          if ( v15 > 1 )
          {
            *(_DWORD *)(v10 + 64) = v15 - 1;
          }
          else
          {
            v3 = v22;
            P = v22;
          }
          v5 = v34;
        }
        v10 = *(_QWORD *)(v10 + 16) - 16LL;
        v22 = (void *)v10;
      }
      KeReleaseGuardedMutex(Mutex);
      CcDereferenceSharedCacheMapFileObject(v5, v8);
      if ( v3 )
      {
        CcUnpinFileDataEx(v3);
        v3 = 0LL;
        P = 0LL;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      --*(_DWORD *)(v5 + 4);
      --*(_DWORD *)(v5 + 536);
      --*(_DWORD *)(v5 + 112);
      v4 = v31;
    }
    v5 = *(_QWORD *)(v5 + 120) - 120LL;
    v34 = v5;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(v16);
  return 1;
}
