/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1400E9970
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E97B0 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
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

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 *a2)
{
  char v4; // si
  __int64 Number; // rcx
  char v6; // r8
  struct _KPRCB *v7; // rbx
  char v9; // dl
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  _KTHREAD *v14; // rsi
  char v15; // cl
  _BYTE *v16; // rax
  __int64 v17; // rdx
  bool v18; // al
  _KTHREAD **p_NextThread; // r12
  _KTHREAD *NextThread; // r14
  bool v21; // cc
  __int64 ready; // rax
  _KTHREAD *v23; // rsi
  char Priority; // cl
  _BYTE *SchedulerAssist; // rax
  __int64 v26; // rdx
  bool IsThreadRankNonZero; // al
  int v28; // r15d
  int v29; // esi
  volatile signed __int64 *v30; // [rsp+20h] [rbp-10h] BYREF
  char v31; // [rsp+80h] [rbp+50h]
  struct _KPRCB *v32; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v6 = KiAcquireThreadStateLock(a1, (__int64 *)&v32, (volatile signed __int32 **)&v30);
  if ( (unsigned __int8)(v6 - 1) <= 2u || v6 == 7 )
  {
    v4 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 )
    {
      if ( *(_BYTE *)(a1 + 564) )
        goto LABEL_13;
      if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
        goto LABEL_13;
      LOBYTE(Number) = *(_BYTE *)(a1 + 195);
      if ( (char)Number <= 0 )
        goto LABEL_13;
      v9 = BYTE6(Mm64BitPhysicalAddress) + *(_BYTE *)(a1 + 563);
      if ( v9 >= 16 )
        v9 = 15;
      if ( v9 <= (char)Number )
      {
LABEL_13:
        v7 = v32;
        goto LABEL_14;
      }
      v28 = (char)Number;
      v10 = 0;
      v29 = v9;
      v31 = 0;
      *(_BYTE *)(a1 + 564) = (v9 - Number) & 0xF;
      switch ( v6 )
      {
        case 1:
          v7 = v32;
          KiRemoveThreadFromAnyReadyQueue(v32, v30, a1, (unsigned int)(char)Number);
          KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v29, 0);
          KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v29, a2);
          break;
        case 2:
          v7 = v32;
          p_NextThread = &v32->NextThread;
          NextThread = v32->NextThread;
          KiUpdateThreadPriority((__int64)v32, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, NextThread == 0LL);
          v21 = v29 <= v28;
          if ( v29 >= v28 )
          {
LABEL_43:
            if ( v21 )
              break;
            if ( NextThread )
              break;
            v7 = v32;
            if ( *(_BYTE *)(a1 + 388) != 2 )
              break;
            goto LABEL_16;
          }
          if ( NextThread )
          {
            v21 = v29 <= v28;
            goto LABEL_43;
          }
          v7 = v32;
          if ( *(_BYTE *)(a1 + 388) != 2 )
          {
            if ( v32->ReadySummary >> (v29 + 1) )
              *(_BYTE *)(a1 + 112) |= 0x10u;
            break;
          }
          ready = KiSelectReadyThreadEx(v32, (_KTHREAD *)a1, 0);
          v23 = (_KTHREAD *)ready;
          if ( ready )
          {
            if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
            {
              IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v7);
              Priority = 1;
              if ( !IsThreadRankNonZero )
                Priority = v23->Priority;
            }
            else
            {
              Priority = *(_BYTE *)(ready + 195);
            }
            *v7->PriorityState = Priority;
            SchedulerAssist = v7->SchedulerAssist;
            if ( SchedulerAssist )
            {
              v26 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v23 != v7->IdleThread )
                v26 = (unsigned int)Priority;
              KiSetSchedulerAssistPriority(v7->SchedulerAssist, v26, 0LL);
              SchedulerAssist = v7->SchedulerAssist;
            }
            *p_NextThread = v23;
            if ( SchedulerAssist )
              SchedulerAssist[16] = v23 == v7->IdleThread;
            if ( v23->WaitBlockFill6[68] == 1 )
              v23->ReadyTime = v23->ReadyTime - v23->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v23->WaitBlockFill6[68] = 3;
            v31 = 1;
            goto LABEL_39;
          }
          break;
        case 3:
          v7 = v32;
          KiUpdateThreadPriority((__int64)v32, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, 1);
          if ( v29 < v28 )
          {
            v13 = KiSelectReadyThreadEx(v7, (_KTHREAD *)a1, 0);
            v14 = (_KTHREAD *)v13;
            if ( !v13 )
              break;
            if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
            {
              v18 = KiIsThreadRankNonZero(v13, v7);
              v15 = 1;
              if ( !v18 )
                v15 = v14->Priority;
            }
            else
            {
              v15 = *(_BYTE *)(v13 + 195);
            }
            *v7->PriorityState = v15;
            v16 = v7->SchedulerAssist;
            if ( v16 )
            {
              v17 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v14 != v7->IdleThread )
                v17 = (unsigned int)v15;
              KiSetSchedulerAssistPriority(v7->SchedulerAssist, v17, 0LL);
              v16 = v7->SchedulerAssist;
            }
            v7->NextThread = v14;
            if ( v16 )
              v16[16] = v14 == v7->IdleThread;
            if ( v14->WaitBlockFill6[68] == 1 )
              v14->ReadyTime = v14->ReadyTime - v14->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v14->WaitBlockFill6[68] = 3;
            KiInsertDeferredReadyList(a2, a1);
            goto LABEL_39;
          }
LABEL_16:
          v10 = v29;
          break;
        default:
          KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, 0);
LABEL_39:
          v7 = v32;
          break;
      }
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      KiReleaseThreadStateLock(v11, (__int64)v7, v30);
      if ( v31 )
      {
        v7 = v32;
        Number = v32->Number;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
        {
          LOBYTE(v12) = 2;
          KiSendSoftwareInterrupt(Number, v12);
        }
      }
      if ( v10 > 0 )
      {
        v7 = v32;
        KiHvEnlightenedGuestPriorityKick((__int64)KeGetCurrentPrcb(), (__int64)v32, v10);
      }
      v4 = 1;
LABEL_14:
      if ( v4 )
        return v4;
      goto LABEL_4;
    }
  }
  v7 = v32;
LABEL_4:
  KiReleaseThreadStateLock(Number, (__int64)v7, v30);
  return v4;
}
