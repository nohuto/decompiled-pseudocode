/*
 * XREFs of KiWaitForAllObjects @ 0x140118F10
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14009A7D0 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14009AE10 (KiCheckWaitNext.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KiWaitSatisfyAny @ 0x1401192C0 (KiWaitSatisfyAny.c)
 *     KiUnlockKobjectArray @ 0x14011938C (KiUnlockKobjectArray.c)
 *     KiFastExitThreadWait @ 0x1401193C4 (KiFastExitThreadWait.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        volatile signed __int32 **a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned __int8 v7; // r14
  unsigned __int64 v8; // r13
  unsigned int v9; // r9d
  int v10; // esi
  ULONG_PTR *v11; // r12
  unsigned int v12; // edi
  unsigned __int64 *v13; // r11
  volatile signed __int32 **v14; // rbx
  unsigned __int64 v15; // r10
  unsigned int v16; // r8d
  struct _KTHREAD *CurrentThread; // rbx
  char v18; // r15
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v21; // rsi
  __int64 v22; // rcx
  volatile signed __int32 **v23; // r15
  char v24; // r8
  __int64 v25; // r10
  char *v26; // rcx
  ULONG_PTR *v27; // rdx
  _BYTE *v28; // rax
  int v29; // edx
  ULONG_PTR v30; // rcx
  __int64 *v31; // r11
  unsigned int v32; // r8d
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 **v35; // rdx
  unsigned __int64 v36; // r14
  unsigned int v37; // eax
  int v38; // r13d
  unsigned __int8 CurrentIrql; // dl
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // r8
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v45; // r8
  __int64 v46; // r8
  unsigned int v47; // edi
  unsigned __int64 v48; // rax
  char v49; // si
  PRTL_BALANCED_NODE v50; // rax
  PRTL_BALANCED_NODE v51; // r15
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  _KLOCK_ENTRY *v54; // r15
  ULONG_PTR v55; // rcx
  __int64 v56; // r8
  char v57; // [rsp+30h] [rbp-D0h]
  bool v58; // [rsp+30h] [rbp-D0h]
  __int64 v60; // [rsp+38h] [rbp-C8h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h]
  __int64 *v65; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+60h] [rbp-A0h]
  int v68; // [rsp+64h] [rbp-9Ch]
  volatile signed __int32 *v69; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v70[512]; // [rsp+78h] [rbp-88h] BYREF

  v7 = a4;
  v8 = 0LL;
  v65 = a7;
  v9 = 1;
  v10 = a3;
  v69 = *a2;
  v11 = (ULONG_PTR *)a2;
  v64 = a3;
  v12 = a1;
  v63 = a1;
  if ( a1 > 1 )
  {
    v13 = (unsigned __int64 *)(a2 + 1);
    v14 = &v69;
    do
    {
      v15 = *v13;
      v16 = v9;
      if ( (unsigned __int64)*v14 > *v13 )
      {
        do
        {
          v40 = v16--;
          *(_QWORD *)&v70[8 * v40 - 8] = *(_QWORD *)&v70[8 * v16 - 8];
        }
        while ( v16 && (unsigned __int64)*(&v69 + v16 - 1) > v15 );
      }
      ++v9;
      ++v14;
      ++v13;
      *(_QWORD *)&v70[8 * v16 - 8] = v15;
    }
    while ( v9 < v12 );
  }
  CurrentThread = KeGetCurrentThread();
  v18 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, &v66, &v62);
  v57 = v18;
LABEL_6:
  LODWORD(WaitStatus) = KiBeginThreadWait((__int64)CurrentThread, v7, v10, a5);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = v69;
    KiAcquireKobjectLockSafe(v69);
    if ( v12 > 1 )
    {
      v22 = v12 - 1;
      v60 = v22;
      v23 = (volatile signed __int32 **)v70;
      do
      {
        if ( *v23 != v21 )
        {
          v21 = *v23;
          KiAcquireKobjectLockSafe(*v23);
          v22 = v60;
        }
        ++v23;
        v60 = --v22;
      }
      while ( v22 );
      v18 = v57;
    }
    if ( v12 )
    {
      v24 = 0;
      v25 = v12;
      v26 = (char *)v65 + 17;
      v27 = v11;
      do
      {
        v28 = (_BYTE *)*v27;
        *(v26 - 1) = 0;
        *v26 = 4;
        *(_WORD *)(v26 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v26 + 7) = CurrentThread;
        *(_QWORD *)(v26 + 15) = v28;
        v26 += 48;
        if ( (*(_BYTE *)*v27 & 0x7F) == 2 && (*(_BYTE *)(*v27 + 48) & 2) != 0 )
          v8 |= 1LL << v24;
        ++v24;
        ++v27;
        --v25;
      }
      while ( v25 );
    }
    CurrentThread->WaitStatus = 0LL;
    v29 = 0;
    CurrentThread->AbWaitObject = 0LL;
    while ( 1 )
    {
      v30 = v11[v29];
      if ( (*(_BYTE *)v30 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v45 = *(struct _KTHREAD **)(v30 + 40);
        if ( CurrentThread == v45 && *(_BYTE *)(v30 + 2) == DpcRoutineActive && *(_DWORD *)(v30 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v69, v12);
          LOBYTE(v46) = v18;
          KiFastExitThreadWait(CurrentPrcb, CurrentThread, v46);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v30 + 4) <= 0 && (CurrentThread != v45 || *(_BYTE *)(v30 + 2) != DpcRoutineActive) )
        {
LABEL_23:
          if ( v29 == v12 )
          {
            if ( v12 )
            {
              v41 = v12;
              do
              {
                KiWaitSatisfyAny(*v11++);
                --v41;
              }
              while ( v41 );
            }
            KiUnlockKobjectArray(&v69, v12);
            WaitStatus = CurrentThread->WaitStatus;
            LOBYTE(v42) = v18;
            CurrentThread->AbWaitObject = 0LL;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v42);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v62, v66) )
          {
            KiUnlockKobjectArray(&v69, v12);
            LOBYTE(v56) = v18;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v56);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v32 = 0;
            if ( v12 )
            {
              v33 = v31;
              do
              {
                v34 = v33[4] + 8;
                v35 = *(__int64 ***)(v33[4] + 16);
                if ( *v35 != (__int64 *)v34 )
                  __fastfail(3u);
                *v33 = v34;
                ++v32;
                v33[1] = (__int64)v35;
                *v35 = v33;
                *(_QWORD *)(v34 + 8) = v33;
                v33 += 6;
              }
              while ( v32 < v12 );
            }
            KiUnlockKobjectArray(&v69, v12);
            CurrentThread->WaitBlockCount = v12;
            v36 = 0LL;
            if ( v8 )
            {
              v47 = 0;
              do
              {
                _BitScanForward64(&v48, v8);
                v49 = v48;
                v67 = v48;
                _bittestandreset64((__int64 *)&v8, (unsigned int)v48);
                v50 = KeAbPreAcquire(v11[v48], 0LL, 0);
                v51 = v50;
                if ( !v50 )
                  break;
                v36 |= 1LL << v49;
                KeAbPreWait((__int64)v50);
                v52 = v47++;
                v70[v52 + 504] = (2 * (16 * (LOBYTE(v51[1].Children[0]) - 50LL) / 96)) | 1;
              }
              while ( v8 );
              v12 = v63;
            }
            v37 = KiCommitThreadWait((__int64)CurrentThread, v65, v62, v66);
            LODWORD(WaitStatus) = v37;
            v58 = v37 <= 0x3F || v37 - 128 <= 0x3F;
            CurrentThread->AbWaitObject = 0LL;
            v38 = 0;
            if ( v36 )
            {
              do
              {
                _BitScanForward64(&v53, v36);
                v68 = v53;
                v36 &= ~(1LL << v53);
                v61 = (unsigned int)v53;
                v54 = &KeGetCurrentThread()->LockEntries[v70[v38 + 504] >> 1];
                v55 = v11[(unsigned int)v53];
                if ( v58 )
                {
                  KeAbPreAcquire(v55, &v54->TreeNode, 1);
                  v54->AcquiredByte |= 1u;
                }
                else
                {
                  KeAbPreAcquire(v55, &v54->TreeNode, 0);
                  KeAbPostReleaseEx(v11[v61], v54);
                }
                ++v38;
              }
              while ( v36 );
              v12 = v63;
            }
            if ( (_DWORD)WaitStatus == 256 )
            {
              v18 = 0;
              v57 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v10 = v64;
              v8 = 0LL;
              v7 = a4;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_6;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v30 + 4) <= 0 )
      {
        goto LABEL_23;
      }
      if ( ++v29 >= v12 )
        goto LABEL_23;
    }
  }
  return (unsigned int)WaitStatus;
}
