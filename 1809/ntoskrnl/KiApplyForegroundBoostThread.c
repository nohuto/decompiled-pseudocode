/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1400D7EEC
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D7D30 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFE18 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117384 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1401177F0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 a2)
{
  char v4; // si
  __int64 Number; // rcx
  char v6; // r8
  struct _KPRCB *v7; // rbx
  __int64 v9; // r9
  char v10; // dl
  int v11; // r12d
  int v12; // esi
  int v13; // r15d
  char v14; // r13
  _KTHREAD *NextThread; // r14
  bool v16; // cc
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  struct _KPRCB *v20; // [rsp+70h] [rbp+50h] BYREF
  volatile signed __int32 *v21; // [rsp+78h] [rbp+58h] BYREF

  v4 = 0;
  v6 = KiAcquireThreadStateLock(a1, (__int64)&v20, &v21);
  if ( (unsigned __int8)(v6 - 1) <= 2u || v6 == 7 )
  {
    v4 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 )
    {
      if ( *(_BYTE *)(a1 + 564) )
        goto LABEL_24;
      if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
        goto LABEL_24;
      LOBYTE(Number) = *(_BYTE *)(a1 + 195);
      if ( (char)Number <= 0 )
        goto LABEL_24;
      v9 = 15LL;
      v10 = BYTE6(Mm64BitPhysicalAddress) + *(_BYTE *)(a1 + 563);
      if ( v10 >= 16 )
        v10 = 15;
      if ( v10 <= (char)Number )
      {
LABEL_24:
        v7 = v20;
        goto LABEL_25;
      }
      v11 = (char)Number;
      v12 = v10;
      v13 = 0;
      *(_BYTE *)(a1 + 564) = (v10 - Number) & 0xF;
      v14 = 0;
      switch ( v6 )
      {
        case 1:
          v7 = v20;
          KiRemoveThreadFromAnyReadyQueue(v20, v21, a1, (unsigned int)(char)Number);
          KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v12, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v12, a2);
          break;
        case 2:
          v7 = v20;
          NextThread = v20->NextThread;
          LOBYTE(v9) = NextThread == 0LL;
          KiUpdateThreadPriority((__int64)v20, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v10, v9);
          v16 = v12 <= v11;
          if ( v12 < v11 )
          {
            if ( !NextThread )
            {
              v7 = v20;
              if ( *(_BYTE *)(a1 + 388) == 2 )
              {
                v19 = KiSelectReadyThreadEx(v20, (_KTHREAD *)a1, 0LL);
                if ( v19 )
                {
                  KiUpdatePriorityMatrixThreadState(v7, v19, 2LL, 3LL);
                  v14 = 1;
                }
              }
              else if ( v20->ReadySummary >> (v12 + 1) )
              {
                *(_BYTE *)(a1 + 112) |= 0x10u;
              }
              break;
            }
            v16 = v12 <= v11;
          }
          if ( !v16 && !NextThread )
          {
            v7 = v20;
            if ( *(_BYTE *)(a1 + 388) == 2 )
              goto LABEL_19;
          }
          break;
        case 3:
          v7 = v20;
          LOBYTE(v9) = 1;
          KiUpdateThreadPriority((__int64)v20, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v10, v9);
          if ( v12 < v11 )
          {
            v18 = KiSelectReadyThreadEx(v7, (_KTHREAD *)a1, 0LL);
            if ( v18 )
            {
              KiUpdatePriorityMatrixThreadState(v7, v18, 2LL, 3LL);
              KiInsertDeferredReadyList(a2, a1);
            }
            break;
          }
LABEL_19:
          v13 = v12;
          break;
        default:
          KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v10, 0LL);
          v7 = v20;
          break;
      }
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      KiReleaseThreadStateLock(v17, v7, v21);
      if ( v14 )
      {
        v7 = v20;
        Number = v20->Number;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
          KiSendSoftwareInterrupt();
      }
      if ( v13 > 0 )
      {
        v7 = v20;
        KiHvEnlightenedGuestPriorityKick((__int64)KeGetCurrentPrcb(), (__int64)v20, v13);
      }
      v4 = 1;
LABEL_25:
      if ( v4 )
        return v4;
      goto LABEL_4;
    }
  }
  v7 = v20;
LABEL_4:
  KiReleaseThreadStateLock(Number, v7, v21);
  return v4;
}
