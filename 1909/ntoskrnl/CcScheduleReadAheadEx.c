/*
 * XREFs of CcScheduleReadAheadEx @ 0x140090340
 * Callers:
 *     CcAsyncCopyRead @ 0x140090970 (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x140091B00 (CcAsyncReadPrefetch.c)
 *     CcCopyReadEx @ 0x1400B5810 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x14027D500 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14005A580 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcCanIWriteStream @ 0x14007BEA4 (CcCanIWriteStream.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E504 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14007FA14 (CcPostWorkQueue.c)
 *     CcDetermineReadPattern @ 0x14009079C (CcDetermineReadPattern.c)
 *     IoReferenceIoAttributionFromThread @ 0x140090E1C (IoReferenceIoAttributionFromThread.c)
 *     CcChargeThreadForReadAhead @ 0x140090F48 (CcChargeThreadForReadAhead.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     CcPerfLogScheduleReadAhead @ 0x140158898 (CcPerfLogScheduleReadAhead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcScheduleReadAheadEx(_SLIST_ENTRY *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *a4)
{
  _SLIST_ENTRY *Next; // rdi
  __int64 Partition; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  _DWORD *v11; // rsi
  int IoPriorityThread; // eax
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // r12d
  int Pattern; // eax
  _QWORD *v17; // r11
  int v18; // r15d
  signed __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  int v23; // edx
  int PagePriorityThread; // eax
  int v25; // edx
  KIRQL v26; // al
  int v27; // edx
  int v28; // r8d
  PSLIST_ENTRY v29; // rbx
  unsigned __int8 OldIrql; // si
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  KIRQL v34; // bl
  __int64 v35; // rax
  unsigned int v36; // edx
  unsigned __int64 v37; // rcx
  struct _KPRCB *v38; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v40; // al
  struct _KPRCB *v41; // rcx
  __int64 v43; // [rsp+50h] [rbp-21h]
  _SLIST_ENTRY *v44; // [rsp+50h] [rbp-21h]
  __int64 v45; // [rsp+50h] [rbp-21h]
  PSLIST_ENTRY v46; // [rsp+58h] [rbp-19h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-9h] BYREF
  KIRQL v49; // [rsp+D8h] [rbp+67h]
  unsigned int v51; // [rsp+E8h] [rbp+77h]
  __int64 v52; // [rsp+F0h] [rbp+7Fh]

  v52 = (__int64)a4;
  v51 = a3;
  Next = Object[3].Next;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = a4;
  v9 = *((_QWORD *)&Object[2].Next + 1);
  v10 = a3;
  v11 = *(_DWORD **)(v9 + 8);
  if ( v11 )
    Partition = CcGetPartition(*(_QWORD **)(v9 + 8));
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v52 = (__int64)CurrentThread;
  }
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( Next )
  {
    if ( v11 )
    {
      v13 = v11[38];
      if ( (v13 & 1) == 0 && (v13 & 0x2000) == 0 && ((__int64)Object[5].Next & 0x100000) == 0 && IoPriorityThread >= 2 )
      {
        LOBYTE(IoPriorityThread) = CcCanIWriteStream((KSPIN_LOCK *)Partition, (__int64)Object, 0x1000000u, 0, 4);
        if ( (_BYTE)IoPriorityThread )
        {
          if ( !Partition || !*(_BYTE *)(Partition + 312) )
          {
            v43 = v10;
            v14 = v10 + *a2;
            v15 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + v10);
            SpinLock = (PKSPIN_LOCK)&Next[5];
            v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
            if ( ((__int64)Next->Next & 0x20000) == 0 )
              LODWORD(Next->Next) |= 0x20000u;
            Pattern = CcDetermineReadPattern(Next, a2);
            v18 = Pattern;
            if ( Pattern )
            {
              if ( Pattern > 0 )
              {
                if ( Pattern > 2 )
                {
                  if ( Pattern == 3 )
                  {
                    v45 = 2LL * *v17 - (unsigned __int64)Next[2].Next;
                    if ( v45 >= 0 )
                    {
                      v36 = (v45 & 0xFFF) + v51;
                      LODWORD(v45) = v45 & 0xFFFFF000;
                      v51 = v36;
                      *((_QWORD *)&Next[3].Next + 1) = v45;
                      v22 = (v36 + 4095) & 0xFFFFF000;
LABEL_25:
                      HIDWORD(Next[3].Next) = v22;
                      v23 = (int)Next->Next;
                      if ( ((__int64)Next->Next & 0x10000) == 0 )
                      {
                        LODWORD(Next->Next) = v23 | 0x10000;
                        PagePriorityThread = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
                        LODWORD(Next->Next) = v25 ^ (v25 ^ (PagePriorityThread << 18)) & 0x1C0000;
                        KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
                        {
                          v26 = v49;
                          if ( KeGetCurrentIrql() < 2u || v49 >= 2u )
                          {
LABEL_28:
                            __writecr8(v26);
                            if ( (int)CcAllocateWorkQueueEntry(Partition, &v46) >= 0 )
                            {
                              v29 = v46;
                              if ( (xmmword_140572410 & 0x20000) != 0 )
                                CcPerfLogScheduleReadAhead((_DWORD)v46, (_DWORD)Object, (_DWORD)a2, v51, v15, v18, 1);
                              if ( (v11[38] & 0x10000000) != 0 )
                                CcChargeThreadForReadAhead((_DWORD)Object, v27, v28, v18, v52);
                              ObfReferenceObjectWithTag(Object, 0x746C6644u);
                              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
                              ++v11[1];
                              ++v11[134];
                              v11[38] |= 0x4000u;
                              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                              OldIrql = LockHandle.OldIrql;
                              if ( KiIrqlFlags
                                && (KiIrqlFlags & 1) != 0
                                && KeGetCurrentIrql() >= 2u
                                && LockHandle.OldIrql < 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                                v29 = v46;
                              }
                              __writecr8(OldIrql);
                              Next[7].Next = v29;
                              *((_BYTE *)&v29[7].Next + 8) = 1;
                              v29[1].Next = Object;
                              *((_QWORD *)&v29[1].Next + 1) = 0LL;
                              IoReferenceIoAttributionFromThread(v52);
                              LOBYTE(IoPriorityThread) = CcPostWorkQueue((__int64)v29, Partition + 240, v31, v32);
                              return IoPriorityThread;
                            }
                            v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
                            LODWORD(Next->Next) &= ~0x10000u;
                            v34 = v40;
                            KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                            if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v34 >= 2u )
                            {
LABEL_40:
                              LOBYTE(IoPriorityThread) = v34;
                              __writecr8(v34);
                              return IoPriorityThread;
                            }
LABEL_72:
                            v41 = KeGetCurrentPrcb();
                            _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
                            KiRemoveSystemWorkPriorityKick(v41);
                            goto LABEL_40;
                          }
                          v38 = KeGetCurrentPrcb();
                          _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
                          KiRemoveSystemWorkPriorityKick(v38);
                        }
                        v26 = v49;
                        goto LABEL_28;
                      }
                      v33 = 1;
                      if ( (v11[38] & 0x10000000) != 0 )
                      {
                        CcChargeThreadForReadAhead((_DWORD)Object, v23, v22, v18, v52);
                        LODWORD(v17) = (_DWORD)a2;
                        v33 = 1;
                      }
LABEL_37:
                      if ( (xmmword_140572410 & 0x20000) != 0 )
                        CcPerfLogScheduleReadAhead(0, (_DWORD)Object, (_DWORD)v17, v51, v15, v18, v33);
                      KxReleaseSpinLock(SpinLock);
                      v34 = v49;
                      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v49 >= 2u )
                        goto LABEL_40;
                      goto LABEL_72;
                    }
                  }
                }
                else
                {
                  v19 = (signed __int64)Next[4].Next;
                  if ( v14 + v43 + (unsigned int)(2 * v15) >= v19 )
                  {
                    v44 = Next[4].Next;
                    *((_QWORD *)&Next[3].Next + 1) = v14 & 0xFFFFFFFFFFFFF000uLL;
                    if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v19 )
                      LODWORD(v44) = ~(v15 - 1) & (v15 + v14 - 1);
                    ++LODWORD(Next[3].Next);
                    v20 = v15;
                    v21 = (unsigned int)Next[3].Next;
                    if ( Pattern == 1 || v21 >= 3 )
                      v20 = 2 * v15;
                    v22 = (_DWORD)v44 - *((_DWORD *)&Next[3].Next + 2) + v20;
                    if ( v21 >= 3 )
                    {
                      v35 = *((unsigned int *)&Next[5].Next + 3);
                      if ( (_DWORD)v35 )
                      {
                        v37 = v35 * (unsigned __int64)(v51 * v21) / 0x64;
                        if ( v37 > 0xFFFFFFFF )
                          v37 = 0xFFFFFFFFLL;
                        if ( v37 > v22 )
                          v22 = v37;
                      }
                    }
                    goto LABEL_25;
                  }
                }
              }
            }
            else
            {
              LODWORD(Next[3].Next) = 0;
              Next[4].Next = 0LL;
              *((_QWORD *)&Next[4].Next + 1) = 0LL;
            }
            v33 = 0;
            goto LABEL_37;
          }
        }
      }
    }
  }
  return IoPriorityThread;
}
