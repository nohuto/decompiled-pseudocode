/*
 * XREFs of CcScheduleReadAheadEx @ 0x14008DEF0
 * Callers:
 *     CcCopyReadEx @ 0x1400AF370 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x1400DFB4C (CcAsyncReadPrefetch.c)
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 *     CcScheduleReadAhead @ 0x140269F50 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 * Callees:
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDetermineReadPattern @ 0x14008E354 (CcDetermineReadPattern.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1400D6078 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF25C (IoReferenceIoAttributionFromThread.c)
 *     CcChargeThreadForReadAhead @ 0x140129A34 (CcChargeThreadForReadAhead.c)
 *     CcPerfLogScheduleReadAhead @ 0x140185C40 (CcPerfLogScheduleReadAhead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcScheduleReadAheadEx(_QWORD *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *CurrentThread)
{
  __int64 v4; // rax
  __int64 Partition; // r13
  int *v7; // rdi
  __int64 v9; // r14
  _DWORD *v11; // rsi
  int IoPriorityThread; // eax
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // r15d
  int Pattern; // eax
  _QWORD *v17; // r11
  int v18; // r14d
  signed __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // eax
  int v22; // r8d
  unsigned int v23; // r9d
  int v24; // edx
  int PagePriorityThread; // eax
  int v26; // edx
  KIRQL v27; // al
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rbx
  unsigned __int8 OldIrql; // si
  int v32; // ecx
  KIRQL v33; // bl
  __int64 v34; // rdx
  unsigned int v35; // edx
  unsigned __int64 v36; // rcx
  struct _KPRCB *v37; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v39; // al
  struct _KPRCB *v40; // rcx
  __int64 v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+50h] [rbp-78h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF
  KIRQL v47; // [rsp+D0h] [rbp+8h]
  unsigned int v49; // [rsp+E0h] [rbp+18h]

  v49 = a3;
  v4 = Object[5];
  Partition = 0LL;
  v7 = (int *)Object[6];
  v9 = a3;
  v11 = *(_DWORD **)(v4 + 8);
  if ( v11 )
    Partition = CcGetPartition(*(_QWORD *)(v4 + 8));
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( v7 )
  {
    if ( v11 )
    {
      v13 = v11[38];
      if ( (v13 & 1) == 0 && (v13 & 0x2000) == 0 && (Object[10] & 0x100000) == 0 && IoPriorityThread >= 2 )
      {
        LOBYTE(IoPriorityThread) = CcCanIWriteStream((KSPIN_LOCK *)Partition, (__int64)Object, 0x1000000u, 0, 4);
        if ( (_BYTE)IoPriorityThread )
        {
          if ( !Partition || !*(_BYTE *)(Partition + 312) )
          {
            v42 = v9;
            v14 = v9 + *a2;
            v15 = ~v7[1] & (v7[1] + v9);
            SpinLock = (PKSPIN_LOCK)(v7 + 20);
            v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 10);
            if ( (*v7 & 0x20000) == 0 )
              *v7 |= 0x20000u;
            Pattern = CcDetermineReadPattern(v7, a2);
            v18 = Pattern;
            if ( Pattern )
            {
              if ( Pattern > 0 )
              {
                if ( Pattern > 2 )
                {
                  if ( Pattern == 3 )
                  {
                    v43 = 2LL * *v17 - *((_QWORD *)v7 + 4);
                    if ( v43 >= 0 )
                    {
                      v22 = -4096;
                      v35 = (v43 & 0xFFF) + v49;
                      LODWORD(v43) = v43 & 0xFFFFF000;
                      v49 = v35;
                      *((_QWORD *)v7 + 7) = v43;
                      v23 = (v35 + 4095) & 0xFFFFF000;
LABEL_25:
                      v7[13] = v23;
                      v24 = *v7;
                      if ( (*v7 & 0x10000) == 0 )
                      {
                        *v7 = v24 | 0x10000;
                        PagePriorityThread = PsGetPagePriorityThread(KeGetCurrentThread());
                        *v7 = v26 ^ (v26 ^ (PagePriorityThread << 18)) & 0x1C0000;
                        KxReleaseSpinLock((PKSPIN_LOCK)v7 + 10);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
                        {
                          v27 = v47;
                          if ( KeGetCurrentIrql() < 2u || v47 >= 2u )
                          {
LABEL_28:
                            __writecr8(v27);
                            if ( (int)CcAllocateWorkQueueEntry(Partition, &v44) >= 0 )
                            {
                              v30 = v44;
                              if ( (xmmword_140542350 & 0x20000) != 0 )
                                CcPerfLogScheduleReadAhead(v44, (_DWORD)Object, (_DWORD)a2, v49, v15, v18, 1);
                              if ( (v11[38] & 0x10000000) != 0 )
                                CcChargeThreadForReadAhead((_DWORD)Object, v28, v29, v18, (__int64)CurrentThread);
                              ObfReferenceObjectWithTag(Object, 0x746C6644u);
                              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
                              ++v11[1];
                              ++v11[134];
                              v11[38] |= 0x4000u;
                              KxReleaseQueuedSpinLock(&LockHandle);
                              OldIrql = LockHandle.OldIrql;
                              if ( KiIrqlFlags
                                && (KiIrqlFlags & 1) != 0
                                && KeGetCurrentIrql() >= 2u
                                && LockHandle.OldIrql < 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                                v30 = v44;
                              }
                              __writecr8(OldIrql);
                              *((_QWORD *)v7 + 14) = v30;
                              *(_BYTE *)(v30 + 120) = 1;
                              *(_QWORD *)(v30 + 16) = Object;
                              *(_QWORD *)(v30 + 24) = 0LL;
                              IoReferenceIoAttributionFromThread(CurrentThread);
                              LOBYTE(IoPriorityThread) = CcPostWorkQueue(v30, Partition + 240);
                              return IoPriorityThread;
                            }
                            v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 10);
                            *v7 &= ~0x10000u;
                            v33 = v39;
                            KxReleaseSpinLock((PKSPIN_LOCK)v7 + 10);
                            if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v33 >= 2u )
                            {
LABEL_40:
                              LOBYTE(IoPriorityThread) = v33;
                              __writecr8(v33);
                              return IoPriorityThread;
                            }
LABEL_72:
                            v40 = KeGetCurrentPrcb();
                            _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
                            KiRemoveSystemWorkPriorityKick(v40);
                            goto LABEL_40;
                          }
                          v37 = KeGetCurrentPrcb();
                          _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
                          KiRemoveSystemWorkPriorityKick(v37);
                        }
                        v27 = v47;
                        goto LABEL_28;
                      }
                      v32 = 1;
                      if ( (v11[38] & 0x10000000) != 0 )
                      {
                        CcChargeThreadForReadAhead((_DWORD)Object, v24, v22, v18, (__int64)CurrentThread);
                        LODWORD(v17) = (_DWORD)a2;
                        v32 = 1;
                      }
LABEL_37:
                      if ( (xmmword_140542350 & 0x20000) != 0 )
                        CcPerfLogScheduleReadAhead(0, (_DWORD)Object, (_DWORD)v17, v49, v15, v18, v32);
                      KxReleaseSpinLock(SpinLock);
                      v33 = v47;
                      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v47 >= 2u )
                        goto LABEL_40;
                      goto LABEL_72;
                    }
                  }
                }
                else
                {
                  v19 = *((_QWORD *)v7 + 8);
                  if ( v14 + v42 + (unsigned int)(2 * v15) >= v19 )
                  {
                    *((_QWORD *)v7 + 7) = v14 & 0xFFFFFFFFFFFFF000uLL;
                    if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v19 )
                      LODWORD(v19) = ~(v15 - 1) & (v15 + v14 - 1);
                    ++v7[12];
                    v20 = v15;
                    v21 = v7[12];
                    if ( v18 == 1 || v21 >= 3 )
                      v20 = 2 * v15;
                    v22 = v19 - (v14 & 0xFFFFF000);
                    v23 = v22 + v20;
                    if ( v21 >= 3 )
                    {
                      v34 = (unsigned int)v7[23];
                      if ( (_DWORD)v34 )
                      {
                        v36 = v34 * (unsigned __int64)(v49 * v21) / 0x64;
                        if ( v36 > 0xFFFFFFFF )
                          v36 = 0xFFFFFFFFLL;
                        if ( v36 > v23 )
                          v23 = v36;
                      }
                    }
                    goto LABEL_25;
                  }
                }
              }
            }
            else
            {
              v7[12] = 0;
              *((_QWORD *)v7 + 8) = 0LL;
              *((_QWORD *)v7 + 9) = 0LL;
            }
            v32 = 0;
            goto LABEL_37;
          }
        }
      }
    }
  }
  return IoPriorityThread;
}
