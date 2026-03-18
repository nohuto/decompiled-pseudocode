/*
 * XREFs of CcWorkerThread @ 0x14007DD40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcWriteBehind @ 0x14007DB9C (CcWriteBehind.c)
 *     CcFindNextWorkQueueEntry @ 0x14007E3BC (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14007E468 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14007E4D4 (CcDereferencePartition.c)
 *     CcLazyWriteScan @ 0x14007F194 (CcLazyWriteScan.c)
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401593D4 (CcPerfLogWorkItemEnqueue.c)
 *     CcReEngageWorkerThreads @ 0x140171634 (CcReEngageWorkerThreads.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x14027CBB4 (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x14027CC94 (CcOkToAddWriteBehindThread.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 NextWorkQueueEntry; // r15
  int v3; // r13d
  __int64 v4; // rsi
  int v5; // ebx
  _QWORD *v6; // r14
  signed __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int8 OldIrql; // bl
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  _QWORD *v14; // rcx
  _QWORD *v15; // r14
  unsigned __int8 v16; // bl
  _QWORD *v18; // rax
  __int64 *v19; // r10
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 *v23; // rax
  __int64 **v24; // r12
  int v25; // eax
  __int64 *v26; // r10
  __int64 v27; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v29; // rcx
  char v30; // [rsp+48h] [rbp-E8h]
  char v31; // [rsp+49h] [rbp-E7h]
  __int64 v32; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-D0h]
  int v34; // [rsp+68h] [rbp-C8h]
  _QWORD *v35; // [rsp+78h] [rbp-B8h]
  _QWORD *v36; // [rsp+80h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-A8h] BYREF
  _QWORD v38[4]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-70h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-68h]
  struct _KTHREAD *v41; // [rsp+D0h] [rbp-60h]
  _QWORD v42[2]; // [rsp+E0h] [rbp-50h] BYREF
  _QWORD v43[2]; // [rsp+F0h] [rbp-40h] BYREF

  v36 = (_QWORD *)a1;
  v1 = 0LL;
  NextWorkQueueEntry = 0LL;
  v31 = 0;
  v32 = 0LL;
  v38[2] = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v33 = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  v34 = v3;
  if ( (unsigned int)(v3 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x166CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 56);
  v38[3] = v4;
  while ( 1 )
  {
    v5 = 0;
    v30 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
    if ( v31 )
    {
      *(_BYTE *)(v4 + 312) = 0;
      v31 = 0;
      CcReEngageWorkerThreads(v4, *(unsigned int *)(v4 + 320), *(unsigned int *)(v4 + 324));
    }
    if ( v33 == 35422 )
    {
      if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
        *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
      v23 = (__int64 *)v1[1];
      if ( (_QWORD *)*v23 != v1 )
        __fastfail(3u);
      *(_QWORD *)NextWorkQueueEntry = v1;
      *(_QWORD *)(NextWorkQueueEntry + 8) = v23;
      *v23 = NextWorkQueueEntry;
      v1[1] = NextWorkQueueEntry;
      v33 = 0LL;
    }
    if ( v3 == 2 )
      break;
    while ( 1 )
    {
      if ( (v5 & 1) != 0 || (v5 |= 1u, v1 = (_QWORD *)(v4 + 224), (_QWORD *)*v1 == v1) )
      {
        if ( (v5 & 2) != 0 || (v5 |= 2u, v1 = (_QWORD *)(v4 + 240), (_QWORD *)*v1 == v1) )
        {
LABEL_11:
          if ( (v5 & 4) != 0 )
            goto LABEL_44;
          v5 |= 4u;
          v1 = (_QWORD *)(v4 + 256);
          if ( (_QWORD *)*v1 == v1 )
            goto LABEL_44;
        }
      }
      v35 = v1;
      if ( v3 != 2 || *(_DWORD *)(v4 + 896) >= *(_DWORD *)(v4 + 200) )
      {
        v6 = (_QWORD *)(v4 + 256);
        if ( v1 == (_QWORD *)(v4 + 256) )
          goto LABEL_15;
        if ( !*(_DWORD *)(v4 + 316)
          || (unsigned int)(*(_DWORD *)(v4 + 332) + 1) < *(_DWORD *)(v4 + 200)
          || *(_DWORD *)(v4 + 304) )
        {
          break;
        }
      }
LABEL_64:
      if ( v3 == 2 )
        goto LABEL_11;
    }
    if ( v1 != v6 )
      goto LABEL_16;
LABEL_15:
    if ( (unsigned int)(*(_DWORD *)(v4 + 328) + 1) > *(_DWORD *)(v4 + 896) )
      goto LABEL_64;
LABEL_16:
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v4, v1);
    v38[1] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      goto LABEL_64;
    v7 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v4 + 736) )
    {
      if ( MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v4 + 728) + (unsigned int)CcExtraWBThreadDelay
        && *(_QWORD *)(v4 + 208) == v4 + 208 )
      {
        if ( *(_DWORD *)(v4 + 456) )
        {
          if ( (_QWORD *)*v6 != v6 )
          {
            v24 = (__int64 **)(v4 + 288);
            if ( *v24 != (__int64 *)v24 )
            {
              v25 = CcOkToAddWriteBehindThread(v4);
              *(_QWORD *)(v4 + 728) = v7;
              if ( *(_DWORD *)(v4 + 304) && v25 == 3 )
                *(_BYTE *)(v4 + 737) = 1;
              if ( v25 == 2 )
              {
                v26 = *v24;
                v27 = **v24;
                if ( (__int64 **)(*v24)[1] != v24 || *(__int64 **)(v27 + 8) != v26 )
                  __fastfail(3u);
                *v24 = (__int64 *)v27;
                *(_QWORD *)(v27 + 8) = v24;
                ++*(_DWORD *)(v4 + 304);
                if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
                  __fastfail(0xEu);
                *v26 = 0LL;
                ExQueueWorkItemToPartition((ULONG_PTR)v26);
                v30 = 1;
              }
            }
          }
        }
      }
    }
    if ( v1 == v6 )
      *(_QWORD *)(v4 + 720) = v7;
    if ( *(_DWORD *)(v4 + 896) >= *(_DWORD *)(v4 + 200)
      && v7 >= *(_QWORD *)(v4 + 720) + (unsigned int)CcExtraWBThreadDelay
      && *(_QWORD *)(v4 + 208) == v4 + 208
      && (_QWORD *)*v6 != v6 )
    {
      v18 = (_QWORD *)(v4 + 288);
      v19 = *(__int64 **)(v4 + 288);
      if ( v19 != (__int64 *)(v4 + 288) && !*(_DWORD *)(v4 + 304) )
      {
        v20 = *v19;
        if ( (_QWORD *)v19[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
          __fastfail(3u);
        *v18 = v20;
        *(_QWORD *)(v20 + 8) = v18;
        ++*(_DWORD *)(v4 + 304);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
          __fastfail(0xEu);
        *v19 = 0LL;
        ExQueueWorkItemToPartition((ULONG_PTR)v19);
        *(_QWORD *)(v4 + 720) = v7;
        v30 = 1;
      }
    }
    if ( v1 == v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 328));
    else
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 332));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( (xmmword_140572410 & 0x20000) != 0 )
    {
      if ( v30 )
        CcLogExtraWBThreadAction(v4, 2LL);
      if ( (xmmword_140572410 & 0x20000) != 0 )
      {
        v38[0] = NextWorkQueueEntry;
        v42[0] = v38;
        v42[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v42, 1, -2147352576, 5633, 4200706);
      }
    }
    v10 = *(unsigned __int8 *)(NextWorkQueueEntry + 120);
    if ( v10 == 2 )
    {
      CurrentThread = KeGetCurrentThread();
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
      v11 = 0;
      do
      {
        v33 = NextWorkQueueEntry;
        CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)&v32);
        if ( v11 >= 0xA )
          break;
        ++v11;
      }
      while ( v33 == 35422 );
      v41 = KeGetCurrentThread();
      *((_DWORD *)&v41[1].SwapListEntry + 3) &= ~2u;
    }
    else
    {
      v12 = v10 - 1;
      if ( v12 )
      {
        v13 = v12 - 2;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
            v31 = 1;
          }
        }
        else
        {
          CcLazyWriteScan(v4, NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
        }
      }
      else
      {
        CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
      }
    }
    if ( v1 == (_QWORD *)(v4 + 256) )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 328));
    else
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 332));
    if ( v33 == 35422 )
    {
      if ( (xmmword_140572410 & 0x20000) != 0 )
      {
        LOBYTE(v8) = 1;
        CcPerfLogWorkItemEnqueue(v1, NextWorkQueueEntry, v8, 0LL);
      }
    }
    else
    {
      if ( (xmmword_140572410 & 0x20000) != 0 )
      {
        v39 = NextWorkQueueEntry;
        v43[0] = &v39;
        v43[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v43, 1, -2147352576, 5634, 4200706);
      }
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
    }
  }
  if ( !*(_BYTE *)(v4 + 737) )
    goto LABEL_64;
  *(_BYTE *)(v4 + 737) = 0;
LABEL_44:
  if ( v3 == 2 )
  {
    v21 = *(_QWORD **)(v4 + 296);
    if ( *v21 != v4 + 288 )
      __fastfail(3u);
    v22 = v36;
    *v36 = v4 + 288;
    v22[1] = v21;
    *v21 = v22;
    *(_QWORD *)(v4 + 296) = v22;
    --*(_DWORD *)(v4 + 304);
  }
  else
  {
    v14 = *(_QWORD **)(v4 + 216);
    if ( *v14 != v4 + 208 )
      __fastfail(3u);
    v15 = v36;
    *v36 = v4 + 208;
    v15[1] = v14;
    *v14 = v15;
    *(_QWORD *)(v4 + 216) = v15;
    --*(_DWORD *)(v4 + 204);
  }
  if ( *(_BYTE *)(v4 + 736) && !*(_DWORD *)(v4 + 304) && *(_DWORD *)(v4 + 204) <= 1u )
  {
    *(_BYTE *)(v4 + 736) = 0;
    memset(*(void **)(v4 + 680), 0, 8LL * (unsigned int)(*(_DWORD *)(v4 + 308) + 1));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v29 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v29);
  }
  __writecr8(v16);
  if ( (xmmword_140572410 & 0x20000) != 0 && v3 == 2 )
    CcLogExtraWBThreadAction(v4, 3LL);
  return CcDereferencePartition(v4);
}
