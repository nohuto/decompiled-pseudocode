/*
 * XREFs of KiTimerWaitTest @ 0x1400A35B0
 * Callers:
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiProcessExpiredTimerList @ 0x1400A3270 (KiProcessExpiredTimerList.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1400E2FE0 (KeSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140179ACC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiInsertTimerTable @ 0x140042A10 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rdi
  char v4; // bp
  char v6; // bp
  unsigned __int8 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // ecx
  unsigned int v15; // r9d
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  __int64 v19; // rbp
  char v20; // al
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  char v25; // al
  bool v26; // zf
  unsigned __int8 CurrentIrql; // dl
  _KTHREAD *CurrentThread; // r9
  _QWORD *v29; // r8
  __int64 v30; // rcx
  char v31; // al
  int v32; // r9d
  __int64 *v33; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v35; // r9
  unsigned __int8 v36; // cl
  _KTHREAD *v37; // r9
  unsigned __int8 v38; // al
  __int64 v39; // rdx
  __int64 v40; // r9
  _QWORD *v41; // r10
  __int64 v42; // rcx
  char v43; // al
  int v44; // r9d
  _QWORD *v45; // r8
  unsigned int v46; // ecx
  _QWORD *v47; // [rsp+30h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-70h]
  struct _KPRCB *v49; // [rsp+38h] [rbp-70h]
  __int64 v50; // [rsp+40h] [rbp-68h] BYREF
  _KTHREAD *v51; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+58h] [rbp-50h]
  __int64 v54; // [rsp+60h] [rbp-48h]
  __int64 v55; // [rsp+B8h] [rbp+10h]
  __int64 v56; // [rsp+B8h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_BYTE *)a2;
  v52 = 0LL;
  v6 = v4 & 0x7F;
  v53 = 0LL;
  v54 = 0LL;
  v9 = -1;
  v50 = 0LL;
  v10 = *(int *)(a2 + 60);
  v11 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ v3, KiWaitNever));
  if ( (_DWORD)v10 )
  {
    v12 = -10000 * v10;
    v9 = 0;
    if ( *(_BYTE *)(a1 + 11882) )
    {
      if ( ++*(_DWORD *)(a1 + 23460) >= 0xBB8u )
      {
        v46 = *(_DWORD *)(a1 + 23464);
        *(_DWORD *)(a1 + 23460) = 0;
        if ( v46 < 0x5F5E100 )
          *(_DWORD *)(a1 + 23464) = KeTimeIncrement + v46;
      }
      v12 -= *(unsigned int *)(a1 + 23464);
    }
    if ( v12 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v13 = 0LL;
    LODWORD(v52) = *(_DWORD *)a2;
    v14 = (int)v52 >> 8;
    if ( (v52 & 0xFC00) != 0 )
      v13 = (unsigned __int8)(BYTE1(v52) & 0xFC) << 16;
    BYTE3(v52) = 64;
    BYTE1(v52) = v14 & 0xFE;
    do
    {
      *(_QWORD *)(a2 + 24) -= v12;
      BYTE2(v52) = (unsigned __int64)(v13 + *(_QWORD *)(a2 + 24)) >> 18;
      v15 = BYTE2(v52);
      *(_DWORD *)a2 = v52;
    }
    while ( !KiInsertTimerTable(a1, a2, v11, v15, 0LL) );
  }
  v16 = *(_QWORD **)(a2 + 8);
  v17 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  if ( v6 == 8 )
  {
    if ( v16 == v17 )
    {
LABEL_11:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v17 = v17;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v19 = (__int64)v16;
      v16 = (_QWORD *)*v16;
      v20 = *(_BYTE *)(v19 + 16);
      if ( v20 == 1 )
      {
        v21 = *(unsigned __int16 *)(v19 + 18);
      }
      else
      {
        if ( v20 == 2 )
        {
          *(_BYTE *)(v19 + 17) = 5;
          v55 = *(_QWORD *)(v19 + 24);
          *(_QWORD *)v19 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          v51 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v35, v19, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v55);
          v29 = (_QWORD *)(v55 + 8);
          v30 = v55;
          if ( (_QWORD *)*v29 == v29
            || *(_DWORD *)(v55 + 40) >= *(_DWORD *)(v55 + 44)
            || v51->Queue == (_DISPATCHER_HEADER *volatile)v55 && v51->WaitReason == 15 )
          {
LABEL_49:
            v32 = *(_DWORD *)(v30 + 4);
            *(_DWORD *)(v30 + 4) = v32 + 1;
            v33 = *(__int64 **)(v30 + 32);
            if ( *v33 != v30 + 24 )
              goto LABEL_29;
            *(_QWORD *)v19 = v30 + 24;
            *(_QWORD *)(v19 + 8) = v33;
            *v33 = v19;
            *(_QWORD *)(v30 + 32) = v19;
            if ( !v32 && (_QWORD *)*v29 != v29 )
            {
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v30);
              v30 = v55;
            }
          }
          else
          {
            v31 = KiWakeQueueWaiter((__int64)CurrentPrcb, (_QWORD *)v55, v19);
            v30 = v55;
            if ( !v31 )
            {
              v29 = (_QWORD *)(v55 + 8);
              goto LABEL_49;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
          goto LABEL_23;
        }
        v21 = 256LL;
      }
      KiTryUnwaitThread(a1, v19, v21, 0LL);
LABEL_23:
      if ( v16 == v17 )
        goto LABEL_11;
    }
  }
  if ( v16 != v17 )
  {
    while ( 1 )
    {
      v22 = (_QWORD *)*v16;
      v23 = (__int64)v16;
      v47 = v16;
      v16 = v22;
      v24 = (_QWORD *)v47[1];
      if ( (_QWORD *)v22[1] != v47 || *v24 != v23 )
LABEL_29:
        __fastfail(3u);
      *v24 = v22;
      v22[1] = v24;
      v25 = *(_BYTE *)(v23 + 16);
      if ( v25 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v23, *(unsigned __int16 *)(v23 + 18), 0LL) )
      {
        v26 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v26 )
          goto LABEL_12;
      }
LABEL_36:
      if ( v16 == v17 )
        goto LABEL_12;
    }
    if ( v25 != 2 )
    {
      KiTryUnwaitThread(a1, v23, 256LL, 0LL);
      goto LABEL_36;
    }
    *(_BYTE *)(v23 + 17) = 5;
    v56 = *(_QWORD *)(v23 + 24);
    *(_QWORD *)v23 = 0LL;
    v36 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v49 = KeGetCurrentPrcb();
    v37 = v49->CurrentThread;
    v51 = v37;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v38 = KeIsThreadRunning(v37);
      EtwTraceEnqueueWork(v40, v39, v38);
    }
    KiAcquireKobjectLockSafe(v56);
    v41 = (_QWORD *)(v56 + 8);
    v42 = v56;
    if ( (_QWORD *)*v41 != v41
      && *(_DWORD *)(v56 + 40) < *(_DWORD *)(v56 + 44)
      && (v51->Queue != (_DISPATCHER_HEADER *volatile)v56 || v51->WaitReason != 15) )
    {
      v43 = KiWakeQueueWaiter((__int64)v49, (_QWORD *)v56, (__int64)v47);
      v42 = v56;
      if ( v43 )
      {
LABEL_64:
        _InterlockedAnd((volatile signed __int32 *)v42, 0xFFFFFF7F);
        v26 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v26 )
          goto LABEL_12;
        goto LABEL_36;
      }
      v41 = (_QWORD *)(v56 + 8);
    }
    v44 = *(_DWORD *)(v42 + 4);
    *(_DWORD *)(v42 + 4) = v44 + 1;
    v45 = *(_QWORD **)(v42 + 32);
    if ( *v45 != v42 + 24 )
      goto LABEL_29;
    *v47 = v42 + 24;
    v47[1] = v45;
    *v45 = v47;
    *(_QWORD *)(v42 + 32) = v47;
    if ( !v44 && (_QWORD *)*v41 != v41 )
    {
      KiWakeOtherQueueWaiters((__int64)v49, v42);
      v42 = v56;
    }
    goto LABEL_64;
  }
LABEL_12:
  if ( v11 )
  {
    if ( a3 )
    {
      if ( (!KiSerializeTimerExpiration || *(_WORD *)(v11 + 2) < 0x500u)
        && (*(_BYTE *)v11 != 26 || !*(_BYTE *)(a1 + 11880)) )
      {
        *(_QWORD *)(a1 + 11808) = v11;
        if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v11 + 16)) == 0LL )
          _interlockedbittestandset64((volatile signed __int32 *)(v11 + 16), *(unsigned __int8 *)(a1 + 209));
        goto LABEL_18;
      }
    }
    else
    {
      a3 = (unsigned int *)&v50;
      v50 = MEMORY[0xFFFFF78000000014];
    }
    KiInsertQueueDpc(v11, *a3, a3[1], (volatile signed __int32 *)a2, v9);
    return 0LL;
  }
LABEL_18:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v9 << 24) | 0x80));
  return v11;
}
