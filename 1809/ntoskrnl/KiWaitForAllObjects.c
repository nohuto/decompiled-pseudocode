/*
 * XREFs of KiWaitForAllObjects @ 0x1400FA4A8
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14008B550 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14008B5D0 (KiCheckWaitNext.c)
 *     KiWaitSatisfyMutant @ 0x1400F9CE4 (KiWaitSatisfyMutant.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiWaitSatisfyOther @ 0x1400FA874 (KiWaitSatisfyOther.c)
 *     KiUnlockKobjectArray @ 0x1400FA8A4 (KiUnlockKobjectArray.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        LARGE_INTEGER *a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  char v8; // r13
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // r9d
  __int64 v12; // rsi
  __int64 *v13; // r12
  unsigned __int64 *v14; // r11
  __int64 *v15; // rbx
  unsigned __int64 v16; // r10
  unsigned int v17; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 CurrentIrql; // rdx
  char v20; // r15
  volatile __int64 WaitStatus; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  char *v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rcx
  char *v30; // r15
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // r15
  int *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  char v37; // r10
  __int64 v38; // r8
  __int64 v40; // rcx
  unsigned int v41; // r9d
  unsigned int v42; // edx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // r10
  __int64 QuadPart; // r9
  int v47; // r8d
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v49; // rdx
  struct _KPRCB *v51; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v53; // r8
  __int64 v54; // r8
  int v55; // eax
  _DWORD *v56; // rcx
  int v57; // eax
  char v58; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  LARGE_INTEGER v65; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v66; // [rsp+58h] [rbp-A8h]
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  char v68; // [rsp+68h] [rbp-98h] BYREF

  v7 = a7;
  v8 = a4;
  v9 = *a2;
  v10 = a3;
  v11 = 1;
  v12 = a1;
  v61 = a3;
  v13 = a2;
  v66 = a2;
  v63 = a1;
  v64 = (__int64)a7;
  v67 = v9;
  if ( a1 > 1 )
  {
    v14 = a2 + 1;
    v15 = &v67;
    do
    {
      v16 = *v14;
      v17 = v11;
      if ( *v15 > *v14 )
      {
        do
        {
          v40 = v17--;
          *(&v67 + v40) = *(&v67 + v17);
        }
        while ( v17 && *(&v67 + v17 - 1) > v16 );
      }
      ++v11;
      ++v15;
      ++v14;
      *(&v67 + v17) = v16;
    }
    while ( v11 < (unsigned int)v12 );
  }
  CurrentThread = KeGetCurrentThread();
  v20 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, &v65, &v60);
  v58 = v20;
  while ( 2 )
  {
    LOBYTE(CurrentIrql) = v8;
    LODWORD(WaitStatus) = KiBeginThreadWait((__int64)CurrentThread, CurrentIrql, v10, a5);
    if ( (_DWORD)WaitStatus )
      return (unsigned int)WaitStatus;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v12 )
    {
      v23 = (char *)v7 + 17;
      v24 = v13;
      v25 = v12;
      do
      {
        v26 = *v24;
        *(v23 - 1) = 0;
        *v23 = 4;
        *(_WORD *)(v23 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v23 + 7) = CurrentThread;
        *(_QWORD *)(v23 + 15) = v26;
        ++v24;
        v23 += 48;
        --v25;
      }
      while ( v25 );
    }
    v27 = v67;
    v28 = 0;
    v29 = v67;
    CurrentThread->WaitStatus = 0LL;
    KiAcquireKobjectLockSafe(v29);
    if ( (unsigned int)v12 > 1 )
    {
      v30 = &v68;
      v31 = (unsigned int)(v12 - 1);
      do
      {
        if ( *(_QWORD *)v30 != v27 )
        {
          v27 = *(_QWORD *)v30;
          KiAcquireKobjectLockSafe(*(_QWORD *)v30);
        }
        v30 += 8;
        --v31;
      }
      while ( v31 );
      v13 = v66;
      v20 = v58;
    }
    do
    {
      v32 = v13[v28];
      if ( (*(_BYTE *)v32 & 0x7F) != 2 )
      {
        if ( *(int *)(v32 + 4) <= 0 )
          break;
        goto LABEL_20;
      }
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
      v49 = *(struct _KTHREAD **)(v32 + 40);
      if ( CurrentThread == v49 && *(_BYTE *)(v32 + 2) == DpcRoutineActive && *(_DWORD *)(v32 + 4) == 0x80000000 )
      {
        KiUnlockKobjectArray(&v67, (unsigned int)v12);
        LOBYTE(v53) = v20;
        KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v53);
        RtlRaiseStatus(-1073741423);
      }
      if ( *(int *)(v32 + 4) <= 0 && (CurrentThread != v49 || *(_BYTE *)(v32 + 2) != DpcRoutineActive) )
        break;
LABEL_20:
      ++v28;
    }
    while ( v28 < (unsigned int)v12 );
    if ( v28 == (_DWORD)v12 )
    {
      if ( (_DWORD)v12 )
      {
        v33 = v12;
        do
        {
          v34 = (int *)*v13;
          if ( !(unsigned __int8)KiWaitSatisfyOther(*v13) && (*(_BYTE *)v34 & 0x7F) == v37 && v34[1]-- == 1 )
          {
            v51 = KeGetCurrentPrcb();
            v62 = 0;
            while ( 1 )
            {
              SchedulerAssist = v51->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v55 = SchedulerAssist[5];
                  SchedulerAssist[5] = v55 + 1;
                  if ( v55 == -1 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                break;
              v56 = v51->SchedulerAssist;
              if ( v56 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v57 = v56[5] - 1;
                  v56[5] = v57;
                  if ( !v57 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              do
                KeYieldProcessorEx(&v62, v35, v36);
              while ( CurrentThread->ThreadLock );
            }
            KiWaitSatisfyMutant(v34, (__int64)CurrentThread, (__int64)CurrentPrcb);
            KiReleaseThreadLockSafe(CurrentThread);
          }
          ++v13;
          --v33;
        }
        while ( v33 );
        LODWORD(v12) = v63;
      }
      KiUnlockKobjectArray(&v67, (unsigned int)v12);
      LOBYTE(v38) = v58;
      WaitStatus = CurrentThread->WaitStatus;
      KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v38);
    }
    else
    {
      if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v60, v65.QuadPart) )
      {
        KiUnlockKobjectArray(&v67, (unsigned int)v12);
        LOBYTE(v54) = v20;
        KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v54);
        LODWORD(WaitStatus) = 258;
        return (unsigned int)WaitStatus;
      }
      v7 = (__int64 *)v64;
      v42 = v41;
      if ( (_DWORD)v12 )
      {
        v43 = (_QWORD *)v64;
        do
        {
          v44 = v43[4] + 8LL;
          v45 = *(_QWORD **)(v43[4] + 16LL);
          if ( *v45 != v44 )
            __fastfail(3u);
          *v43 = v44;
          ++v42;
          v43[1] = v45;
          *v45 = v43;
          *(_QWORD *)(v44 + 8) = v43;
          v43 += 6;
        }
        while ( v42 < (unsigned int)v12 );
      }
      KiUnlockKobjectArray(&v67, (unsigned int)v12);
      QuadPart = v65.QuadPart;
      v47 = v60;
      CurrentThread->WaitBlockCount = v12;
      LODWORD(WaitStatus) = KiCommitThreadWait((__int64)CurrentThread, v7, v47, QuadPart);
      if ( (_DWORD)WaitStatus == 256 )
      {
        v20 = 0;
        v58 = 0;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v10 = v61;
        v8 = a4;
        CurrentThread->WaitIrql = CurrentIrql;
        continue;
      }
    }
    return (unsigned int)WaitStatus;
  }
}
