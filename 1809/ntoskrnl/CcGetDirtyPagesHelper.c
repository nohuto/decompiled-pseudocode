/*
 * XREFs of CcGetDirtyPagesHelper @ 0x140020430
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  void *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 v9; // r14
  __int64 i; // rdi
  unsigned int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned __int8 v16; // bl
  struct _KPRCB *v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  void *v20; // [rsp+40h] [rbp-A8h]
  __int64 v21; // [rsp+50h] [rbp-98h]
  __int64 v22; // [rsp+58h] [rbp-90h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  __int64 v24; // [rsp+68h] [rbp-80h] BYREF
  __int64 v25; // [rsp+70h] [rbp-78h] BYREF
  __int64 v26; // [rsp+78h] [rbp-70h]
  void (__fastcall *v27)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64); // [rsp+80h] [rbp-68h]
  __int64 v28; // [rsp+88h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  __int64 v32; // [rsp+108h] [rbp+20h] BYREF

  v2 = a1;
  v3 = 0LL;
  v20 = 0LL;
  v23 = a2[2];
  v22 = a2[3];
  v4 = *a2;
  v28 = *a2;
  v27 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64, __int64))a2[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v5 = *(_QWORD *)(v2 + 96) - 120LL;
  v21 = v5;
  while ( v5 != v2 - 24 )
  {
    v6 = *(_DWORD *)(v5 + 152);
    if ( (v6 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x408uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v6 & 0x2000000) != 0 && *(_QWORD *)(v5 + 240) == v4 || (v6 & 0x1000000) != 0 && **(_QWORD **)(v5 + 240) == v4 )
    {
      ++*(_DWORD *)(v5 + 4);
      ++*(_DWORD *)(v5 + 536);
      ++*(_DWORD *)(v5 + 112);
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7);
        v3 = v20;
        v5 = v21;
      }
      __writecr8(OldIrql);
      v9 = CcReferenceSharedCacheMapFileObject(v5);
      v26 = v9;
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
      for ( i = *(_QWORD *)(v5 + 16) - 16LL; i + 16 != v5 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v25 = *(_QWORD *)(i + 8);
          v11 = *(_DWORD *)(i + 4);
          v32 = *(_QWORD *)(i + 40);
          v24 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
          if ( v3 )
          {
            CcUnpinFileDataEx(v3);
            v3 = 0LL;
            v20 = 0LL;
          }
          v12 = v11;
          v9 = v26;
          v27(v26, &v25, v12, &v32, &v24, v23, v22);
          if ( v32 )
          {
            v13 = a2[4];
            if ( !v13 || v32 < v13 )
              a2[4] = v32;
          }
          ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
          v14 = *(_DWORD *)(i + 64);
          if ( v14 > 1 )
          {
            *(_DWORD *)(i + 64) = v14 - 1;
          }
          else
          {
            v3 = (void *)i;
            v20 = (void *)i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
      CcDereferenceSharedCacheMapFileObject(v5, v9);
      if ( v3 )
      {
        CcUnpinFileDataEx(v3);
        v3 = 0LL;
        v20 = 0LL;
      }
      v2 = a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      --*(_DWORD *)(v5 + 4);
      --*(_DWORD *)(v5 + 536);
      --*(_DWORD *)(v5 + 112);
      v4 = v28;
    }
    v5 = *(_QWORD *)(v5 + 120) - 120LL;
    v21 = v5;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17, v15);
  }
  __writecr8(v16);
  return 1;
}
