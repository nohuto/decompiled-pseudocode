/*
 * XREFs of KiSetPriorityThread @ 0x14000F8C0
 * Callers:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KiSetPriorityBoost @ 0x140014290 (KiSetPriorityBoost.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x140047950 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x14005A030 (KeRemovePriQueue.c)
 *     KeInsertPriQueue @ 0x14005B380 (KeInsertPriQueue.c)
 *     KiSetPriorityFloor @ 0x1400C6CFC (KiSetPriorityFloor.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400E8EEC (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiClearPriorityFloor @ 0x140123008 (KiClearPriorityFloor.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x14000FC70 (KiComputePriorityFloor.c)
 *     KiAcquireThreadStateLock @ 0x14000FCA0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14000FFF0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140010050 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiSelectReadyThreadEx @ 0x1400101A0 (KiSelectReadyThreadEx.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010278 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E9CC4 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400E9F0C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14012D268 (KiSendSoftwareInterrupt.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSetPriorityThread(_BYTE *a1, __int64 *a2, unsigned __int8 a3)
{
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // r9
  int v8; // r15d
  int v9; // edi
  char v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 *v13; // r13
  bool v14; // cc
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // rcx
  char v21; // al
  char v22; // cl
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 ready; // rax
  __int64 v26; // rbp
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rdx
  char IsThreadRankNonZero; // al
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  v5 = (char)KiComputePriorityFloor(a1, a3);
  if ( (char)a1[195] == v5 )
    return 0;
  v6 = KiAcquireThreadStateLock(a1, &v31, &v32);
  v8 = (char)a1[195];
  v9 = 0;
  v10 = 0;
  if ( v6 != 2 )
  {
    if ( v6 == 1 )
    {
      v11 = v31;
      KiRemoveThreadFromAnyReadyQueue(v31, v32, a1, (unsigned int)v8);
      KiUpdateThreadPriority(0LL, a1, v5, 0LL);
      KiPrepareReadyThreadForRescheduling(a1, v5, a2);
    }
    else if ( v6 == 3 )
    {
      v11 = v31;
      LOBYTE(v7) = 1;
      KiUpdateThreadPriority(v31, a1, v5, v7);
      if ( (int)v5 < v8 )
      {
        ready = KiSelectReadyThreadEx(v11, a1, 0LL);
        v26 = ready;
        if ( ready )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v11);
            v27 = 1;
            if ( !IsThreadRankNonZero )
              v27 = *(_BYTE *)(v26 + 195);
          }
          else
          {
            v27 = *(_BYTE *)(ready + 195);
          }
          **(_BYTE **)(v11 + 56) = v27;
          v28 = *(_QWORD *)(v11 + 25016);
          if ( v28 )
          {
            v29 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v26 != *(_QWORD *)(v11 + 24) )
              v29 = (unsigned int)v27;
            KiSetSchedulerAssistPriority(*(_QWORD *)(v11 + 25016), v29, 0LL);
            v28 = *(_QWORD *)(v11 + 25016);
          }
          *(_QWORD *)(v11 + 16) = v26;
          if ( v28 )
            *(_BYTE *)(v28 + 16) = v26 == *(_QWORD *)(v11 + 24);
          if ( *(_BYTE *)(v26 + 388) == 1 )
            *(_DWORD *)(v26 + 132) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v26 + 388) = 3;
          KiInsertDeferredReadyList(a2, (__int64)a1);
          v11 = v31;
        }
      }
      else
      {
        v9 = v5;
      }
    }
    else
    {
      KiUpdateThreadPriority(0LL, a1, v5, 0LL);
      v11 = v31;
    }
    goto LABEL_7;
  }
  v11 = v31;
  v12 = *(_QWORD *)(v31 + 16);
  v13 = (__int64 *)(v31 + 16);
  LOBYTE(v7) = v12 == 0;
  KiUpdateThreadPriority(v31, a1, v5, v7);
  v14 = (int)v5 <= v8;
  if ( (int)v5 >= v8 )
    goto LABEL_15;
  if ( v12 )
  {
    v14 = (int)v5 <= v8;
LABEL_15:
    if ( !v14 && !v12 )
    {
      if ( a1[388] == 2 )
        v9 = v5;
      v11 = v31;
    }
    goto LABEL_7;
  }
  v11 = v31;
  if ( a1[388] == 2 )
  {
    v15 = KiSelectReadyThreadEx(v31, a1, 0LL);
    v16 = v15;
    if ( v15 )
    {
      if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
      {
        v21 = KiIsThreadRankNonZero(v15, v11);
        v22 = 1;
        if ( !v21 )
          v22 = *(_BYTE *)(v16 + 195);
      }
      else
      {
        v22 = *(_BYTE *)(v15 + 195);
      }
      **(_BYTE **)(v11 + 56) = v22;
      v23 = *(_QWORD *)(v11 + 25016);
      if ( v23 )
      {
        v24 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v16 != *(_QWORD *)(v11 + 24) )
          v24 = (unsigned int)v22;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v11 + 25016), v24, 0LL);
        v23 = *(_QWORD *)(v11 + 25016);
      }
      *v13 = v16;
      if ( v23 )
        *(_BYTE *)(v23 + 16) = v16 == *(_QWORD *)(v11 + 24);
      if ( *(_BYTE *)(v16 + 388) == 1 )
        *(_DWORD *)(v16 + 132) = *(_DWORD *)(v16 + 132) - *(_DWORD *)(v16 + 436) + MEMORY[0xFFFFF78000000320];
      v11 = v31;
      v10 = 1;
      *(_BYTE *)(v16 + 388) = 3;
    }
  }
  else if ( *(_DWORD *)(v31 + 22808) >> (v5 + 1) )
  {
    a1[112] |= 0x10u;
  }
LABEL_7:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  KiReleaseThreadStateLock(v17, v11, v32);
  if ( v10 )
  {
    LODWORD(v18) = KeGetPcr()->Prcb.Number;
    v20 = *(unsigned int *)(v31 + 36);
    if ( (_DWORD)v18 != (_DWORD)v20 )
    {
      LOBYTE(v18) = 2;
      KiSendSoftwareInterrupt(v20, v18);
    }
  }
  if ( v9 > 0 )
    KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v31, (unsigned int)v9);
  return 1;
}
