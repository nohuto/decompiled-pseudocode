/*
 * XREFs of IoBoostThreadIoPriority @ 0x1401086DC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400E1528 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x140107EE4 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     IoBoostThreadIo @ 0x140283160 (IoBoostThreadIo.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x14068E510 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x1406D0458 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  __int64 v15; // r8
  KSPIN_LOCK v16; // rdi
  KIRQL v17; // r15
  char v18; // cl
  unsigned __int64 v19; // r15
  void *v20; // r15
  unsigned __int16 v21; // r15
  unsigned __int16 j; // di
  _QWORD *v23; // r15
  unsigned __int64 v24; // rdi
  __int64 v25; // rsi
  struct _EX_RUNDOWN_REF *v26; // r8
  volatile __int64 **v27; // rcx
  __int64 i; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  KIRQL v31; // al
  __int64 v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  PEX_RUNDOWN_REF v36; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v38; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v40; // rcx
  struct _KPRCB *v41; // rcx
  KIRQL v42; // [rsp+28h] [rbp-E0h]
  KIRQL v43; // [rsp+28h] [rbp-E0h]
  char v44; // [rsp+29h] [rbp-DFh]
  void *v46; // [rsp+30h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-D8h]
  PVOID Objecta; // [rsp+38h] [rbp-D0h]
  _QWORD v50[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v51; // [rsp+98h] [rbp-70h]
  PEX_RUNDOWN_REF RunRef[16]; // [rsp+A8h] [rbp-60h]

  v5 = 0;
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = a1 + 232;
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 232);
    if ( (KSPIN_LOCK *)a1[206] == a1 + 206 )
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
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v38);
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
    v46 = 0LL;
    v14 = KeAcquireSpinLockRaiseToDpc(a1 + 232);
    v16 = a1[206];
    v42 = v14;
    v17 = v14;
    if ( (KSPIN_LOCK *)v16 != a1 + 206 )
    {
      do
      {
        v18 = *(_BYTE *)(v16 + 34);
        if ( *(char *)(v16 + 35) <= v18 )
        {
          v19 = *(_QWORD *)(v16 + 152);
          if ( v19 < v16 + 8 * (9LL * v18 + 22) )
          {
            v20 = *(void **)(v19 + 40);
            if ( v20 )
            {
              while ( 1 )
              {
                if ( RunRef[(unsigned __int16)v13] )
                {
                  v44 = 0;
                  v27 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                  KxAcquireQueuedSpinLock((__int64)v27, v27[1], v15);
                  for ( i = *(_QWORD *)(RunRef[(unsigned __int16)v13 + 8][4].Count + 8); i; i = *(_QWORD *)(i + 16) )
                  {
                    if ( (void *)i == v20 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                    {
                      v44 = 1;
                      break;
                    }
                  }
                  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
                  if ( v44 == 1 && v46 != v20 )
                    break;
                }
                LOWORD(v13) = (_WORD)v13 + 1;
                if ( (unsigned __int16)v13 >= 8u )
                  goto LABEL_19;
              }
              v46 = v20;
              if ( v8 >= 2 )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
                if ( !PoolWithTag )
                {
LABEL_19:
                  v13 = 0LL;
                  goto LABEL_20;
                }
                PoolWithTag[4] = v51;
                v51 = PoolWithTag;
                v40 = (unsigned __int16)v13;
                *((_WORD *)PoolWithTag + 20) = (_WORD)v13;
                v13 = 0LL;
                PoolWithTag[1] = v20;
                PoolWithTag[2] = a1;
                *PoolWithTag = RunRef[v40];
                *((_DWORD *)PoolWithTag + 6) = a2;
              }
              else
              {
                v35 = 6LL * v8;
                v36 = RunRef[(unsigned __int16)v13];
                LOWORD(v50[v35 + 5]) = (_WORD)v13;
                v13 = 0LL;
                v50[v35] = v36;
                LODWORD(v50[v35 + 3]) = a2;
                v50[v35 + 4] = 0LL;
                v50[v35 + 1] = v20;
                v50[v35 + 2] = a1;
              }
              ++v8;
              ObfReferenceObjectWithTag(v20, 0x746C6644u);
              ObfReferenceObjectWithTag(a1, 0x746C6644u);
              if ( (*(_DWORD *)(v16 - 16) & 2) != 0 )
                ++IoBoostedPagingIrpCount;
              else
                ++IoBoostedThreadedIrpCount;
            }
          }
        }
LABEL_20:
        v16 = *(_QWORD *)v16;
      }
      while ( (KSPIN_LOCK *)v16 != a1 + 206 );
      v17 = v42;
    }
    KxReleaseSpinLock(a1 + 232);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      v41 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v41);
    }
    __writecr8(v17);
    if ( v8 )
      goto LABEL_29;
  }
  v21 = 0;
  Objecta = 0LL;
  do
  {
    v47 = *(__int64 *)((char *)RunRef + (_QWORD)v13);
    if ( !v47 )
      goto LABEL_26;
    v31 = KeAcquireQueuedSpinLock(0xAuLL);
    v43 = v31;
    v32 = *(_QWORD *)((*(PEX_RUNDOWN_REF *)((char *)&RunRef[8] + (_QWORD)v13))[4].Count + 8);
    if ( !v32 )
      goto LABEL_57;
    while ( (*(_DWORD *)(v32 + 48) & 0x1000000) == 0 )
    {
LABEL_55:
      v32 = *(_QWORD *)(v32 + 16);
      if ( !v32 )
        goto LABEL_56;
    }
    if ( v8 < 2 )
    {
      v33 = 6LL * v8;
      LODWORD(v50[v33 + 3]) = a2;
      v50[v33 + 4] = 0LL;
      v50[v33] = v47;
      LOWORD(v50[v33 + 5]) = v21;
      v50[v33 + 1] = v32;
      v50[v33 + 2] = v12;
LABEL_54:
      ObfReferenceObjectWithTag((PVOID)v32, 0x746C6644u);
      ObfReferenceObjectWithTag(v12, 0x746C6644u);
      ++v8;
      goto LABEL_55;
    }
    v34 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
    if ( v34 )
    {
      v34[4] = v51;
      v51 = v34;
      *v34 = v47;
      *((_WORD *)v34 + 20) = v21;
      v34[1] = v32;
      v34[2] = v12;
      *((_DWORD *)v34 + 6) = a2;
      goto LABEL_54;
    }
LABEL_56:
    v13 = Objecta;
    v31 = v43;
LABEL_57:
    KeReleaseQueuedSpinLock(0xAuLL, v31);
LABEL_26:
    ++v21;
    v13 = (char *)v13 + 8;
    Objecta = v13;
  }
  while ( v21 < 8u );
  if ( v8 )
    ++IoBlanketBoostCount;
LABEL_29:
  for ( j = 0; j < v8; ++j )
  {
    if ( j >= 2u )
    {
      v23 = v51;
      v51 = (_QWORD *)v51[4];
    }
    else
    {
      v23 = &v50[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v23 + 8LL))(*v23, v23 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v23, 0);
  }
  v24 = 0LL;
  v25 = 8LL;
  do
  {
    v26 = RunRef[v24 / 8];
    if ( v26 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v24);
      v29 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v24);
      if ( ((unsigned __int64)v26 ^ v29) >= 0xF )
      {
LABEL_85:
        ExReleaseRundownProtection_0(v26);
      }
      else
      {
        while ( 1 )
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v24),
                  v29 + 1,
                  v29);
          if ( v30 == v29 )
            break;
          if ( ((unsigned __int64)v26 ^ v29) >= 0xF )
            goto LABEL_85;
        }
      }
    }
    v24 += 8LL;
    --v25;
  }
  while ( v25 );
}
