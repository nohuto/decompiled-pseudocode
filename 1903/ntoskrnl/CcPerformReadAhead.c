/*
 * XREFs of CcPerformReadAhead @ 0x1400A1A38
 * Callers:
 *     CcWorkerThread @ 0x14007D940 (CcWorkerThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14005A4E0 (PsGetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     PsSetPagePriorityThread @ 0x140080854 (PsSetPagePriorityThread.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400A4978 (MmWaitForCacheManagerPrefetch.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmPrefetchForCacheManager @ 0x14066DB98 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x140687B10 (CcMapAndCopyFromCache.c)
 */

void __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 Partition; // r15
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  PVOID v7; // rdi
  signed __int64 v8; // rbx
  BOOL v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // r15
  BOOL v12; // eax
  int v13; // r8d
  signed __int64 v14; // rcx
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  struct _KTHREAD *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // [rsp+28h] [rbp-1A0h]
  BOOL v21; // [rsp+40h] [rbp-188h]
  int PagePriorityThread; // [rsp+40h] [rbp-188h]
  unsigned int v23; // [rsp+44h] [rbp-184h]
  int v24; // [rsp+48h] [rbp-180h]
  int v25; // [rsp+4Ch] [rbp-17Ch]
  int v26; // [rsp+50h] [rbp-178h]
  int v27; // [rsp+54h] [rbp-174h]
  int v28; // [rsp+58h] [rbp-170h]
  int v30; // [rsp+68h] [rbp-160h]
  unsigned int v31; // [rsp+6Ch] [rbp-15Ch]
  __int64 v32; // [rsp+78h] [rbp-150h]
  _QWORD *v33; // [rsp+80h] [rbp-148h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-140h] BYREF
  BOOL v35; // [rsp+A0h] [rbp-128h]
  unsigned int v36; // [rsp+A4h] [rbp-124h]
  unsigned int v37; // [rsp+A8h] [rbp-120h]
  signed __int64 v38; // [rsp+C0h] [rbp-108h]
  PVOID P; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-F8h]
  __int64 v41; // [rsp+D8h] [rbp-F0h]
  signed __int64 v42; // [rsp+E0h] [rbp-E8h]
  _QWORD *v43; // [rsp+E8h] [rbp-E0h]
  __int64 v44; // [rsp+F0h] [rbp-D8h]
  __int64 v45; // [rsp+F8h] [rbp-D0h]
  __int64 v46[2]; // [rsp+100h] [rbp-C8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+110h] [rbp-B8h]
  __int64 v48; // [rsp+118h] [rbp-B0h]
  _QWORD v49[2]; // [rsp+130h] [rbp-98h] BYREF
  _QWORD v50[2]; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v51[4]; // [rsp+150h] [rbp-78h] BYREF
  _QWORD v52[4]; // [rsp+170h] [rbp-58h] BYREF

  v3 = a1;
  v45 = a1;
  v44 = a2;
  v38 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v27 = 0;
  v28 = 0;
  v25 = 0;
  v30 = 0;
  v31 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  HIDWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) = 0;
  v43 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v33 = v43;
  v40 = v43[26];
  v41 = v43[27];
  Partition = CcGetPartition(v43);
  v32 = Partition;
  LOBYTE(v5) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v40 + 16))(v41, v5);
  v26 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = 0LL;
      P = 0LL;
      v8 = v38;
      v9 = v35;
      v21 = v35;
      v10 = v23;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        v11 = *(_QWORD *)(a2 + 48);
        v48 = v11;
        if ( v11 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 80));
          v10 = *(_DWORD *)(v11 + 52);
          v12 = v10 == 0;
          v21 = v12;
          v35 = v12;
          v8 = *(_QWORD *)(v11 + 56);
          v38 = v8;
          if ( v10 > 0x800000 )
            v10 = 0x800000;
          v23 = v10;
          *(_DWORD *)(v11 + 52) = 0;
          if ( !v12 )
            *(_QWORD *)(v11 + 64) = v8 + v10;
          if ( (*(_DWORD *)v11 & 0x200000) != 0 )
          {
            v30 = 1;
            v31 = *(_DWORD *)(v11 + 88);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 80));
          v24 = (*(_DWORD *)v11 >> 18) & 7;
          v9 = v21;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v11 || v9 )
          break;
        v14 = v43[1];
        if ( v8 < v14 )
        {
          v28 = 1;
          if ( v8 + v10 >= v14 )
          {
            v10 = v14 - v8;
            v27 = 1;
          }
          v10 = (v10 + 4095) & 0xFFFFF000;
          v23 = v10;
          v15 = v10;
          v36 = v10;
          v42 = v8;
          v37 = v10;
          if ( v30 )
          {
            if ( !v31 )
              KeBugCheckEx(0x34u, 0xA1EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v16 = v10;
            if ( v10 > v31 )
              v16 = v31;
          }
          else
          {
            v16 = v10;
          }
          if ( (xmmword_140572410 & 0x20000) != 0 )
          {
            memset(v51, 0, sizeof(v51));
            v51[1] = v8;
            v51[2] = __PAIR64__(v24, v10);
            v51[0] = a1;
            LODWORD(v51[3]) = 0;
            v49[0] = v51;
            v49[1] = 32LL;
            EtwTraceKernelEvent((unsigned int)v49, 1, -2147352576, 5635, 4200706);
          }
          while ( v15 )
          {
            if ( v16 > v15 )
              v16 = v15;
            if ( (xmmword_140572410 & 0x20000) != 0 )
            {
              memset(v52, 0, sizeof(v52));
              v52[1] = v8;
              v52[2] = __PAIR64__(v24, v16);
              v52[0] = a1;
              v50[0] = v52;
              v50[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v50, 1, -2147352576, 5643, 4200706);
            }
            v25 |= MmPrefetchForCacheManager(a2, v8, v13, v16, v24, v20, *(_QWORD *)(a1 + 24), (__int64)&P);
            v15 -= v16;
            v36 = v15;
            v8 += v16;
            v38 = v8;
            v7 = P;
          }
          v9 = v21;
        }
        Partition = v32;
      }
      if ( !v7 )
        break;
      v17 = KeGetCurrentThread();
      v46[1] = (__int64)v17;
      PagePriorityThread = PsGetPagePriorityThread((__int64)v17);
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)v17, v24);
      CcMapAndCopyFromCache(a2, 0LL, (__int64)v46, v24, *(_QWORD *)(a1 + 24));
      PsSetPagePriorityThread((__int64)v17, PagePriorityThread);
      v43 = v33;
      Partition = v32;
    }
    v3 = a1;
  }
  __addgsdword(0x5E64u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( v26 )
    (*(void (__fastcall **)(__int64))(v40 + 24))(v41);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 128), &LockHandle);
  v18 = *(_QWORD *)(a2 + 48);
  if ( v18 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 80));
    *(_DWORD *)v18 &= ~0x10000u;
    if ( v27 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v18 + 64) = 0LL;
    if ( !v25 && v28 )
      *(_DWORD *)v18 &= ~0x20000u;
    KxReleaseSpinLock((PKSPIN_LOCK)(v18 + 80));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObject((PVOID)a2);
  v19 = *(_QWORD *)(v3 + 24);
  if ( v19 )
    IoDiskIoAttributionDereference(v19);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 128), &LockHandle);
  CcDecrementOpenCount((__int64)v33);
  *((_DWORD *)v33 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
