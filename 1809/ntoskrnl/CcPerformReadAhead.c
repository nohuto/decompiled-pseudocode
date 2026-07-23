/*
 * XREFs of CcPerformReadAhead @ 0x1400DE044
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400DED78 (MmWaitForCacheManagerPrefetch.c)
 *     PsSetPagePriorityThread @ 0x1400DEF80 (PsSetPagePriorityThread.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CcMapAndCopyFromCache @ 0x140639780 (CcMapAndCopyFromCache.c)
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 */

__int64 __fastcall CcPerformReadAhead(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r15
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  signed __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  BOOL v10; // eax
  int v11; // r8d
  unsigned __int8 OldIrql; // cl
  BOOL v13; // edx
  signed __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int PagePriorityThread; // edi
  int v20; // r9d
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v22; // rbx
  unsigned __int8 v23; // bl
  __int64 v24; // rcx
  unsigned __int8 v25; // bl
  __int64 result; // rax
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  BOOL v29; // [rsp+40h] [rbp-178h]
  unsigned __int8 v30; // [rsp+44h] [rbp-174h]
  unsigned int v31; // [rsp+48h] [rbp-170h]
  unsigned int v32; // [rsp+4Ch] [rbp-16Ch]
  int v33; // [rsp+50h] [rbp-168h]
  unsigned int v34; // [rsp+54h] [rbp-164h]
  int v35; // [rsp+58h] [rbp-160h]
  int v36; // [rsp+5Ch] [rbp-15Ch]
  int v37; // [rsp+60h] [rbp-158h]
  BOOL v39; // [rsp+70h] [rbp-148h]
  int v40; // [rsp+74h] [rbp-144h]
  unsigned int v41; // [rsp+78h] [rbp-140h]
  __int64 v42; // [rsp+80h] [rbp-138h]
  _QWORD *v43; // [rsp+88h] [rbp-130h]
  __int64 Partition; // [rsp+90h] [rbp-128h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-120h] BYREF
  int v46; // [rsp+B0h] [rbp-108h]
  signed __int64 v47; // [rsp+C8h] [rbp-F0h]
  PVOID P; // [rsp+D0h] [rbp-E8h]
  __int64 v49; // [rsp+D8h] [rbp-E0h]
  __int64 v50; // [rsp+E0h] [rbp-D8h]
  __int64 v51; // [rsp+E8h] [rbp-D0h]
  __int64 v52; // [rsp+F0h] [rbp-C8h]
  __int64 v53; // [rsp+F8h] [rbp-C0h]
  __int64 v54; // [rsp+100h] [rbp-B8h] BYREF
  int v55[6]; // [rsp+108h] [rbp-B0h]
  _QWORD v56[2]; // [rsp+120h] [rbp-98h] BYREF
  _QWORD v57[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD v58[4]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v59[4]; // [rsp+160h] [rbp-58h] BYREF

  v53 = a1;
  v52 = a2;
  v49 = 0LL;
  v50 = 0LL;
  v36 = 0;
  v37 = 0;
  v33 = 0;
  v40 = 0;
  v41 = 0;
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  v4 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v43 = v4;
  v42 = (__int64)v4;
  v49 = v4[26];
  v50 = v4[27];
  Partition = CcGetPartition(v4, a2, a3);
  LOBYTE(v5) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v49 + 16))(v50, v5);
  v35 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      P = 0LL;
      v29 = v39;
      v7 = v47;
      v8 = v31;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v9 = *(_QWORD *)(a2 + 48);
        v51 = v9;
        if ( v9 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 80));
          v8 = *(_DWORD *)(v9 + 52);
          v10 = v8 == 0;
          v29 = v10;
          v39 = v10;
          v7 = *(_QWORD *)(v9 + 56);
          v47 = v7;
          if ( v8 > 0x800000 )
            v8 = 0x800000;
          v31 = v8;
          *(_DWORD *)(v9 + 52) = 0;
          if ( !v10 )
            *(_QWORD *)(v9 + 64) = v7 + v8;
          if ( (*(_DWORD *)v9 & 0x200000) != 0 )
          {
            v40 = 1;
            v41 = *(_DWORD *)(v9 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v9 + 80));
          v32 = (*(_DWORD *)v9 >> 18) & 7;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        v30 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v4 = (_QWORD *)v42;
          v43 = (_QWORD *)v42;
          v9 = v51;
          v13 = v39;
          v29 = v39;
          v7 = v47;
          v8 = v31;
          OldIrql = v30;
        }
        else
        {
          v13 = v29;
        }
        __writecr8(OldIrql);
        if ( !v9 || v13 )
          break;
        v14 = v4[1];
        if ( v7 < v14 )
        {
          v37 = 1;
          if ( v7 + v8 >= v14 )
          {
            v8 = v14 - v7;
            v36 = 1;
          }
          v8 = (v8 + 4095) & 0xFFFFF000;
          v31 = v8;
          v15 = v8;
          v34 = v8;
          *(_QWORD *)v55 = v7;
          v46 = v8;
          if ( v40 )
          {
            if ( !v41 )
              KeBugCheckEx(0x34u, 0xA13uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v16 = v8;
            if ( v8 > v41 )
              v16 = v41;
          }
          else
          {
            v16 = v8;
          }
          if ( (xmmword_140542350 & 0x20000) != 0 )
          {
            memset(v58, 0, sizeof(v58));
            v58[1] = v7;
            v58[2] = __PAIR64__(v32, v8);
            v17 = a1;
            v58[0] = a1;
            LODWORD(v58[3]) = 0;
            v56[0] = v58;
            v56[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v56, 1, -2147352576, 5635, 4200706);
            v15 = v8;
            goto LABEL_30;
          }
          while ( 1 )
          {
            v17 = a1;
LABEL_30:
            if ( !v15 )
              break;
            if ( v16 > v15 )
              v16 = v15;
            if ( (xmmword_140542350 & 0x20000) != 0 )
            {
              memset(v59, 0, sizeof(v59));
              v59[1] = v7;
              v59[2] = __PAIR64__(v32, v16);
              v59[0] = v17;
              v57[0] = v59;
              v57[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v57, 1, -2147352576, 5643, 4200706);
            }
            v33 |= MmPrefetchForCacheManager(a2, v7, v11, v16, v32);
            v15 = v34 - v16;
            v34 -= v16;
            v7 += v16;
            v47 = v7;
          }
          v4 = v43;
        }
      }
      if ( !P )
        break;
      CurrentThread = KeGetCurrentThread();
      PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread(CurrentThread, v32);
      LOBYTE(v20) = 1;
      CcMapAndCopyFromCache(a2, v55[0], v46, v20, 0LL, (__int64)&v54, v32, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread(CurrentThread, PagePriorityThread);
      v4 = (_QWORD *)v42;
      v43 = (_QWORD *)v42;
    }
  }
  __addgsdword(0x5E64u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( v35 )
    (*(void (__fastcall **)(__int64))(v49 + 24))(v50);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v22 = *(_QWORD *)(a2 + 48);
  v51 = v22;
  if ( v22 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v22 + 80));
    *(_DWORD *)v22 &= ~0x10000u;
    if ( v36 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v22 + 64) = 0LL;
    if ( !v33 && v37 )
      *(_DWORD *)v22 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v22 + 80));
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v23 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v27 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v27);
  }
  __writecr8(v23);
  ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  v24 = *(_QWORD *)(a1 + 24);
  if ( v24 )
    IoDiskIoAttributionDereference(v24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  CcDecrementOpenCount(v42);
  *(_DWORD *)(v42 + 152) &= ~0x4000u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v25 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v28 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v28);
  }
  result = v25;
  __writecr8(v25);
  return result;
}
