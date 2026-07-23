/*
 * XREFs of KiTimerWaitTest @ 0x1400C7AB0
 * Callers:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     KeSetTimerEx @ 0x14001DF70 (KeSetTimerEx.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiProcessExpiredTimerList @ 0x1400C7760 (KiProcessExpiredTimerList.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14016FCEC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // r8
  __int64 v6; // rax
  char v7; // si
  ULONG_PTR v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  unsigned int v14; // r9d
  bool inserted; // al
  _QWORD *v16; // rcx
  _QWORD *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rcx
  char v21; // al
  bool v22; // zf
  __int64 v23; // rdi
  _QWORD *v24; // rbp
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r14
  _KTHREAD *v27; // rsi
  unsigned __int8 v28; // al
  int v29; // edx
  __int64 *v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rdx
  char v33; // al
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v35; // rbp
  __int64 v36; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  char v41; // al
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rsi
  struct _KPRCB *v45; // rbx
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  int v57; // eax
  __int64 v58; // rbx
  _QWORD *v59; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v61; // rbp
  _KTHREAD *CurrentThread; // rdi
  unsigned __int8 IsThreadRunning; // al
  int v64; // ecx
  __int64 *v65; // rdx
  ULONG_PTR v66; // rcx
  unsigned int *v67; // rdx
  int v69; // [rsp+30h] [rbp-68h] BYREF
  int v70; // [rsp+34h] [rbp-64h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h]
  __int64 v72; // [rsp+40h] [rbp-58h] BYREF
  int v73; // [rsp+48h] [rbp-50h]
  unsigned __int8 v74; // [rsp+A8h] [rbp+10h]
  char v76; // [rsp+B8h] [rbp+20h]

  v74 = -1;
  v5 = 0LL;
  v6 = *(int *)(a2 + 60);
  v7 = *(_BYTE *)a2 & 0x7F;
  v76 = v7;
  v8 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  BugCheckParameter2 = v8;
  if ( (_DWORD)v6 )
  {
    v9 = -10000 * v6;
    v74 = 0;
    if ( *(_BYTE *)(a1 + 11882) )
    {
      if ( ++*(_DWORD *)(a1 + 23460) >= 0xBB8u )
      {
        v10 = *(_DWORD *)(a1 + 23464);
        *(_DWORD *)(a1 + 23460) = 0;
        if ( v10 < 0x5F5E100 )
          *(_DWORD *)(a1 + 23464) = KeTimeIncrement + v10;
      }
      v9 -= *(unsigned int *)(a1 + 23464);
    }
    if ( v9 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v11 = 0LL;
    v73 = *(_DWORD *)a2;
    v12 = v73 >> 8;
    if ( (v73 & 0xFC00) != 0 )
      v11 = (unsigned __int8)(BYTE1(v73) & 0xFC) << 16;
    HIBYTE(v73) = 64;
    BYTE1(v73) = v12 & 0xFE;
    v13 = v8;
    do
    {
      *(_QWORD *)(a2 + 24) -= v9;
      BYTE2(v73) = (unsigned __int64)(v11 + *(_QWORD *)(a2 + 24)) >> 18;
      v14 = BYTE2(v73);
      *(_DWORD *)a2 = v73;
      inserted = KiInsertTimerTable(a1, a2, v13, v14, 0LL);
      v5 = 0LL;
    }
    while ( !inserted );
    v7 = v76;
  }
  v16 = (_QWORD *)(a2 + 8);
  v17 = *(_QWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  if ( v7 == 8 )
  {
    if ( v17 != v16 )
    {
      while ( 1 )
      {
        v31 = (__int64)v17;
        v32 = 2LL;
        v17 = (_QWORD *)*v17;
        v33 = *(_BYTE *)(v31 + 16);
        if ( v33 == 1 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v35 = *(unsigned __int16 *)(v31 + 18);
          v36 = *(_QWORD *)(v31 + 24);
          v69 = 0;
          while ( 1 )
          {
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v38 = SchedulerAssist[5];
                SchedulerAssist[5] = v38 + 1;
                if ( v38 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v36 + 64), 0LL) )
              break;
            v39 = CurrentPrcb->SchedulerAssist;
            if ( v39 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v40 = v39[5] - 1;
                v39[5] = v40;
                if ( !v40 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v69, v32, v5);
            while ( *(_QWORD *)(v36 + 64) );
          }
          if ( *(_BYTE *)(v36 + 388) == 5 )
          {
            v41 = *(_BYTE *)(v36 + 112);
            v42 = v41 & 7;
            if ( v42 == 1 || v42 == 4 )
            {
              v43 = *(_QWORD *)(v36 + 232);
              if ( v43 )
              {
                if ( (*(_BYTE *)v43 & 0x7F) == 0x15 )
                {
                  *(_DWORD *)(v36 + 540) = (unsigned __int8)*(_DWORD *)(v36 + 540);
                  _InterlockedIncrement((volatile signed __int32 *)(v43 + 4LL * *(unsigned int *)(v36 + 540) + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v43 + 40));
                }
              }
              v44 = *(_QWORD *)(v36 + 712);
              if ( v44 )
              {
                v45 = KeGetCurrentPrcb();
                v70 = 0;
                while ( 1 )
                {
                  v46 = v45->SchedulerAssist;
                  if ( v46 )
                  {
                    if ( v45->NestingLevel <= 1u )
                    {
                      v47 = v46[5];
                      v46[5] = v47 + 1;
                      if ( v47 == -1 )
                        KiRemoveSystemWorkPriorityKick(v45);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v44 + 22800), 0LL) )
                    break;
                  v48 = v45->SchedulerAssist;
                  if ( v48 )
                  {
                    if ( v45->NestingLevel <= 1u )
                    {
                      v49 = v48[5] - 1;
                      v48[5] = v49;
                      if ( !v49 )
                        KiRemoveSystemWorkPriorityKick(v45);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v70, v32, v5);
                  while ( *(_QWORD *)(v44 + 22800) );
                }
                if ( *(_QWORD *)(v36 + 712) )
                {
                  v50 = *(_QWORD *)(v36 + 216);
                  v51 = *(_QWORD **)(v36 + 224);
                  if ( *(_QWORD *)(v50 + 8) != v36 + 216 || *v51 != v36 + 216 )
LABEL_121:
                    __fastfail(3u);
                  *v51 = v50;
                  *(_QWORD *)(v50 + 8) = v51;
                  *(_QWORD *)(v36 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v44 + 22800), 0LL);
                v52 = KeGetCurrentPrcb();
                v53 = v52->SchedulerAssist;
                if ( v53 )
                {
                  if ( v52->NestingLevel <= 1u )
                  {
                    v54 = v53[5] - 1;
                    v53[5] = v54;
                    if ( !v54 )
                      KiRemoveSystemWorkPriorityKick(v52);
                  }
                }
              }
              if ( *(_BYTE *)(v36 + 388) == 1 )
                *(_DWORD *)(v36 + 116) |= 2u;
              KiSetThreadState(v36, 7LL);
              *(_QWORD *)(v36 + 216) = *(_QWORD *)(a1 + 11528);
              *(_QWORD *)(a1 + 11528) = v36 + 216;
              *(_QWORD *)(v36 + 200) = v35;
            }
            else if ( (*(_BYTE *)(v36 + 112) & 7) != 0 )
            {
              if ( v42 == 5 )
              {
                *(_BYTE *)(v36 + 112) = v41 & 0xF8 | 6;
              }
              else if ( v42 == 3 )
              {
                *(_BYTE *)(v31 + 17) = 2;
              }
            }
            else
            {
              *(_BYTE *)(v36 + 112) = v41 & 0xF8 | 2;
              *(_QWORD *)(v36 + 200) = v35;
              *(_BYTE *)(v31 + 17) = 0;
            }
          }
          *(_QWORD *)(v36 + 64) = 0LL;
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          if ( v56 )
          {
            if ( v55->NestingLevel <= 1u )
            {
              v57 = v56[5] - 1;
              v56[5] = v57;
              if ( !v57 )
                KiRemoveSystemWorkPriorityKick(v55);
            }
          }
          ++*(_BYTE *)(v31 + 17);
        }
        else if ( v33 == 2 )
        {
          *(_BYTE *)(v31 + 17) = 5;
          v58 = *(_QWORD *)(v31 + 24);
          *(_QWORD *)v31 = 0LL;
          v59 = (_QWORD *)(v58 + 8);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v61 = KeGetCurrentPrcb();
          CurrentThread = v61->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v61->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v31, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v58);
          if ( (_QWORD *)*v59 == v59
            || *(_DWORD *)(v58 + 40) >= *(_DWORD *)(v58 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v58 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v61, v58, v31) )
          {
            v64 = *(_DWORD *)(v58 + 4);
            *(_DWORD *)(v58 + 4) = v64 + 1;
            v65 = *(__int64 **)(v58 + 32);
            if ( *v65 != v58 + 24 )
              goto LABEL_121;
            *(_QWORD *)v31 = v58 + 24;
            *(_QWORD *)(v31 + 8) = v65;
            *v65 = v31;
            *(_QWORD *)(v58 + 32) = v31;
            if ( !v64 && (_QWORD *)*v59 != v59 )
              KiWakeOtherQueueWaiters(v61, v58);
          }
          _InterlockedAnd((volatile signed __int32 *)v58, 0xFFFFFF7F);
        }
        else
        {
          KiTryUnwaitThread(a1, v31, 256LL, 0LL);
        }
        v16 = (_QWORD *)(a2 + 8);
        if ( v17 == (_QWORD *)(a2 + 8) )
          break;
        v5 = 0LL;
      }
    }
    v16[1] = v16;
    *v16 = v16;
  }
  else if ( v17 != v16 )
  {
    do
    {
      v18 = (_QWORD *)*v17;
      v19 = (__int64)v17;
      v17 = v18;
      v20 = *(_QWORD **)(v19 + 8);
      if ( v18[1] != v19 || *v20 != v19 )
        __fastfail(3u);
      *v20 = v18;
      v18[1] = v20;
      v21 = *(_BYTE *)(v19 + 16);
      if ( v21 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(a1, v19, *(unsigned __int16 *)(v19 + 18), 0LL) )
        {
          v22 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v22 )
            break;
        }
      }
      else if ( v21 == 2 )
      {
        *(_BYTE *)(v19 + 17) = 5;
        v23 = *(_QWORD *)(v19 + 24);
        *(_QWORD *)v19 = 0LL;
        v24 = (_QWORD *)(v23 + 8);
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v26 = KeGetCurrentPrcb();
        v27 = v26->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v28 = KeIsThreadRunning(v26->CurrentThread);
          EtwTraceEnqueueWork(v27, v19, v28);
        }
        KiAcquireKobjectLockSafe(v23);
        if ( (_QWORD *)*v24 == v24
          || *(_DWORD *)(v23 + 40) >= *(_DWORD *)(v23 + 44)
          || v27->Queue == (_DISPATCHER_HEADER *volatile)v23 && v27->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v26, v23, v19) )
        {
          v29 = *(_DWORD *)(v23 + 4);
          *(_DWORD *)(v23 + 4) = v29 + 1;
          v30 = *(__int64 **)(v23 + 32);
          if ( *v30 != v23 + 24 )
            __fastfail(3u);
          *(_QWORD *)v19 = v23 + 24;
          *(_QWORD *)(v19 + 8) = v30;
          *v30 = v19;
          *(_QWORD *)(v23 + 32) = v19;
          if ( !v29 && (_QWORD *)*v24 != v24 )
            KiWakeOtherQueueWaiters(v26, v23);
        }
        _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
        v22 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v22 )
          break;
      }
      else
      {
        KiTryUnwaitThread(a1, v19, 256LL, 0LL);
      }
    }
    while ( v17 != (_QWORD *)(a2 + 8) );
  }
  v66 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
    goto LABEL_131;
  v67 = a3;
  if ( !a3 )
  {
    v67 = (unsigned int *)&v72;
    v72 = MEMORY[0xFFFFF78000000014];
LABEL_134:
    KiInsertQueueDpc(BugCheckParameter2, *v67, v67[1], (volatile signed __int32 *)a2, v74);
    return 0LL;
  }
  if ( KiSerializeTimerExpiration && *(_WORD *)(BugCheckParameter2 + 2) >= 0x500u
    || *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(a1 + 11880) )
  {
    goto LABEL_134;
  }
  *(_QWORD *)(a1 + 11808) = BugCheckParameter2;
  if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v66 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(v66 + 16), *(unsigned __int8 *)(a1 + 209));
LABEL_131:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v74 << 24) | 0x80));
  return v66;
}
