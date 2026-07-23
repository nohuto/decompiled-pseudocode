/*
 * XREFs of CcWorkerThread @ 0x14007F2D0
 * Callers:
 *     <none>
 * Callees:
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     CcFindNextWorkQueueEntry @ 0x14011FE6C (CcFindNextWorkQueueEntry.c)
 *     CcReEngageWorkerThreads @ 0x140160ABC (CcReEngageWorkerThreads.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187C98 (CcPerfLogWorkItemEnqueue.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1402695FC (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1402696D0 (CcOkToAddWriteBehindThread.c)
 */

char __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v2; // rdi
  __int64 NextWorkQueueEntry; // r12
  int v4; // r15d
  __int64 v5; // rsi
  int v6; // ebx
  _QWORD *v7; // r14
  signed __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int8 OldIrql; // bl
  int v12; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ebx
  struct _KTHREAD *v15; // rax
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  unsigned __int8 v20; // bl
  _QWORD *v22; // rax
  __int64 *v23; // r10
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 *v26; // rax
  __int64 **v27; // r13
  int v28; // eax
  __int64 *v29; // r10
  __int64 v30; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v32; // rcx
  char v33; // [rsp+48h] [rbp-E8h]
  char v34; // [rsp+49h] [rbp-E7h]
  int v36; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+78h] [rbp-B8h]
  __int64 v38; // [rsp+80h] [rbp-B0h]
  _QWORD v39[4]; // [rsp+88h] [rbp-A8h] BYREF
  _QWORD *v40; // [rsp+A8h] [rbp-88h]
  __int64 v41; // [rsp+B0h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-78h] BYREF
  _QWORD v43[2]; // [rsp+D8h] [rbp-58h] BYREF
  _QWORD v44[2]; // [rsp+E8h] [rbp-48h] BYREF

  v1 = (_QWORD *)a1;
  v2 = 0LL;
  NextWorkQueueEntry = 0LL;
  v34 = 0;
  v39[2] = a1;
  v36 = 0;
  v37 = 0LL;
  v4 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v4 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x166CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 56);
  v39[3] = v5;
  v38 = v5;
  while ( 1 )
  {
    v6 = 0;
    v33 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 192), &LockHandle);
    if ( v34 )
    {
      *(_BYTE *)(v5 + 312) = 0;
      v34 = 0;
      CcReEngageWorkerThreads(v5, *(unsigned int *)(v5 + 320), *(unsigned int *)(v5 + 324));
    }
    if ( v37 == 35422 )
    {
      if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
        *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
      v26 = (__int64 *)v2[1];
      if ( (_QWORD *)*v26 != v2 )
        goto LABEL_107;
      *(_QWORD *)NextWorkQueueEntry = v2;
      *(_QWORD *)(NextWorkQueueEntry + 8) = v26;
      *v26 = NextWorkQueueEntry;
      v2[1] = NextWorkQueueEntry;
      v37 = 0LL;
    }
    if ( v4 == 2 )
      break;
    while ( 1 )
    {
      if ( (v6 & 1) != 0 || (v6 |= 1u, v2 = (_QWORD *)(v5 + 224), (_QWORD *)*v2 == v2) )
      {
        if ( (v6 & 2) != 0 || (v6 |= 2u, v2 = (_QWORD *)(v5 + 240), (_QWORD *)*v2 == v2) )
        {
LABEL_11:
          if ( (v6 & 4) != 0 || (v6 |= 4u, v2 = (_QWORD *)(v5 + 256), (_QWORD *)*v2 == v2) )
          {
            v1 = (_QWORD *)a1;
            goto LABEL_45;
          }
        }
      }
      v40 = v2;
      if ( v4 != 2 || *(_DWORD *)(v5 + 896) >= *(_DWORD *)(v5 + 200) )
      {
        v7 = (_QWORD *)(v5 + 256);
        if ( v2 == (_QWORD *)(v5 + 256) )
          goto LABEL_15;
        if ( !*(_DWORD *)(v5 + 316)
          || (unsigned int)(*(_DWORD *)(v5 + 332) + 1) < *(_DWORD *)(v5 + 200)
          || *(_DWORD *)(v5 + 304) )
        {
          break;
        }
      }
LABEL_63:
      if ( v4 == 2 )
        goto LABEL_11;
    }
    if ( v2 != v7 )
      goto LABEL_16;
LABEL_15:
    if ( (unsigned int)(*(_DWORD *)(v5 + 328) + 1) > *(_DWORD *)(v5 + 896) )
      goto LABEL_63;
