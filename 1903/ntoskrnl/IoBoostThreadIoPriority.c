/*
 * XREFs of IoBoostThreadIoPriority @ 0x1400E61EC
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     FsRtlpWaitForIoAtEof @ 0x14009AA84 (FsRtlpWaitForIoAtEof.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     ExpBoostIoAfterAcquire @ 0x1400B5640 (ExpBoostIoAfterAcquire.c)
 *     FsRtlpDoBoost @ 0x1400B7660 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140125F40 (CcBoostLowPriorityWorkerThread.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 *     IoBoostThreadIo @ 0x14019C0C0 (IoBoostThreadIo.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x140696F20 (PspBoostJobIoPriorityCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // r12
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // di
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // r15
  struct _EX_RUNDOWN_REF *v11; // rax
  KSPIN_LOCK *v12; // r13
  PVOID v13; // r12
  KIRQL v14; // al
  KSPIN_LOCK v15; // rdi
  KIRQL v16; // r15
  char v17; // cl
  unsigned __int64 v18; // r15
  void *v19; // r15
  unsigned __int16 v20; // r15
  unsigned __int16 j; // di
  _QWORD *v22; // r15
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  struct _EX_RUNDOWN_REF *v25; // r8
  volatile __int64 **v26; // rcx
  __int64 i; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  KIRQL v30; // al
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  PEX_RUNDOWN_REF v34; // rax
  _QWORD *v35; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v37; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v39; // rcx
  struct _KPRCB *v40; // rcx
  KIRQL v41; // [rsp+28h] [rbp-E0h]
  KIRQL v42; // [rsp+28h] [rbp-E0h]
  char v43; // [rsp+29h] [rbp-DFh]
  void *v45; // [rsp+30h] [rbp-D8h]
  __int64 v46; // [rsp+30h] [rbp-D8h]
  PVOID Objecta; // [rsp+38h] [rbp-D0h]
  _QWORD v49[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v50; // [rsp+98h] [rbp-70h]
  PEX_RUNDOWN_REF RunRef[16]; // [rsp+A8h] [rbp-60h]

  v5 = 0;
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = a1 + 234;
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 234);
    if ( (KSPIN_LOCK *)a1[208] == a1 + 208 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KxReleaseSpinLock(v6);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v7);
        return;
      }
      v5 = 1;
    }
    KxReleaseSpinLock(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v37 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v37);
    }
    __writecr8(v7);
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 8LL;
  do
  {
    v11 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v9 * 8));
    RunRef[v9] = v11;
    if ( v11 )
      RunRef[v9 + 8] = (PEX_RUNDOWN_REF)v11[2].Count;
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = a1;
  if ( v5 == 1 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
    v45 = 0LL;
    v14 = KeAcquireSpinLockRaiseToDpc(a1 + 234);
    v15 = a1[208];
    v41 = v14;
    v16 = v14;
    if ( (KSPIN_LOCK *)v15 != a1 + 208 )
    {
      do
      {
        v17 = *(_BYTE *)(v15 + 34);
        if ( *(char *)(v15 + 35) <= v17 )
        {
          v18 = *(_QWORD *)(v15 + 152);
          if ( v18 < v15 + 8 * (9LL * v17 + 22) )
          {
            v19 = *(void **)(v18 + 40);
            if ( v19 )
            {
              while ( 1 )
              {
                if ( RunRef[(unsigned __int16)v13] )
                {
                  v43 = 0;
                  v26 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                  KxAcquireQueuedSpinLock((__int64)v26, v26[1]);
                  for ( i = *(_QWORD *)(RunRef[(unsigned __int16)v13 + 8][4].Count + 8); i; i = *(_QWORD *)(i + 16) )
                  {
                    if ( (void *)i == v19 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                    {
                      v43 = 1;
                      break;
                    }
                  }
                  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                                 + 160));
                  if ( v43 == 1 && v45 != v19 )
                    break;
                }
                LOWORD(v13) = (_WORD)v13 + 1;
                if ( (unsigned __int16)v13 >= 8u )
                  goto LABEL_19;
              }
              v45 = v19;
              if ( v8 >= 2 )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
                if ( !PoolWithTag )
                {
LABEL_19:
                  v13 = 0LL;
                  goto LABEL_20;
                }
                PoolWithTag[4] = v50;
                v50 = PoolWithTag;
                v39 = (unsigned __int16)v13;
                *((_WORD *)PoolWithTag + 20) = (_WORD)v13;
                v13 = 0LL;
                PoolWithTag[1] = v19;
                PoolWithTag[2] = a1;
                *PoolWithTag = RunRef[v39];
                *((_DWORD *)PoolWithTag + 6) = a2;
              }
              else
              {
                v33 = 6LL * v8;
                v34 = RunRef[(unsigned __int16)v13];
                LOWORD(v49[v33 + 5]) = (_WORD)v13;
                v13 = 0LL;
                v49[v33] = v34;
                LODWORD(v49[v33 + 3]) = a2;
                v49[v33 + 4] = 0LL;
                v49[v33 + 1] = v19;
                v49[v33 + 2] = a1;
              }
              ++v8;
              ObfReferenceObjectWithTag(v19, 0x746C6644u);
              ObfReferenceObjectWithTag(a1, 0x746C6644u);
              if ( (*(_DWORD *)(v15 - 16) & 2) != 0 )
                ++IoBoostedPagingIrpCount;
              else
                ++IoBoostedThreadedIrpCount;
            }
          }
        }
LABEL_20:
        v15 = *(_QWORD *)v15;
      }
      while ( (KSPIN_LOCK *)v15 != a1 + 208 );
      v16 = v41;
    }
    KxReleaseSpinLock(a1 + 234);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v40 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v40);
    }
    __writecr8(v16);
    if ( v8 )
      goto LABEL_29;
  }
  v20 = 0;
  Objecta = 0LL;
  do
  {
    v46 = *(__int64 *)((char *)RunRef + (_QWORD)v13);
    if ( !v46 )
      goto LABEL_26;
    v30 = KeAcquireQueuedSpinLock(0xAuLL);
    v42 = v30;
    v31 = *(_QWORD *)((*(PEX_RUNDOWN_REF *)((char *)&RunRef[8] + (_QWORD)v13))[4].Count + 8);
    if ( !v31 )
      goto LABEL_57;
    while ( (*(_DWORD *)(v31 + 48) & 0x1000000) == 0 )
    {
LABEL_55:
      v31 = *(_QWORD *)(v31 + 16);
      if ( !v31 )
        goto LABEL_56;
    }
    if ( v8 < 2 )
    {
      v32 = 6LL * v8;
      LODWORD(v49[v32 + 3]) = a2;
      v49[v32 + 4] = 0LL;
      v49[v32] = v46;
      LOWORD(v49[v32 + 5]) = v20;
      v49[v32 + 1] = v31;
      v49[v32 + 2] = v12;
LABEL_54:
      ObfReferenceObjectWithTag((PVOID)v31, 0x746C6644u);
      ObfReferenceObjectWithTag(v12, 0x746C6644u);
      ++v8;
      goto LABEL_55;
    }
    v35 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
    if ( v35 )
    {
      v35[4] = v50;
      v50 = v35;
      *v35 = v46;
      *((_WORD *)v35 + 20) = v20;
      v35[1] = v31;
      v35[2] = v12;
      *((_DWORD *)v35 + 6) = a2;
      goto LABEL_54;
    }
LABEL_56:
    v13 = Objecta;
    v30 = v42;
LABEL_57:
    KeReleaseQueuedSpinLock(0xAuLL, v30);
LABEL_26:
    ++v20;
    v13 = (char *)v13 + 8;
    Objecta = v13;
  }
  while ( v20 < 8u );
  if ( v8 )
    ++IoBlanketBoostCount;
LABEL_29:
  for ( j = 0; j < v8; ++j )
  {
    if ( j >= 2u )
    {
      v22 = v50;
      v50 = (_QWORD *)v50[4];
    }
    else
    {
      v22 = &v49[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v22 + 8LL))(*v22, v22 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v22, 0);
  }
  v23 = 0LL;
  v24 = 8LL;
  do
  {
    v25 = RunRef[v23 / 8];
    if ( v25 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v23);
      v28 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v23);
      if ( ((unsigned __int64)v25 ^ v28) >= 0xF )
      {
LABEL_85:
        ExReleaseRundownProtection_0(v25);
      }
      else
      {
        while ( 1 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v23),
                  v28 + 1,
                  v28);
          if ( v29 == v28 )
            break;
          if ( ((unsigned __int64)v25 ^ v28) >= 0xF )
            goto LABEL_85;
        }
      }
    }
    v23 += 8LL;
    --v24;
  }
  while ( v24 );
}
