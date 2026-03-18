/*
 * XREFs of KeInsertPriQueue @ 0x14005B2E0
 * Callers:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x14008028C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItemNode @ 0x140080530 (ExpQueueWorkItemNode.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14005BDF0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeInsertPriQueue(__int64 a1, __int64 *a2, int a3, int a4, char a5)
{
  __int64 v5; // r12
  _QWORD **v6; // rdi
  unsigned __int8 v8; // r13
  unsigned __int8 CurrentIrql; // cl
  _KTHREAD *CurrentThread; // rbx
  char v11; // r10
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // ecx
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  _QWORD *v20; // rcx
  struct _KPRCB *v21; // rbp
  __int64 v22; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  char v26; // al
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v29; // ecx
  __int64 v31; // rcx
  __int64 **v32; // rax
  __int64 *v33; // rdx
  __int64 v34; // rdx
  int v35; // edx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  struct _SINGLE_LIST_ENTRY *v42; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  int v44; // eax
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+40h] [rbp-48h]
  int v47; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v48; // [rsp+98h] [rbp+10h]
  int v49; // [rsp+A8h] [rbp+20h] BYREF

  v49 = a4;
  v48 = a2;
  v5 = a3;
  v6 = (_QWORD **)(a1 + 8);
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v46 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v49 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v49);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v11 = a5;
  if ( *v6 != v6 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v12 = 0;
    v13 = a1 + 664;
    v14 = 32LL;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v13 - 4);
      v13 -= 4LL;
      v12 += v15;
      --v14;
      v16 = *(_DWORD *)(a1 + 664);
      if ( v12 >= v16 )
        break;
      if ( v14 <= v5 )
      {
        if ( v12 < v16 )
        {
          v17 = *v6;
          do
          {
            v18 = (_QWORD *)*v17;
            v19 = v17;
            v17 = v18;
            v20 = (_QWORD *)v19[1];
            if ( (_QWORD *)v18[1] != v19 || (_QWORD *)*v20 != v19 )
              goto LABEL_68;
            *v20 = v18;
            v8 = 0;
            v18[1] = v20;
            v21 = KeGetCurrentPrcb();
            v22 = v19[3];
            v47 = 0;
            SchedulerAssist = v21->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v38 = SchedulerAssist[5];
                SchedulerAssist[5] = v38 + 1;
                if ( v38 == -1 )
LABEL_53:
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
            {
              v36 = v21->SchedulerAssist;
              if ( v36 )
              {
                if ( v21->NestingLevel <= 1u )
                {
                  v39 = v36[5] - 1;
                  v36[5] = v39;
                  if ( !v39 )
                    KiRemoveSystemWorkPriorityKick(v21);
                }
              }
              do
                KeYieldProcessorEx(&v47);
              while ( *(_QWORD *)(v22 + 64) );
              v37 = v21->SchedulerAssist;
              if ( v37 )
              {
                if ( v21->NestingLevel <= 1u )
                {
                  v40 = v37[5];
                  v37[5] = v40 + 1;
                  if ( v40 == -1 )
                    goto LABEL_53;
                }
              }
            }
            if ( *(_BYTE *)(v22 + 388) == 5 )
            {
              v24 = (unsigned __int8)*(_DWORD *)(v22 + 540);
              if ( (_DWORD)v24 != (_DWORD)v5 )
              {
                v35 = *(_DWORD *)(v22 + 540) & 0x100;
                if ( !v35 )
                {
                  v41 = *(_QWORD *)(v22 + 232);
                  _InterlockedDecrement((volatile signed __int32 *)(v41 + 4 * v24 + 536));
                  _InterlockedIncrement((volatile signed __int32 *)(v41 + 4 * v5 + 536));
                }
                *(_DWORD *)(v22 + 540) = v35 | (unsigned __int8)v5;
              }
              v8 = KiSignalThread(CurrentPrcb, v22, v48, v19);
              if ( v8 )
              {
                *(_BYTE *)(v22 + 645) = 0;
                v25 = KeGetCurrentPrcb();
                if ( (char)v5 < *(char *)(v22 + 563) )
                {
                  if ( *(_BYTE *)(v22 + 1423) )
                  {
                    v42 = (struct _SINGLE_LIST_ENTRY *)(v22 + 1384);
                    if ( *(_QWORD *)(v22 + 1384) == 1LL )
                    {
                      p_AbSelfIoBoostsList = &v25->AbSelfIoBoostsList;
                      if ( v25 != (struct _KPRCB *)-25712LL )
                      {
                        v42->Next = p_AbSelfIoBoostsList->Next;
                        p_AbSelfIoBoostsList->Next = v42;
                        _InterlockedIncrement16((volatile signed __int16 *)(v22 + 1420));
                        KiAbQueueAutoBoostDpc(v25);
                      }
                    }
                  }
                }
                v26 = *(_BYTE *)(v22 + 564);
                *(_BYTE *)(v22 + 563) = v5;
                if ( v26 )
                {
                  if ( (v26 & 0xF) != 0 )
                    *(_DWORD *)(v22 + 1424) = MEMORY[0xFFFFF78000000320];
                  *(_BYTE *)(v22 + 564) = 0;
                }
                if ( (_DWORD)v5 != *(char *)(v22 + 195) )
                {
                  v34 = *(_QWORD *)(v22 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v22 + 651);
                  if ( (*(_DWORD *)(v22 + 120) & 0x20) != 0 )
                    _interlockedbittestandreset((volatile signed __int32 *)(v22 + 120), 5u);
                  *(_QWORD *)(v22 + 32) = v34;
                  KiSetPriorityThread((_BYTE *)v22, 0LL, v5);
                }
              }
            }
            *(_QWORD *)(v22 + 64) = 0LL;
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            if ( v28 )
            {
              if ( v27->NestingLevel <= 1u )
              {
                v44 = v28[5] - 1;
                v28[5] = v44;
                if ( !v44 )
                  KiRemoveSystemWorkPriorityKick(v27);
              }
            }
            ++*((_BYTE *)v19 + 17);
            if ( v8 )
            {
              v11 = a5;
              goto LABEL_23;
            }
          }
          while ( v17 != (_QWORD *)(a1 + 8) );
          v11 = a5;
        }
        break;
      }
    }
  }
  if ( (v11 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v31 = 16 * v5 + a1 + 24;
    v32 = *(__int64 ***)(v31 + 8);
    if ( *v32 != (__int64 *)v31 )
LABEL_68:
      __fastfail(3u);
    v33 = v48;
    *v48 = v31;
    v33[1] = (__int64)v32;
    *v32 = v33;
    *(_QWORD *)(v31 + 8) = v33;
  }
LABEL_23:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (v11 & 1) != 0 )
    v29 = 3;
  else
    v29 = 0;
  KiExitDispatcher((_DWORD)CurrentPrcb, v29, 1, 0, v46);
  return v8;
}