LABEL_16:
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v5, v2);
    v39[1] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      goto LABEL_63;
    v8 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v5 + 736) )
    {
      if ( MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v5 + 728) + (unsigned int)CcExtraWBThreadDelay
        && *(_QWORD *)(v5 + 208) == v5 + 208 )
      {
        if ( *(_DWORD *)(v5 + 456) )
        {
          if ( (_QWORD *)*v7 != v7 )
          {
            v27 = (__int64 **)(v5 + 288);
            if ( *v27 != (__int64 *)v27 )
            {
              v28 = CcOkToAddWriteBehindThread(v5);
              *(_QWORD *)(v5 + 728) = v8;
              if ( *(_DWORD *)(v5 + 304) && v28 == 3 )
                *(_BYTE *)(v5 + 737) = 1;
              if ( v28 == 2 )
              {
                v29 = *v27;
                v30 = **v27;
                if ( (__int64 **)(*v27)[1] != v27 || *(__int64 **)(v30 + 8) != v29 )
                  goto LABEL_107;
                *v27 = (__int64 *)v30;
                *(_QWORD *)(v30 + 8) = v27;
                ++*(_DWORD *)(v5 + 304);
                if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 904)) <= 1 )
                  __fastfail(0xEu);
                *v29 = 0LL;
                ExQueueWorkItemToPartition((ULONG_PTR)v29);
                v33 = 1;
              }
            }
          }
        }
      }
    }
    if ( v2 == v7 )
      *(_QWORD *)(v5 + 720) = v8;
    if ( *(_DWORD *)(v5 + 896) >= *(_DWORD *)(v5 + 200)
      && v8 >= *(_QWORD *)(v5 + 720) + (unsigned int)CcExtraWBThreadDelay
      && *(_QWORD *)(v5 + 208) == v5 + 208
      && (_QWORD *)*v7 != v7 )
    {
      v22 = (_QWORD *)(v5 + 288);
      v23 = *(__int64 **)(v5 + 288);
      if ( v23 != (__int64 *)(v5 + 288) && !*(_DWORD *)(v5 + 304) )
      {
        v24 = *v23;
        if ( (_QWORD *)v23[1] != v22 || *(__int64 **)(v24 + 8) != v23 )
          goto LABEL_107;
        *v22 = v24;
        *(_QWORD *)(v24 + 8) = v22;
        ++*(_DWORD *)(v5 + 304);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 904)) <= 1 )
          __fastfail(0xEu);
        *v23 = 0LL;
        ExQueueWorkItemToPartition((ULONG_PTR)v23);
        *(_QWORD *)(v5 + 720) = v8;
        v33 = 1;
      }
    }
    v9 = 332LL;
    if ( v2 == v7 )
      v9 = 328LL;
    _InterlockedIncrement((volatile signed __int32 *)(v38 + v9));
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( (xmmword_140542350 & 0x20000) != 0 )
    {
      if ( v33 )
        CcLogExtraWBThreadAction(v5, 2LL);
      if ( (xmmword_140542350 & 0x20000) != 0 )
      {
        v39[0] = NextWorkQueueEntry;
        v43[0] = v39;
        v43[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v43, 1, -2147352576, 5633, 4200706);
      }
    }
    v12 = *(unsigned __int8 *)(NextWorkQueueEntry + 120);
    if ( v12 == 2 )
    {
      CurrentThread = KeGetCurrentThread();
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
      v14 = 0;
      do
      {
        v37 = NextWorkQueueEntry;
        CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), &v36);
        if ( v14 >= 0xA )
          break;
        ++v14;
      }
      while ( v37 == 35422 );
      v15 = KeGetCurrentThread();
      *((_DWORD *)&v15[1].SwapListEntry + 3) &= ~2u;
    }
    else
    {
      v16 = v12 - 1;
      if ( v16 )
      {
        v17 = v16 - 2;
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
            v34 = 1;
          }
        }
        else
        {
          CcLazyWriteScan(v5, NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
        }
      }
      else
      {
        CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
      }
    }
    v18 = 332LL;
    if ( v40 == (_QWORD *)(v5 + 256) )
      v18 = 328LL;
    _InterlockedDecrement((volatile signed __int32 *)(v38 + v18));
    if ( v37 == 35422 )
    {
      v1 = (_QWORD *)a1;
      if ( (xmmword_140542350 & 0x20000) != 0 )
      {
        LOBYTE(v10) = 1;
        CcPerfLogWorkItemEnqueue(v2, NextWorkQueueEntry, v10, 0LL);
      }
    }
    else
    {
      if ( (xmmword_140542350 & 0x20000) != 0 )
      {
        v41 = NextWorkQueueEntry;
        v44[0] = &v41;
        v44[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v44, 1, -2147352576, 5634, 4200706);
      }
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
      v1 = (_QWORD *)a1;
    }
  }
  if ( !*(_BYTE *)(v5 + 737) )
    goto LABEL_63;
  *(_BYTE *)(v5 + 737) = 0;
LABEL_45:
  if ( v4 == 2 )
  {
    v25 = *(_QWORD **)(v5 + 296);
    if ( *v25 == v5 + 288 )
    {
      *v1 = v5 + 288;
      v1[1] = v25;
      *v25 = v1;
      *(_QWORD *)(v5 + 296) = v1;
      --*(_DWORD *)(v5 + 304);
      goto LABEL_48;
    }
LABEL_107:
    __fastfail(3u);
  }
  v19 = *(_QWORD **)(v5 + 216);
  if ( *v19 != v5 + 208 )
    goto LABEL_107;
  *v1 = v5 + 208;
  v1[1] = v19;
  *v19 = v1;
  *(_QWORD *)(v5 + 216) = v1;
  --*(_DWORD *)(v5 + 204);
LABEL_48:
  if ( *(_BYTE *)(v5 + 736) && !*(_DWORD *)(v5 + 304) && *(_DWORD *)(v5 + 204) <= 1u )
  {
    *(_BYTE *)(v5 + 736) = 0;
    memset(*(void **)(v5 + 680), 0, 8LL * (unsigned int)(*(_DWORD *)(v5 + 308) + 1));
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v32 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v32);
  }
  __writecr8(v20);
  if ( (xmmword_140542350 & 0x20000) != 0 && v4 == 2 )
    CcLogExtraWBThreadAction(v5, 3LL);
  return CcDereferencePartition(v5);
}
